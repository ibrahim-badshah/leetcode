
#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{

    struct ListNode dummy; // dummy head (important trick)
    struct ListNode *tail = &dummy;
    dummy.next = NULL;

    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry)
    {

        int v1 = (l1 != NULL) ? l1->val : 0;
        int v2 = (l2 != NULL) ? l2->val : 0;

        int sum = v1 + v2 + carry;
        carry = sum / 10;

        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = sum % 10;
        temp->next = NULL;

        tail->next = temp;
        tail = temp;

        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }

    return dummy.next;
}
