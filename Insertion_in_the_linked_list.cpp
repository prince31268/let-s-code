#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int count(struct Node* head){
    int cnt=0;

    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

struct Node* createLinkedList(){
    struct Node* head=NULL;
    struct Node* temp=NULL;

    int n;
    cout<<"Enter the number of elements in the linked list: ";
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

void Insert(struct Node** head, int position, int x) {
    if (position < 0 || position > count(*head))
        return;

    struct Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* current = *head;
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}





int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);
    Insert(&head,3,15);
    DisplayLinkedList(head);
}