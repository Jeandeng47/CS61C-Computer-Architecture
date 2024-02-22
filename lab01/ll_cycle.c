#include <stddef.h>
#include "ll_cycle.h"
#include <stdio.h>

int ll_has_cycle(node *head)
{
    /* your code here */

    // if list empty or only single node, no cycle
    if (head == NULL || head->next == NULL)
    {
        printf("If list is empty or contains only single node, no cycle.\n");
        return 0;
    }

    node *tortoise = head;
    node *hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        // tortoise moves 1 step, hare moves 2 steps
        tortoise = tortoise->next;
        hare = hare->next->next;

        // if tortoise and hare meets, there is cycle
        if (tortoise == hare)
        {
            return 1;
        }
    }

    printf("No cycle detected.\n");
    return 0;
}