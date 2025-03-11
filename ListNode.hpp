#ifndef LISTNODE_HPP
#define LISTNODE_HPP

class ListNode {
public:
    int val;
    ListNode *next;

    
    ListNode(int x) : val(x), next(nullptr) {}
};

#endif
