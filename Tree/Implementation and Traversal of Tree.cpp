#include<bits/stdc++.h>
using namespace std;
class Tree {
public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
int main() {
    Tree *root = new Tree(10);
    cout << root->data;
    root->left = new Tree(15);
    root->right = new Tree(5);
    cout << root->left->data << " " << root->right->data;

}
