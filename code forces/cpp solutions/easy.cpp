#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;

#define putb push_back
#define f first
#define s second


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




int main(){

    // freopen("hello.in", "r", stdin);
    // int t,x,y;
    // scanf("%d", &t);
    // while(t--){
    //     scanf("%d", &x);
    //     scanf("%d", &y);
    //     int s=x+y;
    //     cout<<"sum ="<<s<<endl;
    // }
    freopen("hello.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int x, y; cin >> x >> y;
        cout << "sum = " << x + y << endl;
    }
    return 0;
}