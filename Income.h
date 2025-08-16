/*
Purpose: Linked List to store income of user. Allows user to add multiple sources of income. 
Class will track total income, name of income source, and keep list sorted based off of most income. 
*/

#ifndef Income_h
#define Income_h

#include <iostream>
#include <string>
using namespace std;

class Income
{
    private:
        struct INode
        {
            string name;
            int amount;
        };

        INode *head;
    
    public: 
    Income()
    {
        head = NULL;
    }
    ~Income(){}
    
    //need sorting
};

#endif