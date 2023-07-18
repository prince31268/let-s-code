#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* createLinkedList(){
    struct Node* head=NULL;
    struct Node* temp=NULL;

    int n;
    cout<<"Enter the number of the element in the linked list: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;

        struct Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    return head;
}

void DisplayLinkedList(struct Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void reversing(struct Node* p, struct Node*& first) {
    p = first;
    struct Node* q = NULL, *r = NULL;
    
    while (p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    
    first = q;
}



int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);

    reversing(head,head);

    DisplayLinkedList(head);
}