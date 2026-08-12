Node* reverseList(Node* head) {
    Node* temp = head;
    while(temp!= NULL){
        Node* front = temp->next;
        temp->next = Node* back = NULL;
        back = temp;
        temp = front;
    }
    return back;
}