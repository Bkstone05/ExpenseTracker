/*
Purpose: The header file for the Expense Class. The class is a linked list allowing user to rank their expenses
on their importance. The class stores the name, amount, date due, and importance of the expense the use entered. 
It also keeps account of the remaining income left after all expenses have been paid. 
*/

#ifndef Expense_H
#define Expense_H

#include <iostream>
#include <string>
using namespace std;

class Expense
{
    private:
        struct ENode
        {
            string name, due;
            int amount, rank;
        };

        //Need class/struct for income tracking of multiple jobs
        ENode *head;
        ENode* next; 

    public:
        Expense()
        {
            head = NULL;
        }
        ~Expense();
        void insertNode();
        void deleteNode();
        void displayExpenses();
        void getIncome();
        //need to make a sorting method
};

#endif
