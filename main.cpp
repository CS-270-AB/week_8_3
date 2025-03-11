#include <iostream>
#include "ListNode.hpp"  
#include "Solution.hpp"  

using namespace std;

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    
    head->next->next->next->next = head->next; 

    Solution solution;
    if (solution.hasCycle(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle detected!" << endl;
    }
    
    return 0;
}
