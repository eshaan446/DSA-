//Operations on Singly Linked List
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    
};
//Function to insert at head
void InsertAtHead(Node *&head,int d){
        Node *temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    //Function to print a Linked List
    void PrintLinkedList(Node *&head){
        Node *temp=head; //Point a temporary node and make it iterate
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    //Function to insert at tail
    void InsertAtTail(Node*&tail,int d){
        Node*temp=new Node(d);
        tail->next=temp;
        tail=temp;           //Now current temp is our tail//easy english
    }
    //Function to insert anywhere in middle
    void InsertAtMiddle(Node*&head, int position,int d){
      Node*temp=head;
      int cnt=1;  //we are currently on head so thats position 1
      while(cnt<position-1){
        temp=temp->next;
        cnt++;
      }
      Node* NodeToBeInserted=new Node(d);
      NodeToBeInserted->next=temp->next;
      temp->next=NodeToBeInserted;           //just imagine how the bond will be broken and fixed

    }
    void Deletenode(int position, Node*&head){
        if(position==1){  //What if we want to delete the head ??
            Node*temp=head;  //a temp node pointed to head;
            head=temp->next; //shifting our head to node after the head
            temp->next=NULL; //pointing our node to null
            delete temp;     //then deleting its memory

        }
        else{
            Node*curr=head;   //creating two pinters and we have to delete the curr node
            Node*prev;        //node just before head
            int cnt=1;        //reaching that position
            while(cnt<position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
       

    }

int main() {
    Node *node1=new Node(78);   //dynamic allocated in heap
    //cout<<node1->data<<endl;;
    //cout<<node1->next;
    Node*head=node1;
    Node*tail=node1;
    //InsertAtHead(head,25);          //Output= 91 90 67 25 78 //gets inserted on head
    //InsertAtHead(head,67);
    //InsertAtHead(head,90);
    //InsertAtHead(head,91);
    InsertAtTail(tail,79);
    InsertAtTail(tail,80);
    InsertAtTail(tail,81); //Output = 78 785 79 80 81 82
    InsertAtTail(tail,82);
    InsertAtMiddle(head,2,785);
    PrintLinkedList(head);
    cout<<endl; 
    Deletenode(3,head);    //Output- 78 785 79 80 81 82 
                                    //78 785 80 81 82
    PrintLinkedList(head); 
    


    
}
