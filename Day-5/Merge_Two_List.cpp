ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;
    ListNode* curr = NULL;
    ListNode* head = NULL;
       while(l1 && l2){
           if(l1 -> val < l2 -> val){
               if(!head){
                   head = l1;
                   curr = l1;
               }
               else{
                    curr -> next = l1;
                   curr = curr -> next;
               }
               l1 = l1 -> next;
               
           }
           else{
               if(!head){
                   head = l2;
                   curr = l2;
               }
                else{
                    curr -> next = l2;
                   curr = curr -> next;
               }
               l2 = l2 -> next;
           }
       }
        if(l1)
            curr -> next = l1;
        if(l2)
            curr -> next = l2;
        return head;
    }


// Recursive
//
ListNode* reverseList(ListNode* head) {
        //BASE CASE
        
        if(head == NULL || head->next == NULL)return head;
        
        //
        ListNode* temp = head;
        head = reverseList(head->next);
        temp->next->next = temp;
        temp->next = NULL;
        
        return head;
    }
