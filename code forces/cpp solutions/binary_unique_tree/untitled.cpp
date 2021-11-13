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

#define pb push_back
#define f first
#define s second
typedef vector<int> vi;
typedef pair<int,int> pi;

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





int solution(int n){
    vector<int> dp(n+1,1);
    dp[1]=1;
    int m=n;
    for (int n=2;n<=m;++n){
        int sexy=2*dp[n-1];
        for(int i=2;i<(n/2)+1;++i){
            sexy=sexy+(  2 * dp[i-1]*dp[n-i]);
        }
        if((n%2)!=0){
            sexy=sexy+(dp[n/2]*dp[n/2]);
        }
        dp[n]=sexy;

    }
    return dp[m];
}
// int solution(int n){
//     // if ((n%2)==0){

//     // }
//     vi dp(n+1,1);
//     dp[1]=1;
//     dp[2]=2;

//     for(int i=3;i<n+1;++i){
//         deb(i);
       
//         int solution=(2*dp[i-1]);
//         deb(solution);
//         int lady=round((float)i/2);
//         if((i%2)==0){
//             ++lady;
//         }else{
//             lady=lady+2;
//         }
//         deb(lady);
//         for(int x =2;x<lady;++x){
            
//             deb(x);
//             solution=solution+(dp[x-1] * dp[i-x]);
//         }
//         deb(solution);
        
//         dp[i]=solution;
//         deb(dp);
//     }
//     return dp[n];
// }
int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    solution(5);
   


}
