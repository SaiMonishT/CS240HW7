#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

void check_BST(struct Tree_Node *linked_list) {

    /*if(linked_list->left != NULL) {
        check_BST(linked_list -> left);
    }
    printf("%d\n", linked_list -> value);
    if(linked_list -> right != NULL) { check_BST(linked_list -> right);}
    */
}

void insert_leaf(struct Tree_Node *subtree, struct Tree_Node *temp) {
   // assert(subtree);
    //assert(temp);
    if(subtree->value > temp -> value) {
        if(subtree -> left != NULL) {
            insert_leaf(subtree -> left, temp);
        } else {
            subtree -> left = temp;
        }
    } else if (subtree -> right != NULL) {
        insert_leaf(subtree->right, temp);
    } else {
        subtree -> right = temp;
    }
}

void print_tree(struct Tree_Node *subtree) {
   // assert(subtree);
    if(subtree->left != NULL) {
        print_tree(subtree->left);
    }
    printf("%d\n", subtree->right);
    if(subtree->right != NULL) {
        print_tree(subtree->right);
    }
}

struct Tree_Node *build_BST(Linked_Pair *linked_list) {
   // struct Tree_Node* temp2 = malloc(sizeof(struct Tree_Node));
  struct Pair* temp = malloc(sizeof(struct Pair));
        
        //tree node values 
//get head
temp = linked_list;
    while (temp != NULL)
    {
        struct Tree_Node* tree = malloc(sizeof(struct Tree_Node));
        struct Tree_Node* headNode = malloc(sizeof(struct Tree_Node));
        headNode -> value = temp -> value;
        headNode -> name = temp -> value;  
        insert_leaf(headNode, temp);
        temp = temp -> next;
    }
    
        
    
    
}
