#include "monty.h"
/**
  *op_rotr- rotates the stack to the bottom
  *@head: stack head
  *@line_number
  *Return: no return
 */
void op_rotr(stack_t **stack,unsigned int line_number)
{
	stack_t *copy;

	copy = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *stack;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*stack)->prev = copy;
	(*stack) = copy;
}
