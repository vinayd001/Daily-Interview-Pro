#include<iostream>
#include<queue>
using namespace std;

class TreeNode {
    
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
};

void print_level_order(TreeNode* root) {
    
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        
        TreeNode* temp = q.front();
        cout<<temp->data;
        q.pop();

        if(root->left!=NULL)
            q.push(root->left);
        if(root->right!=NULL)
            q.push(root->right);
        
    }
}

TreeNode* new_node(int data)  {

    TreeNode *temp = new node;  
    temp->data = data;  
    temp->left = NULL;  
    temp->right = NULL; 
     
    return temp;
}

int main()
{
    TreeNode *root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);  
    root->right->left = new_node(4);  
    root->right->right = new_node(5);
  
    print_level_order(root);  
    return 0;  
}

