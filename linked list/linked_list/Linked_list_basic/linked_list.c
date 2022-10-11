/*****************************************************************
 * @name linked list
 * @date 08/oct/2022.
 * @note Function definations
 * @brief For proper utilization of scattered memory, Linked list was designed.
        * Linear data structure.
        * Each node link with each other.
        * Self referencing pointers.
*****************************************************************/
#include"linked_list.h"

/***********************************************************************
 * @name NODE*  Create_New_Node(void)
 * @date 08/oct/2022
 * @brief Allocate a memory to Node
 * @param none
 * @returns NODE* pointer to newly allocated memory.
************************************************************************/
NODE*  Create_New_Node(void)
{
    NODE *NewNode = (NODE*) malloc(sizeof(NODE));
    if (NewNode != NULL)
    {
        printf("\nEnter the value: ");
        scanf("%d",&NewNode->iData);
        NewNode->Next = NULL;
    }
    else printf("\nMemory not available.....!!!!");

    return NewNode;
}

/***********************************************************************
 * @name void vDisplayMenu(void)
 * @date 08/oct/2022
 * @brief Display menu
 * @param none
 * @returns none
************************************************************************/
void vDisplayMenu(void)
{
    printf("\n--------------- Menu ----------------------");
    printf("\n1.ADD new node at begining of linked list.....");
    printf("\n2.ADD new node at end of linked list.....");
    printf("\n3.ADD new node at between of linked list.....");
    printf("\n4.DELETE  node at begining of linked list.....");
    printf("\n5.DELETE  node at end of linked list.....");
    printf("\n6.DELETE  node at between of linked list.....");
    printf("\n7.Display the linked list element......");
    
    printf("\nEnter your Choice: ");
}

// --------------------------------- Add node -----------------------------------------

/***********************************************************************
 * @name NODE* Add_New_Node_at_begin(NODE *head)
 * @date 08/oct/2022
 * @brief Allocate a memory to Node
 * @param NODE* pointer of head
 * @returns NODE* pointer to newly allocated memory.
************************************************************************/
NODE* Add_New_Node_at_begin(NODE *head)
{
    if (head == NULL)
    {
        head = Create_New_Node();
        return head;
    }
    else
    {
        NODE *NewNode = Create_New_Node();
        NewNode->Next = head;
        return NewNode;
    }
    
}

/***********************************************************************
 * @name NODE*  Add_New_Node_at_between(NODE *head,int position)
 * @date 08/oct/2022
 * @brief Allocate a memory to Node
 * @param NODE* pointer of head
 * @param int position of node to be inserted
 * @returns none
************************************************************************/
void Add_New_Node_at_between(NODE *head,int position)
{
    while(!position)
    {        head = head->Next; position--;    }
    
    NODE *NewNode = Create_New_Node();
    NewNode->Next = head->Next;             // Update addr of next block in new->next
    head->Next = NewNode;                   // Update addr of new  block in old->next
    

    /*
        NODE *curr = head;
        NODE *prev;
        int count = 1;
        while(count<=p && curr != NULL)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        NODE *NewNode = Create_New_Node();
        prev->Next = NewNode;
        NewNode-Next = curr;
        return head;
    */



}

/***********************************************************************
 * @name NODE* Add_New_Node_at_end(NODE *tail)
 * @date 08/oct/2022
 * @brief Allocate a memory to Node
 * @param NODE* pointer of tail
 * @returns NODE* pointer to newly allocated memory.
************************************************************************/
NODE* Add_New_Node_at_end(NODE *tail)
{
    
    if (tail == NULL)
    {
        tail = Create_New_Node();
        return tail;
    }
    else
    {
        NODE *NewNode = Create_New_Node();
        tail->Next = NewNode;
        return NewNode;
    }
}

// --------------------------------- Delete node -----------------------------------------

/***********************************************************************
 * @name void Delete_New_Node_at_begin(NODE *head)
 * @date 08/oct/2022
 * @brief Delete node at begining of list
 * @param NODE* pointer of head
 * @returns NODE* pointer to new tail.
************************************************************************/
NODE* Delete_New_Node_at_begin(NODE *head)
{
    NODE *tempNode = head;
    head = head->Next;
    free(tempNode);
    return head;
/*
    NODE *tempNode = head->Next;
    free(head); head = NULL;
    return tempNode;
*/
}

/***********************************************************************
 * @name void  Delete_New_Node_at_between(NODE *head,int position)
 * @date 08/oct/2022
 * @brief Delete a particular 
 * @param NODE* pointer of head
 * @param int position of node to be deleted
 * @returns NODE* pointer to new tail
************************************************************************/
NODE* Delete_New_Node_at_between(NODE *head,int position)
{
    NODE *curr = head, *prev = NULL;
    int count =1;
    while (count < position && curr != NULL)
    {
        prev = curr;
        curr = curr->Next;
        count++:
    }
    if (count == position)
    {
        prev->Next = curr->Next;
        free(curr);
    }
    return head;        
}

/***********************************************************************
 * @name void  Delete_New_Node_at_end(NODE *head)
 * @date 08/oct/2022
 * @brief Allocate a memory to Node
 * @param NODE* pointer of head
 * @returns NODE* pointer to new tail.
************************************************************************/
NODE* Delete_New_Node_at_end(NODE *head)
{
    NODE *prev;
    while (head->Next != NULL)
    {
        prev = head;
        head = head->Next;
    }
    free(head);
    prev->Next = NULL;
    return prev;    
}



/***********************************************************************
 * @name void vDisplay_elements(NODE *head)
 * @date 08/oct/2022
 * @brief Display elements of linked list
 * @param NODE* pointer of head
 * @returns none.
************************************************************************/
void vDisplay_elements(NODE *head)
{
    if (head != NULL)
    {
        while (head->Next != NULL)
        {
            printf("\t %d",head->iData);
            head = head->Next;
        }
        printf("\t %d",head->iData);
        
        // vDisplay_elements(head->Next);       // Not using to avoid segmentation fault
    }
    else printf("\nLinked list is empty.")    ;
}


/***********************************************************************
 * @name int iNode_count(NODE *head)
 * @date 08/oct/2022
 * @brief Count the nodes in linked list
 * @param NODE* pointer of head
 * @returns int Node count.
************************************************************************/
int iNode_count(NODE *head)
{
    int count=0;
    if (head == NULL)
    {        count = 0;    }
    else
    {
        while (head != NULL)
        {
            count++;
            head = head->Next;
        }
    }
    return count;    
}