#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stuck

    Stack()
    {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation : insert an element onto the top of the stuck
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
    }