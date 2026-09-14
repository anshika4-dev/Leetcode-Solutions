class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Odd length → skip middle node
        if (fast)
            slow = slow->next;

        // Reverse second half
        slow = reverse(slow);

        // Compare
        ListNode* temp = head;

        while (slow) {
            if (temp->val != slow->val)
                return false;

            temp = temp->next;
            slow = slow->next;
        }

        return true;
    }
};