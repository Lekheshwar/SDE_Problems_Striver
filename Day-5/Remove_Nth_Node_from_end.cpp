ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* ptx = NULL;
        while(n-- > 0){
            curr = curr -> next;
        }
        ptx = head;
        ListNode* prev = head;
        while(curr != NULL){
            curr = curr -> next;
            prev = ptx;
            ptx = ptx -> next;
        }
        prev -> next = ptx -> next;
        if(ptx == head){
            head = head -> next;
        }
        delete(ptx);
        return head;
    }
