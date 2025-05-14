# AVL Tree: An Intuitive Explanation

An **AVL Tree** is a type of self-balancing binary search tree. It ensures that the height difference (or balance factor) between the left and right subtrees of any node is at most 1. This balance guarantees efficient operations like insertion, deletion, and search.

## Why AVL Trees?

In a regular binary search tree (BST), operations like search, insert, and delete can degrade to O(n) in the worst case if the tree becomes unbalanced (e.g., a skewed tree). AVL trees solve this by maintaining balance, ensuring these operations always run in O(log n) time.

## Key Concepts

### 1. Balance Factor
The **balance factor** of a node is calculated as:
```
Balance Factor = Height of Left Subtree - Height of Right Subtree
```
- If the balance factor is `-1`, `0`, or `1`, the node is balanced.
- If it goes beyond this range, the tree needs rebalancing.

### 2. Rotations
To restore balance after an insertion or deletion, AVL trees use **rotations**:
- **Single Rotations**:
    - Left Rotation (LL imbalance)
    - Right Rotation (RR imbalance)
- **Double Rotations**:
    - Left-Right Rotation (LR imbalance)
    - Right-Left Rotation (RL imbalance)

### 3. Four "Out of Balance" Cases

When an AVL tree becomes unbalanced after an insertion or deletion, it falls into one of the following four cases based on the structure of the imbalance:

1. **Left-Left (LL) Case**:  
    Occurs when a node is inserted into the left subtree of the left child.  
    **Solution**: Perform a single right rotation.

2. **Right-Right (RR) Case**:  
    Occurs when a node is inserted into the right subtree of the right child.  
    **Solution**: Perform a single left rotation.

3. **Left-Right (LR) Case**:  
    Occurs when a node is inserted into the right subtree of the left child.  
    **Solution**: Perform a left rotation on the left child, followed by a right rotation on the root.

4. **Right-Left (RL) Case**:  
    Occurs when a node is inserted into the left subtree of the right child.  
    **Solution**: Perform a right rotation on the right child, followed by a left rotation on the root.

These rotations ensure the tree remains balanced, maintaining the O(log n) time complexity for operations.

### 4. Self-Balancing
After every insertion or deletion, the tree checks the balance factor of nodes and performs rotations if necessary to maintain balance.

## Example

* Consider we got a tree like this

```clojure

     10
    /  \
   20  30
```

* then we insert another node (says 40) into the left child (20) and another one (50) after that on the right site ofthe new node
* so now, the tree looks like this
```clojure

     10
    /  \
   20  30
  /  
 40
   \
    50
```

* as we can see, the node on 20 is inbalanced, for this case its LR inbalance
* thus we need to perform Left rotation at 40 and right rotation at 20

* the tree after inner left rotation at 40
```clojure
         10
        /  \
       20  30
      /  
     50
    /
   40    
```
* then we perform another rotation (right) at node 20
```clojure
         10
        /  \
       50  30
      /  \  
     40  20  
```
### 5. How We Perform the Rotation

Rotations in an AVL tree are used to restore balance when the balance factor of a node goes out of the range `-1` to `1`. Here's how each type of rotation is performed:

#### Single Rotations
1. **Left Rotation (LL Imbalance)**:
    - Identify the unbalanced node (let's call it `X`).
    - Promote the right child of `X` to take its place.
    - Make `X` the left child of its former right child.
    - Update the heights of the affected nodes.

2. **Right Rotation (RR Imbalance)**:
    - Identify the unbalanced node (let's call it `X`).
    - Promote the left child of `X` to take its place.
    - Make `X` the right child of its former left child.
    - Update the heights of the affected nodes.

#### Double Rotations
1. **Left-Right Rotation (LR Imbalance)**:
    - Perform a left rotation on the left child of the unbalanced node.
    - Perform a right rotation on the unbalanced node.

2. **Right-Left Rotation (RL Imbalance)**:
    - Perform a right rotation on the right child of the unbalanced node.
    - Perform a left rotation on the unbalanced node.

Each rotation ensures that the AVL tree remains balanced, maintaining the O(log n) time complexity for operations. Always remember to update the heights of the nodes involved after performing the rotations.


## Advantages of AVL Trees
- **Fast Lookups**: O(log n) for search, insert, and delete.
- **Guaranteed Balance**: Prevents worst-case scenarios of BSTs.

## Disadvantages
- **Complexity**: Rotations add overhead during insertions and deletions.
- **Space**: Requires storing the height of each node.

AVL trees are ideal when you need frequent lookups and can tolerate slightly slower insertions and deletions due to rebalancing.
