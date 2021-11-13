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

int solver(vector<int> &values,int k){
    int count=0;
    auto sz=values.size();
    unordered 
    for(int i=0;i<sz-2;++i){
        for(int j=i+1;j<sz-1;++j){
            int a=values[j];
            int b=values[i];
            int dif=values[j]-values[i];
            if (!(dif<=k)){
                continue;
            }
            for(int r=j+1;r<sz;++r){
                int c=values[r];
                int dif1=values[r]-values[j];
                int dif2=values[r]-values[i];
                if ( !(dif1<=k) && !(dif2<=k) ) {
                    continue;
                }else{
                    ++count;
                    mp.insert({i,true});
                    mp.insert({j,true});
                    mp.insert({r,true});
                    if(values.size()<3){
                        return count;
                    }
                
                }

            }
        }
    }
    return count;
}

int main(){
    // freopen("mex.in", "r", stdin);
    // int t;
    // cin>>t;
    
    // while(t--){
    // }
    // vector<int> values={7 ,4 ,6 ,2 ,3 ,2};
    vector<int> values;
    values.push_back(7);
    values.push_back(4);
    values.push_back(6);
    values.push_back(2);
    values.push_back(3);
    values.push_back(2);
    sort(values.begin(),values.end());
    int  count=0;
    int ans=0;
    int k=5;
    cout<<solver(values,k);

    
    deb(ans);
}