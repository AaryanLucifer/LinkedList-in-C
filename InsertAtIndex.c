#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void InsertAtIndex(node *thead, int index, int val)
{
    int i = 0;

    while (i != index-1)
    {
        thead = thead->next;
        i++;
    }

    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->next = thead->next;
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
    head->next->next = CreateNode(40);

    PrintList(head);

    InsertAtIndex(head, 2, 30);

    printf("\n");
    PrintList(head);
    return 0;
}