#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void InsertAtEnd(node *thead, int val)
{
    while (thead->next)
    {
        thead = thead->next;
    }

    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->next = NULL;
    thead->next = temp;
}

void PrintList(node *temp)
{
    for (int i = 1; temp != NULL; i++)
    {
        printf("Data of Node %d : %d\n", i, temp->data);
        temp = temp->next;
    }
}

node *CreateNode(int val)
{
    node *temp = (node *)malloc(sizeof(node));

    temp->data = val;
    temp->next = NULL;

    return temp;
}

int main()
{
    node *head = CreateNode(10);
    head->next = CreateNode(20);
    head->next->next = CreateNode(30);

    PrintList(head);

    InsertAtEnd(head, 40);

    printf("\n");
    PrintList(head);
    return 0;
}