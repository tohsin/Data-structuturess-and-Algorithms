//
//  main.cpp
//  stringplay
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "split.hpp"
//using std::vector;
//using std::string;
//using std::cin;
//using std::cout;
//using std::endl;

using namespace std;

template <class T>
T median(vector<T> v){
    typedef typename vector<T>::size_type vec_sz;

    vec_sz size = v.size();
    if (size==0){
        throw std::domain_error("median of an emty vector");
    }
    sort(v.begin(),v.end())
    vec_sz mid = size/2;
    return size % 2 == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    while(getline(cin,s)){
        vector<string> v = split(s);
        for (vector<string>::size_type i = 0; i != v.size(); ++i)
            cout << v[i] << "Hey"<<endl;
    }
    return 0;
}
