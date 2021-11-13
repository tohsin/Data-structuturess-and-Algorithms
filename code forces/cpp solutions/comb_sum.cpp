#include <iostream>
#include <vector>
#include<set>
#include<map>
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

void backtrack(vector<int> curr,vector<int> &candidates,vector<vector<int>> &answer,int index,int target,int n){
    if(target<0){
        return;
    }
    if(target==0){
        answer.push_back(curr);
        return;
    }
    for(int i=index;i<n;++i){
        curr.push_back(candidates[i]);
        backtrack(curr,candidates,answer,i,target-candidates[i],n);
        curr.pop_back();

    }
    return;
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> answer;
    vector<int> curr;
    auto n=candidates.size();
    backtrack(curr,candidates,answer,0,target,n);
    deb(answer);
    return answer;

}



int main(){
    vector<int> values={2,3,6,7};
    int target=7;
    combinationSum(values,target);

}