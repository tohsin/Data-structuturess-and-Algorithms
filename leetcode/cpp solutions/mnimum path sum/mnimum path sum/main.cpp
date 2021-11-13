//
//  main.cpp
//  mnimum path sum
//
//  Created by Oluwatosin  Oseni on 27/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>


using std::vector;
using std::min;

int minPathSum(vector<vector<int>>& grid) {
    auto row_length=grid.size();
    auto col_length=grid[0].size();
    vector<vector<int>> dp(row_length,vector<int>(col_length,0));
    dp[0][0]=grid[0][0];
    for(int row=1;row<row_length;row++)
        dp[row][0]=dp[row-1][0]+grid[row][0];
    for(int col=1;col<col_length;col++)
        dp[0][col]=dp[0][col-1]+grid[0][col];
    for(int i=1;i<row_length;i++){
        for(int j=1;j<col_length; j++){
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
        }
    }
//    int ans;
//    ans= ;
    return dp.back().back();
}
int minPathSum2(vector<vector<int>>& grid) {
    auto row_length=grid.size();
    auto col_length=grid[0].size();
    vector<vector<int>> dp(row_length,vector<int>(col_length,0));
    
   
    for(int i=0;i<row_length;i++){
        for(int j=0;j<col_length; j++){
            if(i>0 and j>0){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }else if (i==0 && j>0){
                dp[i][j]=dp[i][j-1]+grid[i][j];
            }else if(j==0 && i>0){
                dp[i][j]=dp[i-1][j]+grid[i][j];
            }else{
                dp[0][0]=grid[0][0];
            }
        }
    }
    //    int ans;
    //    ans= ;
        return dp.back().back();
}
int minPathSum3(vector<vector<int>>& grid) {
    auto row_length=grid.size();
    auto col_length=grid[0].size();
    vector<vector<int>> dp(row_length,vector<int>(col_length,0));
    for(int i=0;i<row_length;i++){
        for(int j=0;j<col_length; j++){
            if(i>0 and j>0){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }else if (i==0 && j>0){
                dp[i][j]=dp[i][j-1]+grid[i][j];
            }else if(j==0 && i>0){
                dp[i][j]=dp[i-1][j]+grid[i][j];
            }else{
                dp[0][0]=grid[0][0];
            }
        }
    }
    //    int ans;
    //    ans= ;
        return dp.back().back();
}
int minPathSum4(vector<vector<int>>& grid) {
    int invalid=-1;
    auto row_length=grid.size();
    auto col_length=grid[0].size();
    for(int i=0;i<row_length;i++){
        for(int j=0;j<col_length; j++){
            int up=(i==0)?invalid:grid[i-1][j];
            int left=(j=0)?invalid: grid[i][j-1];
            int min_val=min(up,left);
            if min_val!=
        }
    }
    //    int ans;
    //    ans= ;
        return grid.back().back();
}
int main(){
    vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};
    vector<vector<int>> grid2={{1,2,3},{4,5,6}};
    int ans=minPathSum4(grid);
    std::cout<<ans<<std::endl;
    return 0;
}
