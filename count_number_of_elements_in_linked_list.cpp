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
    cout<<"Enter the number of element in the linked list:";
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;

        Node* newNode=new Node;
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

int count(struct Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

int adding(struct Node* head){
    // int sum=0;
    // while(head!=NULL){
    //     sum+=head->data;
    //     head=head->next;
    // }
    // return sum;


    //or
    //recursively

    if(head==NULL){
        return 0;
    }
    else{
        return adding(head->next)+head->data;
    }
}


int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);
    cout<<endl;
    cout<<"The number of element in the linked list is : "<<count(head);
    cout<<endl;

}