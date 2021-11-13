//
//  main.cpp
//  primer
//
//  Created by Oluwatosin  Oseni on 19/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::stack;
using std::unordered_map;
//template <T>
//void print(T value){
//    cout<<statement<<endl;
int dval=6;
int  *pi = &dval;
int *p;

struct Node{
    
};
string countofAtoms(string formula){
    stack<string> s;
    
    
    return "";
}
vector<int> findSmallestSetOverVertices(int n,vector<vector<int>>& edges){
    vector<int> answer;
    map<int,int> cache;
    for(auto edge: edges){
        cache.insert({edge[1],0});
    }
    for(int i=0;i<n;i++){
        if(cache.find(i)== cache.end()){
            answer.push_back(i);
        }
    }
    return answer;
           
}
//Node* connect(){
//
//}
int main(int argc, const char * argv[]) {
//    vector<vector<int>> edges;
//    vector<int> answer;
//    edges={{0,1},{0,2},{2,5},{3,4}};
//    answer=findSmallestSetOverVertices(5, edges);
//    for(auto iter=answer.begin();iter != answer.end();++iter){
//        std::cout<<*iter<<' ';
//    }
//    std::cout<<endl;
//    std::cout<<"hi"<<' '<<std::endl;

    
//    // insert code here...
//    print("hello world");
//    int i=9;
//    int &hy=i;
//    print("");
//    return 0;
//    int i=0;
    p = &dval;
    *p = 0;
    std::cout<<*p<<"";
    std::string val1="k4(ON(SO3)2)2";
    std::string val1ans="K4N2O14s4";
    std::string val2="Mg(OH)2";
    std::string val2ans="H2MgO2";
    std::string val3="Be32";
    std::string val3ans="Be32";
    std::string val4="H2O";
    std::string val4ans="H2O";
    return 0;
}


