//  find the maximum depth of a binary tree
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
class Tree{
    public:
    Node* root;
    Tree(int val){
        root=new Node(val);
    }
    int depth(Node* root){
        if(root==NULL){
            return 0;
        }
        int leftside=depth(root->left);
        int rightside=depth(root->right);
        return max(leftside,rightside)+1;
    }
    int getDepth(){
        return depth(root);
    }
};
int main(){
    Tree* tree=new Tree(3);
    tree->root->left=new Node(10);
    tree->root->right=new Node(12);
    tree->root->left->right=new Node(5);
    tree->root->left->left=new Node(4);
    tree->root->right->left=new Node(2);
    tree->root->right->right=new Node(1);
    tree->root->right->right->left=new Node(15);
    tree->root->right->right->right=new Node(25);
    tree->root->right->right->left->right=new Node(55);
    cout<<"Maximum Depth of the Binary Tree: "<<tree->getDepth()<<endl;
   return 0;
}
