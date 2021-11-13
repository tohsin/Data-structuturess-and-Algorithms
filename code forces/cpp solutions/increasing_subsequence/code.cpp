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



void backtracking(vector<int>& nums,vector<int>& cache,int index,vector<vector<int> > & result,int last_index){
    if (cache.size()>1){
        deb("solution found")
        deb(cache);
        if (cache.size()>1 || )
        result.push_back(cache);
        deb(result);
    }
    // if (index==last_index){
    //     deb(cache);
    //     result.push_back(cache);
    //     deb(result);
    //     return;
    // }
   for(int i=index;i<nums.size();++i){
       
        if((cache.size()==0) || (nums[i]>=cache[cache.size()-1])){
            deb("enter condition ");       
            deb(i);
            deb(cache);
            cache.push_back(nums[i]);
            deb(cache)
            backtracking(nums,cache,i+1,result,last_index);
            cache.pop_back();
        }
    }

}

vector<vector<int> > findSubsequences(vector<int>& nums) {
        vector<vector<int> > result;
        vector<int> cache;
        backtracking(nums, cache, 0, result, nums.size()-1);
        deb(result);
        return result;
        
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   vector<int> values;
   values.push_back(4);
   values.push_back(6);
   values.push_back(7);
   values.push_back(7);
   findSubsequences(values);
}
