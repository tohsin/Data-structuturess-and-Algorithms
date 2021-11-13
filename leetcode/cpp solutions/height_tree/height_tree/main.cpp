//
//  main.cpp
//  height_tree
//
//  Created by Oluwatosin  Oseni on 01/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using std::vector;
using std::queue;
using std::max;
using std::pair;
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
    int maxDepth(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        if (root==nullptr) return 0;
        q.push({root,1});
        int max_height=1;
        while(!q.empty()){
            TreeNode* node=q.front().first;
            int height=q.front().second;
            max_height=max(max_height,height);
            q.pop();
            if(node->right != nullptr)
                q.push({node->right,height+1});
            if(node->left != nullptr)
                q.push({node->left,height+1});
            
        }
        return max_height;
    }
};

int main() {
    // insert code here...
    struct TreeNode *root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    Solution s;
    int ans=s.maxDepth(root);
    std::cout<<ans;
    return 0;
}
