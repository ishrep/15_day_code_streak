#include<iostream>

using namespace std;
struct node{
    int data;
    node *left=NULL;
    node *right=NULL;
}*root = NULL;

void InOrder(node *temp){
    if(temp == NULL) return;
    InOrder(temp->left);
    cout<<temp->data<<" ";
    InOrder(temp->right);
}
void PostOrder(node *temp){
    if(temp == NULL) return;
    PostOrder(temp->left);
    PostOrder(temp->right);
    cout<<temp->data<<" ";
}
void PreOrder(node *temp){
    if(temp == NULL) return;
    cout<<temp->data<<" ";
    PreOrder(temp->left);
    
    PreOrder(temp->right);
}

void insert(){
    node *newnode = new node,*temp = root;
    cin>>newnode->data;
    if (temp==NULL){
        root = newnode;
        return;
    }
    while(1){
        if(newnode->data>=temp->data){
            if (temp->right == NULL){
                temp->right =newnode;
                return;

            }
            temp=temp->right;
        }
        else if(newnode->data<temp->data){
            if (temp->left == NULL){
                temp->left =newnode;
                return; 
            }
            temp = temp->left;
        }
    }
}


int main(){
    int a=1;
    while(a){
        int n;
        cout<<"1. Insert 2. Inorder Traversal 3. PostOrder Traversal 4.Preorder";
        cin>>n;
        switch(n){
            case 1: insert();
                    break;
            case 2: InOrder(root);
                    break;
            case 3: PostOrder(root);
                    break;
            case 4: PreOrder(root);
                    break;
            default: a=0;
        }
    }
}
        