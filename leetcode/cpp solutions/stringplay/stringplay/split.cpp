//
//  split.cpp
//  stringplay
//
//  Created by Oluwatosin  Oseni on 12/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include "split.hpp"
#include <vector>
#include <string>
#include <cctype>
using std::vector;
using std::string;

bool space(char c) {
    return isspace(c);
}

bool not_space(char c){
    return !isspace(c);
    
}
vector <string> split(const string& str){
    vector<string> ret;
    typedef string::const_iterator iter;
    iter i=str.begin();
    
    while(i!=str.end()){
        i=find_if(i,str.end(),not_space);
        iter j=find_if(i,str.end(),space);
        if (i!=str.end()){
            ret.push_back(string(i,j));
            
        }
        i=j;
    }
    return ret;
    //    string_size i=0;
    
}
//vector<string> split(const string& s){
//    vector<string> ret;
//    typedef string::size_type string_size;
//    string_size i=0;
//
//    while(i!=s.size()){
//        while(i!=s.size()&& isspace(s[i]))
//            ++i;
//        string_size j = i;
//        while (j != s.size() && !isspace(s[j]))
//            j++;
//        // if we found some nonwhitespace characters
//        if (i != j) {
//        // copy from s starting at i and taking j - i chars
//            ret.push_back(s.substr(i, j - i));
//            i = j;
//        }
//    }
//        return ret;
//}

bool not_url_char(char c) {
// characters, in addition to alphanumerics, that can appear in a URL
    static const string url_ch = "~;/?:@=&$-_.+!*'(),";
// see whether c can appear in a URL and return the negative return !(isalnum(c) ||
    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());

}
string::const_iterator url_end(string::const_iterator b, string::const_iterator e) {
    return find_if(b, e, not_url_char);
}

string::const_iterator url_beg(string::const_iterator b, string::const_iterator e) {
    static const string sep = "://";
    typedef string::const_iterator iter;
// i marks where the separator was found
    iter i = b;
    while ((i = search(i, e, sep.begin(), sep.end())) != e) {
// make sure the separator isn't at the beginning or end of the line
        if (i != b && i + sep.size() != e) {
// beg marks the beginning of the protocol-name
            iter beg = i;
            while (beg != b && isalpha(beg[-1]))
                --beg;
            // is there at least one appropriate character before and after the separator?
            if (beg != i && !not_url_char(i[sep.size()]))
                return beg;
        }
        // the separator we found wasn't part of a URL advance i past this separator
        i += sep.size();
    }
    return e;
}
vector<string> find_url(const string& s){
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin(), e = s.end();
    
    while (b!=e){
        // look for one or more letters followed by ://
        b=url_beg(b,e);
        // if we found it
        if(b!=e){

            // get the rest of the URL
            iter after=url_end(b,e);
            
            ret.push_back(string(b, after));
            // advance b and check for more URLs on this line

            b = after;
        }
    }
    return ret;
}

    



