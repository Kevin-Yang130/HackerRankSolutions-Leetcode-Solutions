/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //SETS UP THE SLOW AND FAST POINTERS
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
         
        //REVERSES THE SECOND HALF OF THE LINKEDLIST
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        ListNode* currnext = nullptr;
        while(curr) {
            currnext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = currnext;
        }

        //COMPARE THE FIRST HALF WITH THE SECOND HALF
        ListNode* right = prev;
        ListNode* left = head;

        while(right) {
             if(right->val != left->val) {
                 return false;
             }
             right = right->next;
             left = left->next;
        }
        return true;

    }
};
