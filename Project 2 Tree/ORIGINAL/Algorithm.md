## Algorithm

1. Start.
2. Create an empty Binary Search Tree (BST).
3. Enter the number of nodes and their values.
4. Insert all values into the BST.
5. Enter the value of the node to be deleted.
6. Search for the node in the BST.
7. If the node has two children:
   - Find the inorder successor (smallest node in the right subtree).
   - Replace the target node's value with the successor's value.
   - Delete the original inorder successor node.
8. If the node has zero or one child, delete it and connect its child, if any, to its parent.
9. Display the updated BST using inorder traversal.
10. Stop.
