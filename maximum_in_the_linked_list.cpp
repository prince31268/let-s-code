#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node * createLinkedList(){
    struct Node* head=NULL;
    struct Node* temp=NULL;

    int n;
    cout<<"Enter the number of the element in the linked List: ";
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

int maxi(struct Node* head){
    int maxii=INT_MIN;
    while(head!=NULL){
        if(head->data>maxii){
            maxii=head->data;
        }
        head=head->next;
    }
    return maxii;
}

int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);

    cout<<endl;
    cout<<"The maximum of all the element in the linked list is: "<<maxi(head)<<endl;
}