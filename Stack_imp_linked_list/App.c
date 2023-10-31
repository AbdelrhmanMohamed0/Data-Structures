// Main.c: Test file for stack implementation using linked-list in C
#include "Stack.h"  // Include header file

// Function to display an element
void display(ELEMENT_TYPE element)
{
    printf("%d \n", element); // Print the element followed by a newline
}

// Main function
int main(void)
{
    Stack s;                          // Declare a stack variable
    ELEMENT_TYPE element, data, size; // Declare some variables to store elements, data, and size

    stack_init(&s); // Initialize the stack

    push_stack(&s, 8); // Push the element to the stack
    push_stack(&s, 9);

    stack_top(&s, &data);              // Get the top element of the stack and store it in data
    printf("Top data is %d \n", data); // Print the data

    push_stack(&s, 17);
    push_stack(&s, 20);

    pop_stack(&data, &s);                 // Pop an element from the stack and store it in data
    printf("Popped data is %d \n", data); // Print the data

    traverse_stack(&s, &display); // Traverse the stack and display each element

    size = size_stack(&s);               // Get the size of the stack and store it in size
    printf("Stack size is %d \n", size); // Print the size

    clear_stack(&s); // Clear the stack

    if (!pop_stack(&data, &s))    // Try to pop an element from the empty stack and check if it fails
        printf("Empty stack \n"); // Print a message

    size = size_stack(&s);               // Get the size of the stack and store it in size
    printf("Stack size is %d \n", size); // Print the size

    return 0; // Exit with success code
}
