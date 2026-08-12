//Brute Force Approach
Node* findMiddle(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }

    //Find the middle element
    Node* mid = (cnt/2)+1;
    temp=head;
    while(temp!=NULL){
        mid--;
        if (mid==0){
            break;
        }else{
            temp = temp->next;
        }
    }
    return temp;
}

//Optimal Approach using the slow and fast pointer approach
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}