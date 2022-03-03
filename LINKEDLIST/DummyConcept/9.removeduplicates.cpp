https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/ 
ListNode* deleteDuplicates(ListNode* head) {
        int count = 0;
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy; 
        ListNode* i = head;
        ListNode* temp = head;
        while (temp != nullptr) {
            while (temp != nullptr && i->val == temp->val) {
                count++;
                temp = temp->next;
            }
            if (count == 1) {
                prev = prev->next; 
            }
            if (count > 1) {
                prev->next = temp;
            }
            i = temp;
            count = 0;
        }
        return dummy->next;
    }
