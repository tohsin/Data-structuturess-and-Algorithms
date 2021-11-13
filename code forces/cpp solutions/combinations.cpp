#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;

#define pb push_back
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


void backtrack(vector<int> &cur,vector<vector<int>> &answer,int index,int k,int n){
        // deb(answer);
        if (cur.size()==k){
            answer.pb(cur);
            return;
        }

        for(int i=index;i<n;++i){
            deb(cur);
            cur.pb(i+1);
            backtrack(cur,answer,i+1,k,n);
            cur.pop_back();
        }
        return;
}


vector<vector<int>> combine(int n, int k) {
        vector<int> cur;
        vector<vector<int>> answer;
        backtrack(cur,answer, 0,  k,n);
        deb(answer);
        return answer;
}


int main(){
    int n,k;
    cin>>n>>k;
    combine(n, k);
}