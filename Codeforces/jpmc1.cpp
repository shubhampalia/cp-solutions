struct Node {
    int data;
    struct Node* next;
};

struct Node* ReOrderList(struct Node *head) {
    if (!head || !head->next) return;
    
    struct Node *p1 = head, *p2 = head->next;
    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }

    struct Node *head2 = p1->next;
    p1->next = NULL;
    
    p2 = head2->next;
    head2->next = NULL;
    while (p2) {
        p1 = p2->next;
        p2->next = head2;
        head2 = p2;
        p2 = p1;
    }

    for (p1 = head, p2 = head2; p1; ) {
        auto t = p1->next;
        p1 = p1->next = p2;
        p2 = t;
    }
    
    return head;
}

int main() {


    struct Node * res=head;
    head->next=p2;
}