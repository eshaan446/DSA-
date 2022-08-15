#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node*BuildTree(node*root){  //Building tree with this function
    cout<<"Enter data"<<endl;  
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter for inserting in left of"<<data<<endl;
    root->left=BuildTree(root->left);
    cout<<"Enter for inserting in right of"<<data<<endl;
    root->right=BuildTree(root->right);
    return root;

}
void LevelOrderTraversal(node*&root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*tmp=q.front();
        cout<<tmp->data<<" ";
        q.pop();
        if(tmp->left){
            q.push(tmp->left);
        }
        if(tmp->right){
            q.push(tmp->right);
        }
    }
}
void PreOrderTraversal(node*root){    //NLR or Root-Left-Right
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void InOrderTraversal(node*root){  //LNR or Left-Root-Right
    if(root==NULL){
        return;
    }
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}
void PostOrderTraversal(node*root){ //LRN or Left-Right-Root
    if(root==NULL){
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    node*root=NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    root=BuildTree(root);
    //cout<<"Printing LOL"<<endl;
    //LevelOrderTraversal(root);
    //PreOrderTraversal(root);
    //InOrderTraversal(root);
    PostOrderTraversal(root);
}