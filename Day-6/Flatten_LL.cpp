Node* merge(Node* l1, Node* l2){
    
    Node* dummy = new Node(0);
    Node* curr = dummy;
    while(l1 && l2){
        if(l1 -> data < l2 -> data){
            curr -> bottom = l1;
            l1 = l1 -> bottom;
        }
        else{
            curr -> bottom = l2;
            l2 = l2 -> bottom;
        }
        curr = curr -> bottom;
    }
    
    while(l1){
        curr -> bottom = l1;
        l1 = l1 -> bottom;
        curr = curr -> bottom;
    }
    
    while(l2){
        curr -> bottom = l2;
        l2 = l2 -> bottom;
        curr = curr -> bottom;
    }
    
    return dummy -> bottom;
}    
    
    
    
Node *flatten(Node *root)
{
   if(root -> next == NULL){
       return root;
   }
   
   
   //merging two lists
   Node *dummy = new Node(0);
   Node *l1 = flatten(root -> next);
   
   dummy -> bottom = merge(root, l1);
   
   root -> next = NULL;
   
   return dummy -> bottom;
}
