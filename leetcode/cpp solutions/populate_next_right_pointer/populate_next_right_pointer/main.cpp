//
//  main.cpp
//  populate_next_right_pointer
//
//  Created by Oluwatosin  Oseni on 06/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
public:
    Node():val(0),left(NULL),right(NULL),next(NULL){}
    Node(int _val):val(_val),left(NULL),right(NULL),next(NULL){}
    Node(int _val,Node* _left,Node* _right):val(_val),left(_left),right(_right),next(NULL){}
    
};
class Solution{
public:
    Node* connect(Node* root){
        dfs(root,nullptr);
        return root;
    }
    void dfs(Node* root,Node* parent){
        if(root){
            //we assume parent level is finshed and try to connect root
            //if current root is parents left child and parent right child exist
            //then point it next to parent right
            if(parent && parent->left==root && parent->right){
                root->next=parent->right;
            }
            if (parent && parent->right==root && parent->next && parent->next->left)
                root->next=parent->next->left;
            //otherwise lets trasverse parent's next chain and look for children of those nodes
           
            dfs(root->left,root);
            dfs(root->right,root);
        }
    }
    void printTree(Node* root){
        if (root!=nullptr){
            std::cout<<root->val<<' '<<root->next<<' '<<std::endl;
            printTree(root->left);
            printTree(root->right);
        }
        
    }
};

class Solution1{
public:
    Node* connect(Node* root){
        dfs(root,nullptr);
        return root;
    }
    void dfs(Node* root,Node* parent){
        if(root){
            //we assume parent level is finshed and try to connect root
            //if current root is parents left child and parent right child exist
            //then point it next to parent right
            
            if(parent && parent->left==root && parent->right){
                root->next=parent->right;
            }
            if (parent){
                auto pp=parent->next;
                while (pp && !root->next) {
                    if(pp->left){
                        root->next=pp->left;
                        pp=pp->next;
                    }
                    else if(pp->right)
                        root->next = pp->right;
                        pp=pp->next;
                }

            }
               
            
            //otherwise lets trasverse parent's next chain and look for children of those nodes
           
            dfs(root->left,root);
            dfs(root->right,root);
        }
    }
    void printTree(Node* root){
        if (root!=nullptr){
            std::cout<<root->val<<' ';
            if(root->next)
                std::cout<<root->next->val<<' '<<std::endl;
            printTree(root->left);
            printTree(root->right);
        }
        
    }
};
int main() {
    // insert code here...
//    Node* head=new Node(1);
//
//    head->left=new Node(2);
//    head->right=new Node(3);
//
//    head->left->left=new Node(4);
//
//    head->right->right=new Node(5);
//
//
//
//
//
//
//    Solution1* s=new Solution1();
//
//
//
//    s->connect(head);
//    s->printTree(head);
    std::cout<<"Hello";
    return 0;
}
