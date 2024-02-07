/*

36. Flattening of a lnked list
Time Complexity : O(N)
Space Complexity : O(1)

*/

// Node *Merge(Node* a, Node* b) {
//     Node* temp = new Node(0);
//     Node* res = temp;
    
//     while(a && b) {
//         if(a->data < b->data) {
//             temp->bottom = a;
//             a = a->bottom;
//         }
//         else {
//             temp->bottom = b;
//             b = b->bottom;
//         }
//         temp = temp->bottom;
//     }
    
//     if(a) temp->bottom = a;
//     else temp->bottom = b;
    
//     return res->bottom;
// }

// Node *flatten(Node *root)
// {
//     if(root == NULL || root->next == NULL)
//         return root;
    
//     root->next = flatten(root->next);
    
//     root = Merge(root, root->next);
    
//     return root;
// }

