iListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        int c = 0;
        while(l1 && l2){
            int ans = c + l1 -> val + l2 -> val;
            curr -> next = new ListNode(ans % 10);
            curr = curr -> next;
            c = ans / 10;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        while(l1){
            c += l1 -> val;
            curr -> next = new ListNode(c % 10);
            curr = curr -> next;
            c /= 10;
            l1 = l1 -> next;
        }
        while(l2){
            c += l2 -> val;
            curr -> next = new ListNode(c % 10);
            curr = curr -> next;
            c /= 10;
            l2 = l2 -> next;
        }
        if(c){
            curr -> next = new ListNode(c);
        }
        return head -> next;
    }
