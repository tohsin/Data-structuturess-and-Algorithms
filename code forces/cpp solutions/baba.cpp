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


int solver(vector<int> &values,int l,int r){
    
    auto start=values.begin()+l-1;
    auto end=values.begin()+r;
    vector<int> slice(r-l+1);
    copy(start,end,slice.begin());

    sort(slice.begin(),slice.end());
    int n=slice.size();
    if(slice[0]!=1){
        return 1;
    }else{
        for(int i=0;i<slice.size()-1;++i){
            if (slice[i]+1!=slice[i+1]){
                return slice[i]+1;
            }
        }
        return slice[n-1]+1;
    }


}

int main(){
    freopen("mex.in", "r", stdin);
    int t;
    cin>>t;
    
    while(t--){
        // cout<<"\n";
        // cout<<"ran here"<<endl;
        int n,q;
        cin>>n>>q;
        vector<int> values;
        
        while(n--) {
            /* code */
            int val;
            cin>>val;
            values.push_back(val);
        }

        while(q--){
            int li,ri;
            cin>>li>>ri;
            cout<<solver(values,li,ri)<<"\n";

            // deb(solver(values, li, ri));

        }
        

    }
    return 0;
 

   


}