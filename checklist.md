# DSA Complete Syllabus

---

## Data Structures

### Foundation
- **Arrays**
  - Traversal
  - Prefix sum
  - Kadane's algorithm
  - Two-pointer technique
  - Sliding window technique
  - Rotation problems
  - Searching in sorted arrays
  - Matrix traversal
- **Strings**
  - Basic manipulation
  - Comparison
  - Concatenation
  - Pattern matching
  - KMP algorithm
  - Rabin-Karp algorithm
  - Anagram problems
  - Palindrome problems
- **Matrix**
  - 2D array traversal
  - Spiral traversal
  - Diagonal traversal
  - Row/column-wise operations

### Linear Data Structures
- **Linked Lists**
  - Singly linked list
  - Doubly linked list
  - Circular linked list
  - Reverse (iterative + recursive)
  - Middle finding (fast-slow pointer)
  - Cycle detection (Floyd's algorithm)
  - Remove cycle
  - Merge two sorted lists
  - Add two numbers
  - Palindrome linked list
  - LRU Cache design
- **Stack** (LIFO)
  - Basic operations (push, pop, peek)
  - Expression evaluation
  - Valid parentheses
  - Next greater element
  - Next smaller element
  - Monotonic stack
  - Largest rectangle in histogram
  - Sliding window maximum
  - Implement stack using queue
  - Min stack (O(1) min retrieval)
- **Queue** (FIFO)
  - Basic operations
  - Implement queue using stack
  - BFS implementation
- **Deque** (Double-ended queue)
  - Insert/delete from both ends

### Hierarchical Data Structures
- **Trees**
  - Binary trees
  - Tree traversals (recursive + iterative)
    - Inorder
    - Preorder
    - Postorder
    - Level order (BFS)
  - Height of tree
  - Diameter of tree
  - Max path sum
  - Invert/mirror tree
  - Same tree check
  - Symmetric tree
  - Lowest Common Ancestor (LCA)
  - Zigzag level order traversal
  - Vertical order traversal
  - Top view / Bottom view / Right view
- **Binary Search Trees (BST)**
  - Insertion
  - Deletion
  - Search
  - Validation
  - Floor/ceiling in BST
  - BST iterator
  - Recover BST
  - Range sum in BST
- **Balanced Trees**
  - AVL trees (rotations)
  - Red-Black trees (properties)
- **Heaps / Priority Queue**
  - Min heap
  - Max heap
  - Heapify
  - Top K problems
  - Merge K sorted lists
  - Median finder (sliding median)
  - Huffman encoding
- **Trie** (Prefix Tree)
  - Insert and search
  - Word lookup
  - Prefix matching
  - Autocomplete
  - Longest common prefix
  - Word search (Trie + DFS)

### Graph Data Structures
- **Graph Representations**
  - Adjacency list
  - Adjacency matrix
  - Edge list
- **Union-Find** (Disjoint Set)
  - Make set
  - Find with path compression
  - Union by rank
  - Detect cycle in graph
  - Number of islands variants

### Advanced / Hash-based
- **Hash Tables / Hash Maps**
  - Hash functions
  - Collision handling (chaining, open addressing)
  - Load factor and rehashing
  - Frequency counting
  - Two-sum variants
  - Group anagrams
  - Substring problems

### Advanced Data Structures
- **Segment Tree**
  - Range query
  - Range update
  - Lazy propagation
  - Count of range sum
- **Binary Indexed Tree** (Fenwick Tree)
  - Prefix sum queries
  - Point updates
  - Range sum queries
- **Bit Manipulation**
  - Basic bit operations (AND, OR, XOR, NOT, shifts)
  - Bit masking
  - Subset generation
  - Single number problems
  - Power of two check
  - Brian-Kernighan algorithm

---

## Algorithms

### Foundational Techniques
- **Complexity Analysis**
  - Big-O notation
  - Big-Theta notation
  - Big-Omega notation
  - Time complexity analysis
  - Space complexity analysis
  - Recurrence relations
  - Master theorem
  - Amortized analysis
- **Recursion**
  - Base case identification
  - Tree recursion
  - Tail recursion
  - Memoization
  - Backtracking relationship
  - Tower of Hanoi

### Searching Algorithms
- **Linear Search**
- **Binary Search**
  - Basic binary search
  - Lower bound / Upper bound
  - Search in sorted rotated array
  - Search in mountain array
  - Find minimum in rotated sorted array
  - Binary search on answer
  - 2D matrix search

### Sorting Algorithms
- **Comparison Sorts**
  - Bubble sort
  - Selection sort
  - Insertion sort
  - Merge sort
  - Quick sort
  - Heap sort
- **Non-comparison Sorts**
  - Counting sort
  - Radix sort
  - Bucket sort
- **Sorting algorithms analysis**
  - Stability
  - In-place vs not
  - Best/average/worst case

### Algorithm Paradigms

#### Two Pointers
- Container with most water
- Triplet sum
- Palindrome problems
- Valid palindrome II
- Remove duplicates from sorted array
- Trapping rainwater

#### Sliding Window
- Fixed window problems
- Variable window problems
- Longest substring without repeating
- Maximum sum subarray (Kadane's)
- Minimum window substring
- Count anagrams

#### Divide and Conquer
- Merge sort
- Quick sort
- Median of two sorted arrays
- Closest pair of points
- Strassen's matrix multiplication
- Fast Fourier Transform (FFT) (VERY IMPORTANT)

#### Greedy Algorithms
- Activity selection
- Fractional knapsack
- Huffman encoding
- Gas station problem
- Jump game
- Valid parenthesis stack
- Greedy proof techniques

#### Backtracking
- Subset sum
- Combination sum
- Permutations
- Palindrome partitioning
- N-Queens
- Sudoku solver
- Word search
- Rat in a maze
- Generate parentheses
- Letter combinations of phone number

#### Dynamic Programming
- **DP Foundations**
  - Memoization (top-down)
  - Tabulation (bottom-up)
  - State identification
  - Transition formulation
  - Space optimization
- **1D DP**
  - Climbing stairs
  - House robber
  - Fibonacci
  - Minimum cost climbing stairs
  - Longest increasing subsequence
  - Word break
- **2D DP**
  - Longest common subsequence (LCS)
  - Longest common substring
  - Edit distance
  - Coin change problems
  - 0/1 Knapsack
  - Unbounded knapsack
  -Subset sum
  - Minimum/maximum path sum
- **DP Patterns**
  - DP with string
  - DP on trees
  - DP on graphs
  - DP with bitmask
  - Partition problems
  - Interleaving strings
  - Scramble string
- **Common DP Problems**
  - Longest palindromic subsequence
  - Palindromic partitioning
  - Regular expression matching
  - Wildcard matching
  - Matrix chain multiplication
  - Minimum triangle path sum
  - Burst balloons
  - Egg dropping problem
  - StOCK problems series
  - House robber II

### Graph Algorithms
- **Graph Traversal**
  - BFS (Breadth-First Search)
  - DFS (Depth-First Search)
  - Connected components
  - Number of provinces/islands
- **Graph Properties**
  - Cycle detection (undirected)
  - Cycle detection (directed)
  - Topological sort
    - Kahn's algorithm (BFS-based)
    - DFS-based
- **Shortest Path**
  - BFS for unweighted graphs
  - Dijkstra's algorithm
  - Bellman-Ford algorithm
  - Floyd-Warshall algorithm
  - Shortest path with obstacles
- **Minimum Spanning Tree**
  - Prim's algorithm
  - Kruskal's algorithm
- **Graph Patterns**
  - Flood fill
  - Word ladder
  - Number of islands
  - Clone graph
  - Course schedule
  - Alien dictionary
  - Graph coloring
  - Bipartite checking
- **Advanced Graph**
  - Eulerian path/circuit
  - Strongly connected components (Kosaraju, Tarjan)
  - Bridges in graph
  - Articulation points

### String Algorithms
- Z-function
- Manacher's algorithm
- String hashing
- Rolling hash
- LPS (Longest Proper Prefix Suffix) table

---

## Optional / Advanced Topics

- **Geometry**
  - Convex hull
  - Point location
- **Math in DSA**
  - Prime number algorithms
  - Sieve of Eratosthenes
  - Modular arithmetic
  - GCD/LCM (Euclidean algorithm)
  - Fast exponentiation
  - Combinatorics
  - Probability basics
- **Probability and Random**
  - Reservoir sampling
  - Randomized algorithms
- **Advanced Trees**
  - Treap
  - Splay tree
  - B-tree
  - B+ tree
- **System Design Patterns**
  - LRU Cache design
  - LFU Cache design
  - Rate limiter
  - TinyURL design

---

# DSA Checklist — C First, Then C++

# LEGEND:
# [C]   = Solve in C
# [C++] = Solve in C++ (after simulation syllabus Phase 1D)
#
# Priority (for YOUR path — simulation + interviews):
# P1 = Do not skip, core for both interviews and simulation
# P2 = Important for interviews, moderately useful for simulation
# P3 = Interview completeness only, low simulation value
#
# ⚡ = Directly feeds simulation syllabus

# TIMELINE: 30-45 min/day. Move phases by mastery not by weeks.
# Realistic total: 18-24 months.
# DP alone: 2-3 months. Do not rush it.

---

# PART 1 — C
# Now through simulation Phase 1D

---

## Phase 1: Complexity + Recursion + Arrays (Months 1-2)

### Complexity Analysis [C] P1 ⚡
- [ ] Big-O, Big-Theta, Big-Omega
- [ ] Time and space complexity by hand
- [ ] Recurrence relations
- [ ] Master theorem
- [ ] Amortized analysis
# Rule: after every problem, write complexity before checking.

### Recursion [C] P1
- [ ] Base case identification
- [ ] Tree recursion
- [ ] Tail recursion
- [ ] Tower of Hanoi
- [ ] Memoization intro

### Arrays [C] P1 ⚡
- [ ] Traversal
- [ ] Prefix sum
- [ ] Two-pointer technique
- [ ] Sliding window technique
- [ ] Kadane's algorithm
- [ ] Rotation problems
- [ ] Searching in sorted arrays
- [ ] Matrix traversal
- [ ] Spiral traversal
- [ ] Diagonal traversal
- [ ] Row/column-wise operations

### Strings [C] P2
- [ ] Basic manipulation
- [ ] Comparison, concatenation
- [ ] Anagram problems
- [ ] Palindrome problems

### Searching [C] P1
- [ ] Linear search
- [ ] Binary search basic
- [ ] Lower bound / upper bound
- [ ] Search in sorted rotated array
- [ ] Search in mountain array
- [ ] Find minimum in rotated sorted array
- [ ] Binary search on answer
- [ ] 2D matrix search

### Sorting [C] P1 ⚡
- [ ] Bubble sort
- [ ] Selection sort
- [ ] Insertion sort
- [ ] Merge sort
- [ ] Quick sort
- [ ] Heap sort
- [ ] Counting sort
- [ ] Radix sort
- [ ] Bucket sort
- [ ] Stability, in-place, best/avg/worst analysis

---

## Phase 2: Linear Structures (Months 2-3)

### Linked Lists [C] P1
- [ ] Singly linked list from scratch
- [ ] Doubly linked list
- [ ] Circular linked list
- [ ] Reverse iterative
- [ ] Reverse recursive
- [ ] Middle finding (fast-slow pointer)
- [ ] Cycle detection (Floyd's)
- [ ] Remove cycle
- [ ] Merge two sorted lists
- [ ] Add two numbers
- [ ] Palindrome linked list

### Stack [C] P1
- [ ] Implementation from scratch
- [ ] Expression evaluation
- [ ] Valid parentheses
- [ ] Next greater element
- [ ] Next smaller element
- [ ] Monotonic stack
- [ ] Largest rectangle in histogram
- [ ] Sliding window maximum
- [ ] Implement stack using queue
- [ ] Min stack O(1)

### Queue [C] P2
- [ ] Implementation from scratch
- [ ] Implement queue using stack
- [ ] BFS preview

### Deque [C] P2
- [ ] Insert/delete both ends
- [ ] Sliding window maximum (deque approach)

### Hash Tables [C] P1
- [ ] Hash function basics
- [ ] Chaining
- [ ] Open addressing
- [ ] Load factor and rehashing
- [ ] Frequency counting
- [ ] Two-sum variants
- [ ] Group anagrams
- [ ] Valid anagram
- [ ] Substring problems

---

## Phase 3: Algorithm Paradigms (Months 3-4)

### Two Pointers [C] P1
- [ ] Container with most water
- [ ] Triplet sum to target
- [ ] Valid palindrome
- [ ] Valid palindrome II
- [ ] Remove duplicates from sorted array
- [ ] Trapping rainwater

### Sliding Window [C] P1
- [ ] Maximum sum subarray
- [ ] Longest substring without repeating
- [ ] Minimum window substring
- [ ] Count anagrams
- [ ] Longest repeating character replacement

### Divide and Conquer [C] P1 ⚡
- [ ] Merge sort
- [ ] Quick sort
- [ ] Median of two sorted arrays
- [ ] Closest pair of points ⚡
- [ ] FFT concept only here (implement in C++ later) ⚡

### Greedy [C] P2
- [ ] Activity selection
- [ ] Fractional knapsack
- [ ] Gas station
- [ ] Jump game
- [ ] Lemonade change
- [ ] Assign cookies
- [ ] Greedy proof technique

### Backtracking [C] P2
- [ ] Subsets
- [ ] Subsets II
- [ ] Combination sum
- [ ] Combination sum II
- [ ] Permutations
- [ ] Permutations II
- [ ] Palindrome partitioning
- [ ] Letter combinations phone number
- [ ] N-Queens
- [ ] Sudoku solver
- [ ] Word search
- [ ] Rat in a maze
- [ ] Generate parentheses
- [ ] Restore IP addresses

---

## Phase 4: Trees (Months 4-5)

### Binary Trees [C] P1
- [ ] Implementation with structs and pointers
- [ ] Inorder recursive + iterative
- [ ] Preorder recursive + iterative
- [ ] Postorder recursive + iterative
- [ ] Level order (BFS)
- [ ] Zigzag level order
- [ ] Height
- [ ] Diameter
- [ ] Maximum path sum
- [ ] Invert
- [ ] Same tree check
- [ ] Symmetric tree
- [ ] LCA
- [ ] Vertical order traversal
- [ ] Top view
- [ ] Bottom view
- [ ] Right view

### BST [C] P1
- [ ] Insertion
- [ ] Deletion
- [ ] Search
- [ ] Validate BST
- [ ] Floor and ceiling
- [ ] BST iterator
- [ ] Recover BST
- [ ] Range sum

### Heaps [C] P1 ⚡
- [ ] Min heap from scratch
- [ ] Max heap from scratch
- [ ] Heapify
- [ ] Top K elements
- [ ] Kth largest
- [ ] Median in stream
- [ ] Merge K sorted lists
- [ ] Huffman encoding concept

---

## Phase 5: Graphs + Math + Bit Ops (Months 5-6)

### Graphs [C] P1 ⚡
- [ ] Adjacency list
- [ ] Adjacency matrix
- [ ] BFS
- [ ] DFS
- [ ] Connected components
- [ ] Number of islands
- [ ] Flood fill ⚡
- [ ] Cycle detection undirected
- [ ] Cycle detection directed
- [ ] Topological sort Kahn's
- [ ] Topological sort DFS
- [ ] Bipartite check
- [ ] Graph coloring
- [ ] Word ladder
- [ ] Clone graph
- [ ] Course schedule I + II
- [ ] Alien dictionary

### Shortest Path [C] P1 ⚡
- [ ] BFS unweighted
- [ ] Dijkstra ⚡
- [ ] Bellman-Ford
- [ ] Floyd-Warshall
- [ ] Shortest path with obstacles

### MST [C] P2 ⚡
- [ ] Prim's ⚡
- [ ] Kruskal's

### Union-Find [C] P1 ⚡
- [ ] Implementation
- [ ] Path compression
- [ ] Union by rank
- [ ] Cycle detection
- [ ] Number of islands variant

### Bit Manipulation [C] P2 ⚡
- [ ] AND, OR, XOR, NOT
- [ ] Left and right shift
- [ ] Get, set, clear, update bit
- [ ] Single number
- [ ] Power of two check
- [ ] Brian-Kernighan
- [ ] Count set bits
- [ ] Bitwise AND of range
- [ ] Subset generation with bitmask

### Mathematics [C] P2
- [ ] Prime check
- [ ] Sieve of Eratosthenes
- [ ] GCD/LCM Euclidean
- [ ] Fast exponentiation
- [ ] Modular arithmetic
- [ ] Combinatorics basics
- [ ] Catalan numbers
- [ ] Fibonacci matrix exponentiation

### Geometry [C] P1 ⚡
- [ ] Distance between points
- [ ] Convex hull ⚡
- [ ] Point in polygon ⚡
- [ ] Point location ⚡

---

# PART 2 — C++
# After simulation Phase 1D

---

## Phase 6: Dynamic Programming (Months 7-10)

### Foundations [C++] P1
- [ ] Memoization top-down
- [ ] Tabulation bottom-up
- [ ] State identification
- [ ] Transition formulation
- [ ] Space optimization

### 1D DP [C++] P1
- [ ] Climbing stairs
- [ ] Min cost climbing stairs
- [ ] House robber I + II
- [ ] Longest increasing subsequence
- [ ] Number of LIS
- [ ] Word break

### 2D DP [C++] P1
- [ ] LCS
- [ ] Longest common substring
- [ ] Longest palindromic subsequence
- [ ] Edit distance
- [ ] Min insertions for palindrome
- [ ] Min deletions for palindrome
- [ ] 0/1 Knapsack
- [ ] Unbounded knapsack
- [ ] Subset sum
- [ ] Min coin change
- [ ] Max coin change
- [ ] Min path sum
- [ ] Triangle min path sum

### DP on Strings [C++] P2
- [ ] Interleaving strings
- [ ] Scramble string
- [ ] Regex matching
- [ ] Wildcard matching
- [ ] Shortest common supersequence

### DP on Trees [C++] P2
- [ ] House robber III
- [ ] Max sum root to leaf
- [ ] Diameter with DP

### DP Bitmask [C++] P3
- [ ] Subset generation with DP
- [ ] Traveling salesman basic
- [ ] DP on subsets

### Stock Series [C++] P1
- [ ] Buy sell I through IV
- [ ] With cooldown
- [ ] With transaction fee

### Advanced DP [C++] P2
- [ ] Matrix chain multiplication
- [ ] Burst balloons
- [ ] Egg dropping
- [ ] Cherry pickup
- [ ] Min cost to cut stick
- [ ] Box stacking

---

## Phase 7: Advanced Data Structures (Months 10-12)

### Trie [C++] P2
- [ ] Implementation
- [ ] Insert, search, startsWith
- [ ] Longest common prefix
- [ ] Word search with Trie
- [ ] Autocomplete

### Segment Tree [C++] P1 ⚡
- [ ] Implementation
- [ ] Range sum query
- [ ] Range update
- [ ] Lazy propagation
- [ ] Count of range sum

### Fenwick Tree [C++] P2 ⚡
- [ ] Implementation
- [ ] Prefix sum queries
- [ ] Point updates
- [ ] Range sum queries

### String Algorithms [C++] P2
- [ ] LPS table
- [ ] KMP
- [ ] Rabin-Karp
- [ ] Z-function
- [ ] Manacher's
- [ ] String hashing
- [ ] Rolling hash

### Advanced Graphs [C++] P2
- [ ] Eulerian path/circuit
- [ ] SCC Kosaraju
- [ ] SCC Tarjan
- [ ] Bridges
- [ ] Articulation points

### FFT Full Implementation [C++] P1 ⚡
- [ ] Cooley-Tukey FFT
- [ ] Polynomial multiplication via FFT

---

## Phase 8: Advanced Trees (Month 12)

### Balanced Trees [C++] P3
- [ ] AVL rotations (one implementation)
- [ ] Red-Black properties (concept only)
- [ ] Treap (concept only)
- [ ] B-tree (concept only)

### Design Problems [C++] P1
- [ ] LRU Cache
- [ ] LFU Cache
- [ ] Median of sliding window
- [ ] Minimize max of sliding window

---

## Phase 9: Interview Prep (Months 13-18)

### Practice [C++] P1
- [ ] LeetCode 75 complete
- [ ] Neetcode 150 complete
- [ ] 150+ problems total solved
- [ ] Mock interviews
- [ ] Company-specific problem sets

### System Design [C++] P2
- [ ] Basic system design concepts
- [ ] Common patterns
# Expand this when you reach year 3.

### Probability and Random [C++] P3
- [ ] Reservoir sampling
- [ ] Randomized algorithms basics
