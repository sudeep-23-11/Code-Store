//BinaryTrees
#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int key;
    struct Node *left, *right;
};
struct Node *newNode(int key)
{
    struct Node *tempNode=new Node;
    tempNode->key=key;
    tempNode->left=NULL;
    tempNode->right=NULL;
    return tempNode;
};
Node *insertNode(Node *node, int key)
{
    if(node==NULL)
    {
        node=newNode(key);
        return node;
    }
    else
    {
        queue<struct Node *>q;
        q.push(node);
        while(q.empty()==0)
        {
            Node *tempNode=q.front();
            q.pop();
            if(tempNode->left!=NULL)
            q.push(tempNode->left);
            else
            {
                tempNode->left=newNode(key);
                return node;
            }
            if(tempNode->right!=NULL)
            q.push(tempNode->right);
            else
            {
            tempNode->right=newNode(key);
            return node;
            }
        }
        return node;
    }
}
void deleteDeep(struct Node *node, struct Node *deepNode)
{
    queue<struct Node *>q;
    q.push(node);
    struct Node *tempNode;
    while(q.empty()==0) 
    {
        tempNode=q.front();
        q.pop();
        if(tempNode==deepNode)
        {
            tempNode=NULL;
            delete(deepNode);
            return;
        }
        if(tempNode->right) 
        {
            if(tempNode->right==deepNode) 
            {
                tempNode->right=NULL;
                delete(deepNode);
                return;
            }
            else
            q.push(tempNode->right);
        }
        if(tempNode->left) 
        {
            if(tempNode->left==deepNode) 
            {
                tempNode->left=NULL;
                delete(deepNode);
                return;
            }
            else
            q.push(tempNode->left);
        }
    }
}
Node *deleteNode(struct Node *node, int key)
{
    if(node==NULL)
    return NULL;
    if((node->left==NULL)&&(node->right==NULL)) 
    {
        if(node->key==key)
        return NULL;
        else
        return node;
    }
    queue<struct Node *>q;
    q.push(node);
    struct Node *tempNode1;
    struct Node *tempNode2=NULL;
    while(q.empty()==0)
    {
        tempNode1=q.front();
        q.pop();
        if(tempNode1->key==key)
        tempNode2=tempNode1;
        if(tempNode1->left)
        q.push(tempNode1->left);
        if (tempNode1->right)
        q.push(tempNode1->right);
    }
    if(tempNode2!=NULL)
    {
        deleteDeep(node, tempNode1);
        tempNode2->key=tempNode1->key;
    }
    return node;
}
void preorderTraversal(struct Node *node)
{
    if(node==NULL)
    return;
    cout<<(node->key)<<" ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
void inorderTraversal(struct Node *node)
{
    if(node==NULL)
    return;
    inorderTraversal(node->left);
    cout<<(node->key)<<" ";
    inorderTraversal(node->right);
}
void postorderTraversal(struct Node *node)
{
    if(node==NULL)
    return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<(node->key)<<" ";
}
int main()
{
    int x, y;
    struct Node *rootNode=newNode(10);
    rootNode->left=newNode(11);
    rootNode->left->left=newNode(7);
    rootNode->right=newNode(9);
    rootNode->right->left=newNode(15);
    rootNode->right->right=newNode(8);
    printf("Press 1 to insert element to the Binary Tree\n");
    printf("Press 2 to delete element from the Binary Tree\n");
    printf("Press 0 for preorder, inorder and postorder traversals of the Binary Tree\n");
    printf("Press -1 to exit\n");
    while(1)
    {   
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
                    rootNode=insertNode(rootNode, y);
                    break;
            case 2: scanf("%d", &y);
                    rootNode=deleteNode(rootNode, y);
                    break;
            case 0: printf("Preorder Traversal\n");
                    preorderTraversal(rootNode);
                    printf("\n");
                    printf("Inorder Traversal\n");
                    inorderTraversal(rootNode);
                    printf("\n");
                    printf("Postorder Traversal\n");
                    postorderTraversal(rootNode);
                    printf("\n");
        }
    }
    return 0;
}