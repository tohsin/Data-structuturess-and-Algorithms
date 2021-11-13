//
//  main.cpp
//  Random_access_linkedList
//
//  Created by Oluwatosin  Oseni on 02/12/2020.
//  Copyright © 2020 Massive Dynamics. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    /** head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    int count=0;
    ListNode* guy;
    Solution(ListNode* head) {
        guy=head;
        while(guy!=nullptr) {
            /* code */
            count+=1;
            guy=guy->next;
        }
        guy=head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int v1 = rand() % count+1;
        count=0;
        while(guy!=nullptr){
            if(count==v1){
                return guy->val;
            }else{
                count+=1;
                guy=guy->next;
            }
            
        }
        return 0;
    }
};


int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
     head->next->next->next->next->next=new ListNode(6);
     head->next->next->next->next->next->next=new ListNode(7);
    Solution* s=new Solution(head);
    std::cout<<s->getRandom();
}
