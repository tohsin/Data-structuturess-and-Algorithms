//
//  main.cpp
//  addOneRowToTree
//
//  Created by Oluwatosin  Oseni on 17/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>



 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode *pi=root;
        return pi;
    }
};
int main() {
    // insert code here...
    
    return 0;
}
