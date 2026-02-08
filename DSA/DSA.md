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
* (Depth, Breadth) First Search
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
    * Single Source = Dijkstra = no negative weight edge
    * (Single Source = Bellman Ford, All Pairs = Floyd Warshall)
        * directed = no negative weight cycle
        * undirected = no negative weight edge
* Minimum Spanning Tree
    * undirected weighted
    * N nodes, N-1 edges
    * each node is reachable from all other nodes
    * sum of edge weights is minimum
    * Prim, Kruskal
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
    * Kosaraju
* Bridge, Articulation Point
    * Bridge = edge whose removal results in multiple components
    * Articulation Point = node whose removal results in multiple components
    * Tarjan

# Tree
* Full Binary Tree = 0 or 2 children only
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
    * searching time = log(total no. of nodes)
* AVL Tree
    * Binary Search Tree
    * Balanced Binary Tree
* Red Black Tree
    * Binary Search Tree
    * extra bit on every node for storing node color red or black

# Time Complexity
* Array = O(N)
* Stack, Queue, Deque
    * search = O(N)
    * insert, delete = O(1)
* Priority Queue
    * search = O(N)
    * insert, delete = O(log N)
* Hash Table (Unordered Set, Unordered Map)
    * average = O(1)
    * worst = O(N)
* Linked List, Binary Tree = O(N)
* Binary Search Tree, AVL Tree = O(log N)
* Red Black Tree (Set, Map) = O(log N)
* Binary Search = O(log N)
* DFS, BFS = O(E+V), E <= V2
* Dijkstra = O((E+V) log V)
* Bellman Ford = O(EV)
* Floyd Warshall = O(V3)
* Prim = O(E log V)
* Kruskal = O(E log E)
* Disjoint Set = O(α(N)), α(N) <= 4