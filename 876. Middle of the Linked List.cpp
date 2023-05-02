///876. Middle of the Linked List
/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* end = head;
        while (end != NULL && end->next != NULL){
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};
