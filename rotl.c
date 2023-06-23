#include "monty.h"

/**
 * rotl - "rotate left" put top of stack on bottom
 *
 * @top: top of stack
 * @bot: bottom of stack
 */
void rotl(stack_t **top, stack_t **bot)
{
	stack_t *ptrt = *top, *ptrb = *bot;

	if (ptrt == NULL || ptrt->prev == NULL)
		return;
	ptrt->next = ptrb;
	ptrb->prev = ptrt;
	*top = ptrt->prev;
	(*top)->next = NULL;
	*bot = ptrt;
	ptrt->prev = NULL;
}

