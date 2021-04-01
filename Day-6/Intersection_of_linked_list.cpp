ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1 = headA;
        ListNode* l2 = headB;
        while(l1 && l2){
            if(l1 == l2)
                return l1;
            l1 = l1 -> next;
            l2 = l2 -> next;
            
        }
        if(l1){
            l2 = headA;
            while(l1){
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
            l1 = headB;
        }
        else if(l2){
            l1 = headB;
            while(l2){
                l2 = l2 -> next;
                l1 = l1 -> next;
            }
            l2 = headA;
        }
        while(l1 != NULL){
            if(l1 == l2)
                return l1;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        return NULL;
    }




// -_-
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode *a = headA, *b = headB;
        
        while (a || b) {
            if (a == b) return a;
            
            if (a) a = a->next;
            else a = headB;
            
            if (b) b = b->next;
            else b = headA;
        }
        return NULL;
    }
