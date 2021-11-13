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
    int sumNumbers(TreeNode* root) {
        stack <TreeNode*> s;
        TreeNode *curr=root;
        s.push_back(curr);
        while (!s.empty() || curr !=NULL){
            while (curr != NULL){
                q
            }
        }
    }
};
 int main(){
     return 0;
 }