#include <stdbool.h>
#include <stddef.h>

/**
 * <a href="https://leetcode.com/problems/linked-list-cycle/">141. Linked List Cycle</a>
 * Given a linked list, determine if it has a cycle in it.
 * To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.
 * @author wolf
 * @date 2019-03-23 18:45
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head){
    if (head == NULL || head->next == NULL){
        return false;
    }
}


