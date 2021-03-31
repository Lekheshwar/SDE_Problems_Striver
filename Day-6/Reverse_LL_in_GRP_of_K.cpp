//
//
  // RECURSIVE 
  ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        
        // Check if there are K nodes in the list         
        for(int i = 0; i < k; i++) {
            if(temp == NULL) return head;
            temp = temp->next;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int count = 0;
        
        while(curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next) {
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }


// ITERATIVE
//
// ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || k == 1)
            return head;
        
        int cnt = 0;
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        ListNode* curr = dummy, *prev = dummy, *nxt = curr;
        
        while(curr -> next != NULL){
            cnt++;
            curr = curr -> next;
        }
           
        
        while(cnt >= k){
            
            curr = prev -> next;
            nxt = curr -> next;
            
            for(int i = 1; i < k; i++){
                curr -> next = nxt -> next;
                nxt -> next = prev -> next;
                prev -> next = nxt;
                nxt = curr -> next;
            }
            
            prev = curr;
            cnt -= k;
            
        }
        return dummy -> next;
        
    }
