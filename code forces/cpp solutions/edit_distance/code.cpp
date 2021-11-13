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

typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

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


// int gcd(int a, int b) 
// { 
//     if (a == 0) 
//         return b; 
//     return gcd(b % a, a); 
// } 
  
// // Function to find gcd of array of 
// // numbers 
// int findGCD(int arr[], int n) 
// { 
//     int result = arr[0]; 
//     for (int i = 1; i < n; i++) 
//         result = gcd(arr[i], result); 
  
//     return result; 
// } 



// for a map to check if exist
 // if (m.count(key))
 //    // key exists

    // bool isPalindrome(string &s, int low, int high) {
    //     while (low < high) {
    //         if (s[low++] != s[high--]) return false;
    //     }
    //     return true;
    // }

   //      h o r s e
   //    0 1 2 3 4 5
   // r  1 1 
   // o  2
   // s  3
int cost(char a, char b){
    if (a==b) return 0;
    else return 1;
}
 int minDistance(string word1, string word2) {
    int n=word2.length();
    int m=word1.length();

    vector<vector<int> >(n+1,vector<int>(m+1 , 0)) dp;
    deb(dp);
    for(int i=0;i<m+1;++i){
        dp[0][i]=i;
    }
    for(int i=0;i<n+1;++i){
        dp[i][0]=i;
    }
    deb(dp);
    for(int i=1;i<n+1;++i){
        for(int j=1;j<m+1;++j){
            dp[i][j]=min(dp[i-1][j],dp[i][j-1],cost(word1[i],word2)+dp[i-1][j-1]);
            deb(dp);
        }
    }
    return dp[n+1][m+1];
        
}
int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    string w2="ros";
    string w1="horse";
    deb(minDistance(w1,w2));


}
