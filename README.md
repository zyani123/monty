# 0x19. C - Stacks, Queues - LIFO, FIFO

## Description

### The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Commands

1. push Pushes an integer onto the stack.
2. pall Prints all integers on the stack, starting at the top..
3. pint Prints the integer at the top of the stack.
4. pop Removes top element of stack.
5. swap Swaps top two elements of the stack.
6. add Add top two elements of the stack, remove them, and push result onto stack.
7. sub Subtract top two elements of the stack, remove them, and push result onto stack.
8. div Integer divide top two elements of the stack, remove them, and push result onto stack.
9. mul Multiply top two elements of the stack, remove them, and push result onto stack.
10. mod Integer division remainder top two elements, remove them, push result onto stack.
11. pchar Print the ascii character based on top integer in stack.
12. pstr Print the ascii characters related to integers in stack until 0 or >255.
13. rotl Rotate stack. Top element becomes last. Second from top becomes top.
14. rotr Rotate stack. Last element becomes top, Top element becomes second from top.
15. stack Changes mode to first in first out (the default behavior). Front of queue becomes top of stack.
16. queue Changes mode to last in first out. Top of stack becomes front of queue.

## Compilation

To compile this project, you can use the following command:
'''gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty'''
