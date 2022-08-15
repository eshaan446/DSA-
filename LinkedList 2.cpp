//Operations on Doubly Linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void PrintLinkedList(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertAtTail(Node*&tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void InsertAtMiddle(Node*&head, int position,int d){
    if(position==1){
        Node*temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    else{
        Node*temp=head;
        Node* NodeToBeInserted=new Node(d);
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        NodeToBeInserted->next=temp->next;
        temp->next->prev=NodeToBeInserted;
        NodeToBeInserted->prev=temp;
        temp->next=NodeToBeInserted;
    }
}
void Deletenode(Node*&head,int position){
    
   if(position==1){
    Node*temp=head;
    head=temp->next;            //Deleting at head
    temp->next->prev=NULL;
    temp->next=NULL;
    delete temp;
   }
   else{
    Node* curr=head;
    Node*prev;                  //Deleting at other positions
    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->next=NULL;
    prev->next=curr->next;
    curr->prev=NULL;
    delete curr;

   }

}


int main(){
    Node* node1=new Node(56);
    Node* head=node1;
    Node* tail=node1;
    PrintLinkedList(head);
    cout<<endl;
    InsertAtHead(head, 55);
    PrintLinkedList(head);cout<<endl;
    InsertAtHead(head, 54);
    PrintLinkedList(head);cout<<endl;
    InsertAtTail(tail,57);
    PrintLinkedList(head);cout<<endl;
    InsertAtMiddle(head,2,545);
    PrintLinkedList(head);cout<<endl;
    Deletenode(head,5);
    PrintLinkedList(head);cout<<endl;
    




}