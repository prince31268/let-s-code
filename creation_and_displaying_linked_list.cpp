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
    cout<<"Enter the number of element in the Linked List: ";
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
    cout<<"The linked list elements  are: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}



void DisplayLinkedListbyRecursion(struct Node* head){
    if(head!=NULL){
        cout<<head->data<<" ";
        DisplayLinkedListbyRecursion(head->next);
    }
}


void reverseDisplayLinkedListbyRecursion(struct Node* head){
    if(head!=NULL){    
        DisplayLinkedListbyRecursion(head->next);
        cout<<head->data<<" ";
    }
}

int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);
    cout<<"The linked list displayed recursively are: ";
    DisplayLinkedListbyRecursion(head);
    cout<<endl;
    cout<<"The reversed linked list displayed recursively are: ";
    reverseDisplayLinkedListbyRecursion(head);
}