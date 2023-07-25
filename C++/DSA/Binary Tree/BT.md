# Binary Tree Types
* Full Binary Tree - 0 or 2 children only
* Complete Binary Tree - all levels are completely filled except last level, nodes
of last level are as left as possible
* Perfect Binary Tree - all leaf nodes are on same level
* Balanced Binary Tree - mod(height difference between left and right subtrees for
every node) <= 1, height = log(total no. of nodes)
* Degenerate Binary Tree - skewed tree
* Binary Search Tree - left subtree nodes < root node < right subtree nodes, both
subtrees are BST, inorder traversal is sorted, searching time = log(total no. of nodes)
* AVL Tree - Binary Search Tree, Balanced Binary Tree
* Red-Black Tree - Binary Search Tree, extra bit on every node for storing Node color red or black

# Binary Tree Approaches
* FlattenTree - 
    * make new list according to preorder traversal
    * p=NULL, func(n->right), func(n->left), node->right=p, node->left=NULL, p=node
* LowestCommonAncestor - pick first same node in root to node path of both nodes

# Binary Search Tree Approaches
* 2Sum - inorder traversal array
* InorderSuccessorAndPredecessor -
    * sort preorder traversal array
    * do inorder traversal
* LowestCommonAncestor -
    * pick first same node in root to node path of nodes
    * LCA in Binary Tree
* RecoverBST - sort inorder traversal array, do inorder traversal correcting nodes
according to sorted array
* TreeFromPreorder -
    * traverse preorder traversal, insert every node on basis of its value
    * sort preorder traversal array to get inorder traversal array