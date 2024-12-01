#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *CreateList(int el)
{
    node *head = (node *)malloc(sizeof(node));

    printf("Enter Data(int) for Node 1(Head) : ");
    scanf("%d", &head->data);
    head->next = NULL;

    node *temp = head;

    if (el > 1)
    {
        for (int i = 2; i <= el; i++)
        {
            node *newnode = (node *)malloc(sizeof(node));

            printf("Enter Data(int) for node %d : ", i);
            scanf("%d", &newnode->data);

            temp->next = newnode;
            temp = temp->next;
        }
        temp->next = NULL;
    }

    return head;
}

void PrintList(node *temp)
{
    for (int i = 1; temp != NULL; i++)
    {
        printf("Data of Node %d : %d\n", i, temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n;
    printf("Enter Number of Members in List : ");
    scanf("%d", &n);

    node *head = CreateList(n);

    PrintList(head);

    return 0;
}