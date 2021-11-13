//
//  main.cpp
//  pairs_of_songs divisible_by_60
//
//  Created by Oluwatosin  Oseni on 08/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using std::unordered_map;
using std::vector;
using std::pair;

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int pairs=0;
        unordered_map<int,int> cache;
        for(auto i=0;i<time.size();++i){
            int t=time[i];
            int mathval=60-(t%60);
            if(cache.find(mathval)!=cache.end())
                pairs+=cache[mathval];
            if(cache.find(t%60)==cache.end())
                  cache[t%60]=1;
            else
               ++cache[t&60];
        }
        return pairs;
        
    }
};

//class Solution {
//public:
//    int numPairsDivisibleBy60(vector<int>& time) {
//        int pairs=0;
//        unordered_map<int,vector<int>> cache;
//        for(auto i=0;i<time.size();++i){
//            int t=time[i];
//            if(cache.find(t)==cache.end()){
//                cache[t%60]={i};
//            }else{
//                cache[t].push_back(i);
//            }
//            for (auto iter=cache.begin();iter!=cache.end();++iter){
//                int val=iter->first;
//                const vector<int> &tempMem=iter->second;
//                if(  ((val+t)%60)   ==0       ){
//                    for(auto index:tempMem){
//                        if(index<i){
//                            ++pairs;
//                        }
//                    }
//                }
//            }
//        }
//        return pairs;
//    }
//};


    
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Solution s;
    vector<int> time1={30,20,150,100,40};
    vector<int> time2={60,60,60};
    std::cout<<s.numPairsDivisibleBy60(time1);
    return 0;
}
