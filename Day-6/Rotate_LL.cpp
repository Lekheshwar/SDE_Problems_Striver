ListNode* rotateRight(ListNode* head, int k) {
        
        if(k == 0 || !head)
            return head;
        
        int cnt = 0;
        
        ListNode *curr = head, *sl = head, *prev = NULL;
        while(curr != NULL){
            cnt++;
            curr = curr -> next;
        }
        
        k %= cnt;
        
        if(k == 0)
            return head;
        
        curr = head;
        
        while(k-- > 1){
            curr = curr -> next;
        }
        
        while(curr -> next != NULL){
            curr = curr -> next;
            prev = sl;
            sl = sl -> next;
        }
        
        curr -> next = head;
        prev -> next =NULL;
        return sl;
        
    }
