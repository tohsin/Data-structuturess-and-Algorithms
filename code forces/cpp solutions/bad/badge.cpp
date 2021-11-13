#include <iostream>
#include <vector>
// #include<set>
// #include<map>
using namespace std;


// template < typename F, typename S >
// ostream& operator << ( ostream& os, const pair< F, S > & p ) {
//     return os << "(" << p.first << ", " << p.second << ")";
// }

// template < typename T >
// ostream &operator << ( ostream & os, const vector< T > &v ) {
//     os << "{";
//     typename vector< T > :: const_iterator it;
//     for( it = v.begin(); it != v.end(); it++ ) {
//         if( it != v.begin() ) os << ", ";
//         os << *it;
//     }
//     return os << "}";
// }

// template < typename T >
// ostream &operator << ( ostream & os, const set< T > &v ) {
//     os << "[";
//     typename set< T > :: const_iterator it;
//     for ( it = v.begin(); it != v.end(); it++ ) {
//         if( it != v.begin() ) os << ", ";
//         os << *it;
//     }
//     return os << "]";
// }

// template < typename F, typename S >
// ostream &operator << ( ostream & os, const map< F, S > &v ) {
//     os << "[";
//     typename map< F , S >::const_iterator it;
//     for( it = v.begin(); it != v.end(); it++ ) {
//         if( it != v.begin() ) os << ", ";
//         os << it -> first << " = " << it -> second ;
//     }
//     return os << "]";
// }

// #define deb(x) cerr << #x << " = " << x << endl;





int solveIndex(vector<int> &values,int i){
    int pi=i;
    vector<int> checker(values.size(),0);
    while(checker[pi]!=1){
        checker[pi]=1;
        pi=values[pi]-1;
    }
    return (pi+1);
}
    
int main(){
    int n;
    cin>>n;
    vector<int> valuesx;
    while(n--){
        int x;
        cin>>x;
        valuesx.push_back(x);
    }
    for(int i=0;i<valuesx.size();++i){
        cout<<solveIndex(valuesx,i)<<" ";
    }
    
    

 // g++ -std=c++17 -g badge.cpp -o main
}