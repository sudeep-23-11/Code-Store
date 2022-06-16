# Types of Trees
* Full Binary Tree - 0 or 2 children only
* Complete Binary Tree - all levels are completely filled except last level, nodes
of last level are as left as possible
* Perfect Binary Tree - all leaf nodes are on same level
* Balanced Binary Tree - mod(height difference between left and right subtrees for
every node) <= 1, height <= log(total no. of nodes)
* Degenerate Binary Tree - skewed tree
* Binary Search Tree - left subtree nodes < root node < right subtree nodes, both
subtrees are BST, inorder traversal is sorted
* AVL Tree - Binary Search Tree, Balanced Binary Tree
* Red-Black Tree - Binary Search Tree, extra bit on every node for storing Node color red or black

# Types of Traversal Algorithms
* Preorder -  root node  -> left child  -> right child
* Inorder -   left child -> root node   -> right child
* Postorder - left child -> right child -> root node
* Level order - visit nodes on same level first

# Other Approaches in Binary Tree
* LowestCommonAncestor - pick first same node in root to node path of both nodes
* TotalNodesInCompleteTree - go to every node, count it
* FlattenTree - 
    * make new list according to preorder traversal
    * p=NULL, right->left->node, node->right=p, node->left=NULL, p=node

# Other Approaches in Binary Search Tree
* InorderSuccessorAndPredecessor, CeilAndFloor -
    * sort preorder traversal array
    * do inorder traversal
* Iterator - inorder traversal array
* KthLargestAndSmallestElement - sort preorder traversal array
* LargestBST - check for BST at every node
* LowestCommonAncestor -
    * pick first same node in root to node path of nodes
    * LCA in Binary Tree
* TreeFromPreorder -
    * place every element to its desired place in tree after left and right
    movement according to its value
    * sort preorder traversal array to get inorder traversal array
* RecoverBST - sort inorder traversal array, do inorder traversal correcting nodes
according to sorted array