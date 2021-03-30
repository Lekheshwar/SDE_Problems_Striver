void deleteNode(ListNode* node) {
        ListNode* temp;
        node -> val = node -> next -> val;
        temp = node -> next;
        node -> next = temp -> next;
        delete(temp);
    }
