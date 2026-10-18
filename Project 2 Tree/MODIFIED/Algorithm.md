## Modified Algorithm

1. Start.
2. Create an empty Binary Search Tree (BST).
3. Enter the number of nodes and their values.
4. Insert all values into the BST.
5. Display the original BST structure and its inorder traversal.
6. Enter the key of the node to be deleted.
7. Search for the key in the BST.
8. If the key is not found, display a "Node not found" message and keep the tree unchanged.
9. If the key is found, choose the deletion method:
   - Option 1: Inorder successor.
   - Option 2: Inorder predecessor.
10. If the node has two children:
    - For the successor method, find the smallest node in the right subtree.
    - For the predecessor method, find the largest node in the left subtree.
    - Replace the target node's value with the selected node's value.
    - Delete the original successor or predecessor node.
11. If the node has zero or one child, delete it and reconnect the remaining child, if any.
12. Update the root pointer if the root node is deleted.
13. Display a success message after deletion.
14. Display the updated BST structure and its inorder traversal.
15. Stop.
16.
