#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;


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



void generateposibilities(int n,int i,vector<int> arr,vector<vector<int>> &possiblities){
     if (i == n) { 
        possiblities.push_back(arr);
        return; 
    } 
  
    arr[i] = 0; 
    generateposibilities(n, i+1,arr, possiblities); 
    arr[i] = 1; 
    generateposibilities(n, i+1,arr, possiblities); 
}
// void solver(vector<int> values){
//     int n=values.size();
//     vector<int> possible;
//     vector<vector<int>> possiblities;
//     generateposibilities(n,0,possible,possiblities);
  
// }
void solver(){
    int n=3;
    vector<int> possible;
    vector<vector<int>> possiblities;
    generateposibilities(n,0,possible,possiblities);
    deb(possiblities);
}





int main(){
    solver();


}