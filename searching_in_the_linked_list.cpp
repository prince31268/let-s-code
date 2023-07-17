#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};
struct Node* createLinkedList(){
    struct Node*  head=NULL;
    struct Node* temp=NULL;

    int n;
    cout<<"Enter the number of element in the linked list:";
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;

        Node * newNode=new Node;
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

struct Node* linearsearching(struct Node* head,int key){
    while(head!=NULL){
        if(head->data==key)
            return head;
            head=head->next;
    }
    return NULL;
}



struct Node* recursiveSearch(struct Node* head,int key){
    if(head==NULL) return NULL;

    if(head->data==key) return head;
    return recursiveSearch(head->next,key);
}


int main(){
    struct Node* head=createLinkedList();
    DisplayLinkedList(head);

    struct Node *tmp=linearsearching(head,5);
    if(tmp){
        cout<<tmp->data<<" is found ";
    }
    else{
        cout<<tmp->data<<" is not found ";
    }


    cout<<endl;
    cout<<endl;
    struct Node *tmp2=recursiveSearch(head,5);
    if(tmp2){
        cout<<"Key is found "<<tmp2->data;
    }
    else{
        cout<<"Key is not found "<<endl;
    }
}