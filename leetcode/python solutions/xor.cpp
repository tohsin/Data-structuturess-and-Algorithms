#include <iostream>
#include <vector>
#include<set>
#include<map>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <algorithm>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <assert.h>
#include <bitset>
using namespace std;

#define putb push_back
#define f first
#define s second


template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define deb(x) cerr << #x << " = " << x << endl;
vector<vector<int> > solution;
vector<int> decode(vector<int>& A) {
        int n = A.size() + 1, a = 0;
        for (int i = 0; i <= n; ++i) {
            a ^= i;
            if (i < n && i % 2 == 1) {
                a ^= A[i];
            }
        }
        vector<int> res;
        res.push_back(a);
        for (int x=0;x<A.size();++x) {
            a=A[x];
            res.push_back(res.back() ^ a);
        }
        return res;
    }
void backtrack(vector<int> &encoded,vector<int> cur,int n){
        if(cur.size()==n){
            solution.push_back(cur);
            return;
        }
        for(int i=0;i<n+1;++i){
            if(cur.size()==n){
                solution.push_back(cur);
                return;
            }
            int sz=cur.size();
            if(sz>0){            
                int prev=cur[sz-1];
                int fwd=i+1;  
                vector<int>::iterator it; 
                it=find(cur.begin(),cur.end(),i+1);
                
                if( it==cur.end() ){
                    int z=prev ^ i+1;
                    int en=encoded[sz-1];
                    if(   (cur[sz-1] ^ i+1) != encoded[sz-1] )continue;
                    cur.push_back(i+1);
                    backtrack(encoded,cur,n);
                    cur.pop_back();
                }else{
                    continue;
                }
            }
            else{
                 cur.push_back(i+1);
                 backtrack(encoded,cur,n);
                 cur.pop_back();
            }
           
        }
    }

// void decode(vector<int>& encoded){
//     vector<int> cur;
//     int n=encoded.size()+1;
//     backtrack(encoded,cur,n);
    
// }
           




int main(){

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    vector<int> encoded;
    encoded.push_back(3);
    encoded.push_back(1);
    decode(encoded);
}