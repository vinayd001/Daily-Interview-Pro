#include<iostream>
#include<limits.h>
using namespace std;

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  

    node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 

int is_bst_helper(node* node, int min, int max)  {  
    if (node==NULL)  
        return 1;  
    if (node->data < min || node->data > max)  
        return 0;  
    return
        is_bst_helper(node->left, min, node->data-1) && 
        is_bst_helper(node->right, node->data+1, max);  
} 
  
int is_bst(node* node)  {  
    return is_bst_helper(node, INT_MIN, INT_MAX);  
}

int main() {
    node *root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left =  new node(1);
    root->left->right = new node(4);
    root->right->left = new node(6);
    cout<<is_bst(root);
}