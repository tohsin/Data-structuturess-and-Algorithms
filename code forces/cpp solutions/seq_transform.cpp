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

struct Infox{
    int lastIndex;
    int count;
};
int solver(vector<int> &values){
    // map<int,  Infox*> map;
    map<int,  pair<int ,int>> map;
    for(int i=0;i<values.size();++i){
        if(map.find(values[i])==map.end()){
            int c=1;
            if(i==0 || i==values.size()-1){    
                // Infox *pi=new Infox;
                // pi->lastIsndex=i;
                // pi->count=1;
                map.insert({values[i] , pair<int,int>(i,1) });
            }else{
                // Infox *pi=new Infox;
                // pi->lastIndex=i;
                // pi->count=2;
                // map.insert({ values[i] , pi});
                map.insert({ values[i] , pair<int,int>(i,2) });
            }
           

        }
        else{
            //found
            // deb(map[values[i]].first);
            // deb(i);
            if((i-map[values[i]].first)!=1){  

                if(i<values.size()-1){
                    ++map[values[i]].second; 
                    map[values[i]].first=i;
                }
            }
            

        }
    }
    // deb(map);
    int minv=2*100000;
    if (map.size()==1){
        return 0;
    }else{
        for(auto x:map){
            if(x.second.second<minv)
                minv=x.second.second;
        }
        
        return minv;
    }
    
    
}







int main(){
   
    int t;
    cin>>t;
    deb(t)
    while(t--) {
        int n;
        cin>>n;
        deb(n)
        vector <int> v(n);
        for(int i=0;i<n;++i){
            cin >> v[i];
        }
        
        deb(v);
        int answer=solver(v);
        deb(answer);

    }
   
    

}