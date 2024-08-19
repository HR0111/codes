#include<iostream>
#include<queue>
using namespace std;


class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};


Node* insertIntoBST(Node* root , int data){

    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data){
        root->left= insertIntoBST(root->left , data);
    }else{
        root->right = insertIntoBST(root->right , data);

    }

    return root;

}

void input(Node* root){

    int data;
    cout<<"enter data"<<endl;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root , data);
        cin>>data;
    }

}

int main(){

    Node* root = NULL;

    input(root);

    return 0;

}