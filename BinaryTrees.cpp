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
    struct Node *tempNodeNode=new Node;
    tempNodeNode->key=key;
    tempNodeNode->left=NULL;
    tempNodeNode->right=NULL;
    return tempNodeNode;
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
    struct Node *tempNodeNode;
    while(q.empty()==0) 
    {
        tempNodeNode=q.front();
        q.pop();
        if(tempNodeNode==deepNode)
        {
            tempNodeNode=NULL;
            delete(deepNode);
            return;
        }
        if(tempNodeNode->right) 
        {
            if(tempNodeNode->right==deepNode) 
            {
                tempNodeNode->right=NULL;
                delete(deepNode);
                return;
            }
            else
            q.push(tempNodeNode->right);
        }
        if(tempNodeNode->left) 
        {
            if(tempNodeNode->left==deepNode) 
            {
                tempNodeNode->left=NULL;
                delete(deepNode);
                return;
            }
            else
            q.push(tempNodeNode->left);
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
    struct Node *tempNodeNode1;
    struct Node *tempNodeNode2=NULL;
    while(q.empty()==0)
    {
        tempNodeNode1=q.front();
        q.pop();
        if(tempNodeNode1->key==key)
        tempNodeNode2=tempNodeNode1;
        if(tempNodeNode1->left)
        q.push(tempNodeNode1->left);
        if (tempNodeNode1->right)
        q.push(tempNodeNode1->right);
    }
    if(tempNodeNode2!=NULL)
    {
        deleteDeep(node, tempNodeNode1);
        tempNodeNode2->key=tempNodeNode1->key;
    }
    return node;
}
void preorderTraversal(struct Node *node)
{
    if(!node)
    return;
    cout<<node->key<<" ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
void inorderTraversal(struct Node *node)
{
    if(!node)
    return;
    inorderTraversal(node->left);
    cout<<node->key<<" ";
    inorderTraversal(node->right);
}
void postorderTraversal(struct Node *node)
{
    if(!node)
    return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->key<<" ";
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
    printf("Press 1 to insert element to Binary Tree\n");
    printf("Press 2 to delete element from Binary Tree\n");
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