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


#define Fo(i,a,b) for (int i = a; i < b; ++i)


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


void solver(vector<int>& data,int n ,int t){
    int ans=0;
    for(int i=0;i<n-1;++i){
        int localmin=data[i];
        int h=i;
        for(int j=i;j<n;++j){
            if (data[j]<localmin){
                h=j;
                localmin=data[j];
            }
        }
        deb("unsorted");
        deb(data);
        reverse(data.begin()+i,data.begin()+h+1);
        deb("sorted");
        deb(data);
        deb(h);
        deb(i);
        ans+=(h-i)+1;
    }
    // sting ansss="Case #"+t+": "+ans
    cout<<"Case #"<<t<<":"<<" "<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;cin>>t;
    
    for(int v=0;v<t;++v){
        int n;cin>>n;
        vector<int> values;
        for(int x=0;x<n;++x){
            int li;cin>>li;
            values.push_back(li);
        }
        deb("new question")
        if(n==1){
            cout<<"Case #"<<v+1<<":"<<" "<<1<<"\n";
        }else{
             solver(values,n,v+1);
        }
       
    }
}
