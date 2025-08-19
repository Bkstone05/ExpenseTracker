
#include "Income.h"

INode* Income::insertNode(INode value)
{
    int nPos; 
    if(head->next == NULL)
    {
        return head; 
    }
    nPos = traverse(head->next, value.amount);
    if(nPos == 1)
    {
        //Stopped Here 8/18/25
    }
}

/*
Traverse
This function traverses the list and returns the position 
the new node (Income Source) should be inserted
Returns Integer Position
*/
int Income::traverse(INode* head, int income)
{
    int pos = 0; 
    while(head->amount >= income)
    {
        head = head->next;
        pos++; 
    }
    return pos; 
}
void Income::deleteIncome(int pos)
{

}
void Income::displayIncome() const
{

}
void Income::quickSort(INode value)
{

}