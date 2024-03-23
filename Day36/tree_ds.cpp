#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
class tree{
    public:
    Node* root;
    tree(){
        root=nullptr;
    }
    void insertVal(int val){
        root=insertRecurcive(root,val);
    }
    Node* insertRecurcive(Node* root , int val){
        if(root==nullptr){
            return new Node(val);
        }
        if(val<root->data){
            root->left=insertRecurcive(root->left,val);
        }
        else if(val>root->data){
            root->right=insertRecurcive(root->right,val);
        }
        return root;
    }
    void inOrder(){
        setInOrder(root);
    }
    void setInOrder(Node* root){
        if(root==nullptr){
            return;
        }
        setInOrder(root->left);
        cout<<root->data<<""<<endl;
        setInOrder(root->right);
    }
    bool searchNum(int val){
        return searchRecurcive(root,val);
    }
    bool searchRecurcive(Node* root , int val){
        if(root==nullptr){
            return false;
        }
        if (root->data==val){
            return true;
        }
        else if(val<root->data){
            return searchRecurcive(root->left,val);
        }
        else if(val>root->data){
            return searchRecurcive(root->right,val);   
        }
    }
};
int main(){
    tree myTree;
    myTree.insertVal(10);
    myTree.insertVal(1);
    myTree.insertVal(5);
    myTree.insertVal(12);
    myTree.insertVal(4);
    myTree.insertVal(0);
    myTree.insertVal(15);
    myTree.inOrder();
    cout<<(myTree.searchNum(1)?"Found":"Not found")<<endl;
    cout<<(myTree.searchNum(20)?"Found":"Not found")<<endl;
    return 0;
}