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


// go to layout first select 3
//then groups max col =2
// command shift b to run
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

int minv=0;
void backtracking(int y ,vector<vector<char> > &board,
				vector<bool> &row,vector<bool> &col,
				int move_count,int minv){
		
		// deb(row);
		// deb(col);
		// deb(move_count);
		// deb(minv);
	    if(y==board.size()){
	    	// string b="here";
	    	// deb(b);
	        minv=max(minv,move_count);
	        return;
	    } 
	    for(int x=0;x<board[0].size();++x){
	        if( (board[y][x]=='B') || row[y] || col[x] ) continue;
	        row[y]=true;col[x]=true;
	        backtracking(y+1,board,row,col,move_count+1,minv);
	        row[y]=false;col[x]=false;
	        
	    }
	    backtracking(y+1,board,row,col,move_count,minv);
}
	

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<char> > board;
        for(int i=0;i<n;++i){
            string s;
            cin>>s;
            vector<char> values;
            for(int h=0;h<s.length();++h){
            	values.push_back(s[h]);
            }
            board.push_back(values);

        }

        vector<bool> row(board.size(),false);
        vector<bool> col(board[0].size(),false);
        int minv=0;
        deb(board);
      	backtracking(0, board, row,col,0, minv);
      	cout<<minv<<"\n";
    }
}