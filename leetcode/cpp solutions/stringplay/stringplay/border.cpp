//
//  border.cpp
//  stringplay
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include "border.hpp"
#include <algorithm>
using std::vector;
using std::string;
using std::max;

string::size_type width(const vector<string>& v){
    string::size_type maxlen=0;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
       maxlen = max(maxlen, v[i].size());
    return maxlen;
}
vector<string> frame(const vector<string>& v){
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');
    
    ret.push_back(border);
    
    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
            ret.push_back( "* " + v[i] +
                  string(maxlen - v[i].size(), ' ') + " *");
    }
    ret.push_back(border);
    return ret;

}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom){
    vector<string> ret=top;
//    for (vector<string>::const_iterator it = bottom.begin();
//         it != bottom.end(); ++it){
//        ret.push_back(*it);
//    }
    ret.insert(ret.end(), bottom.begin(), bottom.end());

//    copy(bottom.begin(), bottom.end(), back_inserter(ret));
    return ret;
}
//
//it = begin++;
//is equivalent to
//it = begin;
//++begin;
