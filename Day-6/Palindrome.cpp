ListNode* reverse(ListNode* head){
        ListNode *curr = head, *prev = NULL, *nxt;
        while(curr){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(!head || head -> next == NULL)
            return true;
        
        ListNode *sl = head, *ff = head;
        while(ff && ff -> next != NULL){
            ff = ff -> next -> next;
            sl = sl -> next;
        }

        ListNode* temp;
        if(ff){
            temp = reverse(sl -> next);
        }
        else{
            temp = reverse(sl);
        }
        
        while(head && temp){
            if(head -> val != temp -> val)
                return false;
            head = head -> next;
            temp = temp -> next;
        }
        

