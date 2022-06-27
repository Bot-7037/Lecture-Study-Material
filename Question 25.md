## Add two linked list

[Question Link](https://leetcode.com/problems/add-two-numbers/)

## Solution

```c++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = NULL; // final ans
        int sum=0;
        ListNode **node = &l3;
        while(l1!=NULL || l2 != NULL){
            if(l1!=NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            (*node) = new ListNode(sum%10); // creatinf node to store the sum
            sum /= 10;
            node = &((*node)->next); //move to next node
        }
        return l3;
    }
};
```
