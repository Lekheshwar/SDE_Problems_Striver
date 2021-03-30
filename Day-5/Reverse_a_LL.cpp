ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* p = NULL;
        ListNode* nxt = NULL;
        while(curr != NULL){
            nxt = curr -> next;
            curr -> next = p;
            p = curr;
            curr = nxt;
        }
        return p;
    }
