    Node* copyRandomList(Node* head) {
        if(!head)return head;
        
        
        Node* curr = head;
        while(curr){
            Node* newNode = new Node(curr -> val);
            newNode -> next = curr -> next;
            curr -> next = newNode;
            curr = curr -> next -> next;
        }
        
        // 1 -> 1-> 5 -> 5 -> 3 -> 3 -> NULL
        
        // connect the random pointers
        Node* res = head -> next;
        curr = head -> next;
        Node* prev = head;
        while(curr){
            curr -> random = prev -> random == NULL ? NULL : prev -> random -> next;
            prev = curr -> next;
            curr = curr -> next ? curr -> next -> next : NULL;
        }
        
        // Seperate the two lists.
        while(head){
            Node* temp = head -> next;
            head -> next = temp -> next;
            temp -> next = temp -> next ? temp -> next -> next : NULL;
            head = head -> next;
        }
        return res;
    }
