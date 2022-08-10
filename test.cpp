#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(TreeNode * node)
{
    if(node)
    {
        printf("something");
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

int main() {
    pair<int,int> x;
    x = {1,2};
    cout << x.second;
}


/*
int main()
{

    int n;
    cout << "enter the height of the tree: " << endl;
    cin >> n;
    queue<TreeNode *> q;
    TreeNode *r;
    if(n>0)
    {
        int x;
        cin >> x;
        r = new TreeNode(x);
        q.push(r);
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            TreeNode *prev = q.front();
            q.pop();
            if(prev)
            {
                int x,y;
                cin >> x;
                if(x!=0)
                {
                    prev->left = new TreeNode(x);
                    q.push(prev->left);
                }
                if(x==0)
                {
                    prev->left = nullptr;
                    q.push(prev->left);
                }
                cin >> y;
                if(y!=0)
                {
                    prev->right = new TreeNode(y);
                }
                if(y==0)
                {
                    prev->right = nullptr;
                    q.push(prev->right);
                }
            }
        }
    }
    preorder(r);



    return 0;
}
*/
