/*****************************************************************
 * @name linked list main
 * @date 08/oct/2022.
 * @brief For proper utilization of scattered memory, Linked list was designed.
        * Linear data structure.
        * Each node link with each other.
        * Self referencing pointers.
*****************************************************************/

#include"linked_list.h"

int main()
{
    int choice;
    char cont;
    // Pointers for linked list
    NODE *HEAD = NULL;
    NODE *TAIL = NULL;

    do
    {
        vDisplayMenu();
        scanf("%d",&choice);

        switch (choice)
        {
            // ADD new node at begining 
            case 1:
                {
                    if (HEAD == NULL)
                    {
                        HEAD = Add_New_Node_at_begin(HEAD);
                        TAIL = HEAD;
                    }
                    else    HEAD = Add_New_Node_at_begin(HEAD);
                    
                }
                break;
            // ADD new node at end
            case 2:
                {
                    if (TAIL == NULL)
                    {
                        TAIL = Add_New_Node_at_end(TAIL);
                        HEAD = TAIL;
                    }
                    else    TAIL = Add_New_Node_at_end(TAIL);
                }
                break;
            // ADD new node at between 
            case 3:
                {
                    int pos=0;
                    printf("\nEnter position to add a node: ");
                    scanf("%d",&pos);
                    if (HEAD == NULL && pos == 1)   // Add node at begin since Node(s) are not present
                    {
                        HEAD = Add_New_Node_at_begin(HEAD);
                        TAIL = HEAD;
                    }
                       // Add node at begin since position is 1
                    else if(HEAD != NULL && pos == 1)   HEAD = Add_New_Node_at_begin(HEAD);
                    // Add node according position given
                    else if(pos >1 && pos <= iNode_count(HEAD)) Add_New_Node_at_between(HEAD,pos);
                    else    printf("\nInvalid position");
                    
                }
                break;
            // DELETE new node at begining 
            case 4:
                {
                    if(HEAD->Next == NULL)   // if single node
                    {       free(HEAD); HEAD = TAIL = NULL;                    }

                    else if(HEAD != NULL)   // if more than one node
                    {       HEAD = Delete_New_Node_at_begin(HEAD);                    }

                    else printf("\nNode not available...");     
                }
                break;
            // DELETE new node at end 
            case 5:
                {
                    if(HEAD == NULL)    printf("\nNode not available...");
                   
                    else if(HEAD->Next == NULL )
                    {        free(HEAD);    HEAD = TAIL = NULL;                    }

                    else   TAIL =  Delete_New_Node_at_end(HEAD);
                }
                break;
            // DELETE new node at berween 
            case 6:
                {
                    int count = iNode_count(HEAD);
                    int pos = 0;
                    printf("\nEnter the position of node: ");
                    scanf("%d",&pos);
                    if (pos == 1)
                    {
                        if(count == 0)    printf("\nList is empty");
                        else if(pos == 1 && count == 1)
                        {
                            HEAD = Delete_New_Node_at_begin(HEAD);
                            TAIL = HEAD =  NULL;
                        }
                        else HEAD = Delete_New_Node_at_begin(HEAD);
                    }
                    else if(pos == count)   TAIL = Delete_New_Node_at_end(HEAD);
                    else if(pos>1 && pos<=count)    HEAD = Delete_New_Node_at_between(HEAD,pos);
                    else printf("\nNew node position is not matching.......");
                }
                break;
            // Display linked list
            case 7:
                {
                    printf("\n");
                    vDisplay_elements(HEAD);
                }
                break;
            
            default:
                printf("\nInvalid choice.");
                break;
        }

        printf("\nDo you want to continue...??? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    
    printf("\n-------------------- End of code ---------------------\n");
    return 0;
}