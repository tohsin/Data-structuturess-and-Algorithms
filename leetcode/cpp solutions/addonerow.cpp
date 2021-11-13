#include <iostream>
//  g++ -std=c++11
struct TreeNode{
    int val;
    TreeNode *left, *right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};
struct info{
    int level;
    TreeNode *parent;
};
class Solution{
public:
    TreeNode* addonerow(TreeNode* root,int v,int d){
        if (d==1){
            TreeNode* node=new TreeNode(v,root,nullptr);
            return node;
        }else{
            TreeNode *pi=root;
            dfs(pi,1,v,d);
            return pi;
        }
       

    }
    void dfs(TreeNode* node,int depth,int v,int d){
        if(node!= nullptr){
            if(depth==d){
                    TreeNode* copyleft=node->left;
                    node->left= new TreeNode(v);
                    node->left->left=copyleft;

                    TreeNode* copyright=node->right;
                    node->right=new TreeNode(v);
                    node->right->right=copyright;


                
            }
            dfs(node->left,1+depth,v,d);
            dfs(node->right,1+depth,v,d);
        }
    }
};
int main(){
   
    TreeNode* root=new TreeNode(4);
    root->left=new TreeNode(2);
    root->right=new TreeNode(6);
    root->right->left=new TreeNode(5);

    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(1);
    Solution soln;
    soln.addonerow(root,1,2);
     return 0;
}
