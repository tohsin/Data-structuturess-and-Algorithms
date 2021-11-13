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


int solver(int d){//d=2 ,                 3
    int next=d+1;// next=3,               4
    int nextp=d+next;//nextp =3+2=5       7
    int answer=next *nextp;              // 28
    return answer;
}






int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int s=solver(d);
        cout<<s<<endl;
    }
}