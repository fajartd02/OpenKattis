#include <stdio.h.>
#include <stdlib.h> //malloc > alokasi memory untuk node baru

struct Data
{
    int value;
    struct Data *next;
} *head = NULL, *tail = NULL;

// struct Data*head = NUL;
// struct Data *tail = NULL;

struct Data *newNode(int value)
{
    //malloc
    struct Data *node = malloc(sizeof(struct Data))
        malloc(sizeof(struct Data));
    node->value = value;
    node->next = NULL;
    return node;
}

void Data *pushHead(int value)
{
    struct Data *node = newNode(value);
    if (head == NULL)
    {
        head = tail = node
    }
    else
    {
        node->next = head;
    }
}

void printAll()
{
    if (head == NULL)
    {
        printf("No data!\n");
        return;
    }

    struct Data *curr = head;

    while (curr != NULL)
    {
        printf("%d", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

int main()
{

    pushHead(5);
    pushHead(10);
    printAll();
    return 0;
}