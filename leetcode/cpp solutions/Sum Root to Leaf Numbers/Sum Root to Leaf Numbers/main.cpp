//
//  main.cpp
//  Sum Root to Leaf Numbers
//
//  Created by Oluwatosin  Oseni on 26/11/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

using std::stack;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solutions {
public:
    int sumNumbers(TreeNode* root) {
        int ts = 0;
        if(!root) return 0;
        
        stack<TreeNode*> st;
        stack<int> sum;
        
        st.push(root);
        sum.push(0);
        int s = 0;
        while(!st.empty()){
            if(root){
                s = s*10 + root->val;
                if(!root->right && !root->left){
                    ts += s;
                    root = NULL;
                    continue;
                }
                if(root->right){
                    st.push(root->right);
                    sum.push(s);
                }
                if(root->left) root = root->left;
                else  root = NULL;
            }
            else{
                root = st.top();st.pop();
                s = sum.top();sum.pop();
            }
        }
        return ts;
    }
};
class Solution {
public:
    int ans=0;
    void solve(TreeNode* root,std::string s){
        if(!root) return;
        s+=std::to_string(root->val);
        if(!root->left and !root->right){
            ans+=stoi(s);
        }
        solve(root->left,s);
        solve(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        solve(root,"");
        return ans;
    }
    bool ifleaf(TreeNode* node){
        return node->left==NULL and node->right==NULL;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    s.sumNumbers(<#TreeNode *root#>)
    return 0;
}
