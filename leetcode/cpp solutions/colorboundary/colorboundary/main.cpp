//
//  main.cpp
//  colorboundary
//
//  Created by Oluwatosin  Oseni on 16/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;


int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    
    int n, m;
    vector<vector<int> > visited;
    vector<int> X={1, -1, 0, 0}, Y={0, 0, 1, -1};
    
    void dfs(int i, int j, int& color, vector<vector<int> >& grid){
        visited[i][j]=1;
        int flag=0;
        for(int k=0; k<4; k++){
            int ni=i+X[k], nj=j+Y[k];
            if(ni>=0 && ni<n && nj>=0 && nj<m){
                if(!visited[ni][nj]){
                    if(grid[ni][nj]==grid[i][j])
                        dfs(ni, nj, color, grid);
                    else flag=1;
                }
            }
            else flag=1;
        }
        if(flag) grid[i][j]=color;
    }
    
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int r0, int c0, int color) {
        n=grid.size();
        m=grid[0].size();
        visited=vector<vector<int> >(n, vector<int>(m, 0));
//        vector<n,>visited;
        dfs(r0, c0, color, grid);
        return grid;
    }
};

