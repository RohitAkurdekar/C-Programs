/*****************************************************************
 * @name linked list header
 * @date 08/oct/2022.
 * @note All header initialization or declaration
 * @brief For proper utilization of scattered memory, Linked list was designed.
        * Linear data structure.
        * Each node link with each other.
        * Self referencing pointers.
*****************************************************************/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<stdio.h>
#include<malloc.h>

/*******************************************************************
 * @name typedef struct linked_list
 * @date 08/oct/2022
 * @brief Structure for linked list
 * @note Used typedef to convert 'struct linked_list' to 'NODE'.
********************************************************************/
typedef struct linked_list
{
    int iData;
    struct linked_list* Next;
    
}NODE;

NODE* Create_New_Node(void);                               // Allocate a memory for struct (NODE)
// --------------------------------- Add node -----------------------------------------

NODE* Add_New_Node_at_begin(NODE *head);                         // Add New node at begining of list 
void Add_New_Node_at_between(NODE *head,int position);           // Add New node at between of list 
NODE* Add_New_Node_at_end(NODE *tail);                           // Add New node at end of list 
// --------------------------------- Delete node -----------------------------------------

NODE* Delete_New_Node_at_begin(NODE *head);                       // Delete  node at begining of list
NODE* Delete_New_Node_at_between(NODE *head,int position);        // Delete  node at between of list
NODE* Delete_New_Node_at_end(NODE *head);                         // Delete  node at end of list

int iNode_count(NODE *head);                                      // Count total number of nodes

void vDisplay_elements(NODE *head);                               // Display elements of linked list

void vDisplayMenu(void);                                   // Display menu


#endif