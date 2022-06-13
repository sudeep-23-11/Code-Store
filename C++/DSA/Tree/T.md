# Types of Trees
* Full Binary Tree - 0 or 2 children only
* Complete Binary Tree - all levels are completely filled except last level and nodes of last level are as left as possible
* Perfect Binary Tree - all leaf nodes are on same level
* Balanced Binary Tree - mod(height difference between left and right subtrees for every node) <= 1 and height <= log(n)
* Degenerate Binary Tree - skewed tree
* Binary Search Tree - left subtree nodes < root node < right subtree nodes and both subtrees are BST and time complexity for searching = O(log(n))
* AVL Tree - Binary Search Tree + Balanced Binary Tree
* Red-Black Tree - Binary Search Tree + extra bit on every node for storing Node color red or black

# Types of Traversal Algorithms
* Preorder -  root node  -> left child  -> right child
* Inorder -   left child -> root node   -> right child
* Postorder - left child -> right child -> root node
* Level order - visit nodes on same level first