#include "Solution.hpp"

bool Solution::hasCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return false; // No cycle if list is empty or has one element
    }
    
    // Initialize slow and fast pointers
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;          // Move slow pointer 1 step
        fast = fast->next->next;    // Move fast pointer 2 steps
        
        // If slow and fast pointers meet, there's a cycle
        if (slow == fast) {
            return true;
        }
    }
    
    return false; // If fast pointer reaches end, no cycle
}
