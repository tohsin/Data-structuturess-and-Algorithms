#include <iostream>
#include <vector>
#include<set>
#include<map>
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

void solver(vector<int> &values,int n,int k){
   sort(values.begin(),values.end());
   // deb(values)
   // deb(k);
   // deb(n);
    int ans=values[n-1];
  
    // deb(ans)
    for(int i=n-2;i>=n-k;i--){
            // deb(i);
            ans*=values[i];
    }
    cout<<ans<<"\n"; 
}


int main(){
    freopen("mult.in", "r", stdin);
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int N=n;
        vector<int> values;
        while(n--){
            int val;
            cin>>val;
            values.push_back(val);

        }
        solver(values,N,k);
        
    }
    return 0;
}