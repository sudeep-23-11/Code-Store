# Array
* continuous memory location
* fixed size container of primitive
* acs = O(1), sr-in-del = O(N)

# Dynamic Programming
* Memoization
    * top down = go to base case
    * recursion
* Tabulation
    * bottom up = come from base case
    * iteration
* Space Optimized Tabulation

# Graph
* Node, Edge
* (Directed, Undirected, Weighted) Edge
* (Degree, Indegree, Outdegree) of Node
* Adjacency (Matrix, List)
* (Depth, Breadth) First Search = O(E+V), E <= V2
* Connected Components
    * connected within each component
    * undirected
* (Cyclic, Acyclic) Graph
    * directed = DFS, Kahn
    * undirected = DFS, BFS
* Topological Sort
    * directed acyclic
    * for every u -> v, u appears before v in ordering
    * DFS, Kahn
* Shortest Path
    * Single Source
        * Dijkstra
            * no negative weight edge
            * O((E+V) logV)
        * Bellman Ford
            * directed = no negative weight cycle
            * undirected = no negative weight edge
            * O(EV)
    * All Pairs = Floyd Warshall
        * directed = no negative weight cycle
        * undirected = no negative weight edge
        * O(V3)
* Minimum Spanning Tree
    * undirected weighted
    * N nodes, N-1 edges
    * each node is reachable from all other nodes
    * sum of edge weights is minimum
    * Prim = O(E logV)
    * Kruskal = O(E logE)
* Disjoint Set
    * find parent = check whether two nodes are connected or not
    * union by (rank, size) = connect two nodes
    * path compression
* Tree
    * connected acyclic
    * directed = node has only one parent
* Strongly Connected Components
    * connected within each component
    * directed
    * Kosaraju = O(α(N)), α(N) <= 4
* Bridge, Articulation Point
    * Bridge = edge whose removal results in multiple components
    * Articulation Point = node whose removal results in multiple components
    * Tarjan

# Linked List
* discrete memory location
* Linked List
    * value, next pointer
    * O(N)
* Doubly Linked List
    * value, next pointer, prev pointer
    * acs-sr = O(N), in-del = O(1)

# Tree
* Binary Tree
    * no. of children <= 2
    * value, left pointer, right pointer
    * O(N)
* Full Binary Tree
    * no. of children = 0, 2
* Complete Binary Tree
    * all levels are completely filled except last level
    * nodes of last level are as left as possible
* Perfect Binary Tree = all leaf nodes are on same level
* Balanced Binary Tree
    * mod(height difference between left and right subtrees for every node) <= 1
    * height = log(total no. of nodes)
* Degenerate Binary Tree = skewed tree
* Binary Search Tree
    * left subtree nodes < root node < right subtree nodes
    * both subtrees are BST
    * inorder traversal is sorted
    * O(logN)
* AVL Tree
    * Binary Search Tree
    * Balanced Binary Tree
* Red Black Tree
    * Binary Search Tree
    * extra bit on every node for storing node color red or black