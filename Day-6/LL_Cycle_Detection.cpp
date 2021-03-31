 ListNode *detectCycle(ListNode *head) {
        
        if(!head)
            return head;
        
        ListNode *ff = head, *sl = head;
        
        while(1){
            if(ff == NULL || ff -> next == NULL)
                return NULL;
            ff = ff -> next -> next;
            sl = sl -> next;
            if(ff == sl)break;
            
            
        }
        ff = head;
        while(ff != sl){
            ff = ff -> next;
            sl = sl -> next;
        }
        
        return ff;
    }
