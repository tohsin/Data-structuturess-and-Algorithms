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
#include <unordered_map>
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

bool isAnagram(string s, string t) {
        map< string,int> mp;
        for(int i=0;i<s.length();++i){

            string curr=s.substr(i,i+1);
            deb(curr);
            if(mp.count(curr)){
                    //key exist
                ++mp[curr];
            }   
            else{
                mp[curr]=1;
            }
                
        }
        deb(mp);
        for(int i=0;i<t.length();++i){
            string curr=s.substr(i,i+1);
            if(mp.count(curr)){
                if(mp[curr]==0){
                    return false;
                }else{
                    --mp[curr];
                }
            }else{
                return false;
            }
            
        }
        return true;
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    deb(isAnagram("ab","a"));

}
