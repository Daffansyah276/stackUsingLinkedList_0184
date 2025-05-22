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
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node to the current top
        top = newNode;              // 4. Update the top pointer to the new node
        cout << " Push Value: " << value << endl;
        return value;
    }

    // Pop operation : Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << " Stack is empty. " << endl;
        }
    
        Node *temp = top; // create a temporary pointer to the top node
        top = top->next;  // Update the top pointer to the next node
        cout << " Popped value: " << top->data << endl;
    }
    // peek/top operation : retrive the value of the topmost element without removing
    void peek(){
        if (top == NULL)
        {
            cout << " List is empty. " << endl;
        } 
        else
        {
            Node* current = top;
            while (current != NULL)
            {
                cout << current->data <<" " << endl;
                current = current->next;
            }
            cout << endl;

        }// Return the value of the top node
    }
    
    // IsEmpty operation: check if the stack is empty
    bool isEmpty(){
        return top == NULL; // return true if the top pointer is NULL,indicating an
    }
};

int main(){
    stack Stack;

    int choice = 0;
    int value;

    while (choice !=5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n ";
        cout << "3. Peek\n ";
        cout << "4. Exit\n ";
        cout << "Enter your chhoice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            Stack.push(value); // Push the entered value onto the stack
            break;
        case 2:
            if (!Stack.isEmpty())
            {
                Stack.pop(); //pop the top element from the stack
            }
            else
            {
                cout << "Stack is empty. Cannot pop. " << endl;
            }
            break;
        case 3:
            if (!Stack.isEmpty())
            {
                Stack.peek(); // get the value of the top element
            }
            else
            {
                cout << "Stack is empty. No top value. " << endl;
            }
            break;
         case 4:
            cout << "Exiting program. " << endl;
        break;
        default:
            cout << "Invalid choice. Try again. " << endl;
       }
       cout << endl;
        
    }
    return;
}