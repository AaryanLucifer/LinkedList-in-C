#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *InsertAtBeginning(node *thead, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->next = thead;

    return temp;
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
    node *head = CreateNode(20);
    head->next = CreateNode(30);
    head->next->next = CreateNode(40);

    PrintList(head);

    head = InsertAtBeginning(head, 10);

    printf("\n");
    PrintList(head);
    return 0;
}