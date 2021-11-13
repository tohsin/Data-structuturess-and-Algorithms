//
//  main.cpp
//  primer2
//
//  Created by Oluwatosin  Oseni on 23/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
std::string removeshii(std::string s){
    std::vector<int> count(26,0);
    std::bitset<26> visited;
    for(const auto c: s)
        ++count[c -'a'];
    std::string ans="";
    for(const auto c:s){
        --count[c-'a'];
        if(ans.empty()){
            ans+=c;
            visited.set(c-'a');
            continue;
        }
        if(visited[c-'a'])continue;
        while(!ans.empty() && ans.back()>c && count[ans.back()-'a']){
            visited.reset(ans.back()-'a');
            ans.pop_back();
        }
        ans+=c;
        visited.set(c-'a');
        
    }
    return ans;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int dval=53;
    int exchange=98;
    int* pi=&dval;
    int* pi2;
    std::cout<<*pi<<std::endl;
    *pi=0;
    pi2=&exchange;
//    std::cout<<removeshii("bcabc")<<std::endl;
    std::cout<<removeshii("bcabc")<<std::endl;
    return 0;
}
