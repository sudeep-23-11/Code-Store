# C++ STL
* vector
    * dynamic container of primitive
    * acs = O(1), sr-in-del = O(N)
* stack, queue, deque
    * sr = O(N), in-del = O(1)
* priority_queue
    * used as max heap, min heap
    * sr = O(N), in-del = O(logN)
* unordered_set, unordered_map
    * hash table
    * no order
    * O(1) -> O(N)
* set, map
    * red black tree
    * sorted order
    * O(logN)

# Java Collection
* ArrayList
    * dynamic collection of object
    * array implementation of list interface
    * acs = O(1), sr-in-del = O(N)
* LinkedList
    * dynamic collection of object
    * doubly linked list implementation of list interface, deque interface
    * acs-sr = O(N), in-del = O(1)
* ArrayDeque
    * used as stack, queue, deque
    * sr = O(N), in-del = O(1)
* PriorityQueue
    * used as max heap, min heap
    * sr = O(N), in-del = O(logN)
* HashSet, HashMap
    * hash table
    * no order
    * O(1) -> O(N)
* LinkedHashSet, LinkedHashMap
    * hash table, doubly linked list
    * insertion order
    * O(1)
* TreeSet, TreeMap
    * red black tree
    * sorted order
    * O(logN)