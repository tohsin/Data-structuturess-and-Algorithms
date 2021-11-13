//
//  main.cpp
//  spiral_matrix
//
//  Created by Oluwatosin  Oseni on 07/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector< vector<int>> cache=vector<vector<int>>(n,vector<int>(n,0));
        vector<vector<int>> instructions={{1,0},{0,1},{-1,0},{0,-1}};
        int val=1;
        int x;
        int y;
        x=y=0;
        auto pif=instructions.begin();
        while(val<n+1){
            cache[x][y]=val;
            if()
        }
        return cache;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
