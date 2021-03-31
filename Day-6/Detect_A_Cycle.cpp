bool hasCycle(ListNode *head) {
        if(!head)return false;
        ListNode* ff = head -> next;
        ListNode* ss = head;
        while(ff != NULL && ff -> next != NULL){
            if(ff == ss)return true;
            ff = ff -> next -> next;
            ss = ss -> next;
            
        }
        return false;
    }
