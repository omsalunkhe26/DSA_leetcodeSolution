class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // Empty list or single node
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Find length and tail
        int n = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            n++;
        }

        // Remove unnecessary rotations
        k = k % n;

        if (k == 0)
            return head;

        // Make the list circular
        tail->next = head;

        // Find new tail
        int steps = n - k;

        while (steps--) {
            tail = tail->next;
        }

        // Node after new tail becomes new head
        head = tail->next;

        // Break the circle
        tail->next = NULL;

        return head;
    }
};