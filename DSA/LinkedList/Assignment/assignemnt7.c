#include<stdio.h>
#include<stdlib.h>

typedef struct block{
    int data;
    struct block* next;
}Node;

void append(Node** h, int d)
{
    Node* t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = NULL;
    if(*h == NULL)
        *h = t;
    else
    {
        Node* temp = *h;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = t;
    }
}

Node* lsearch(Node* h, int pos)
{
    int i = 1;
    while(h != NULL)
    {
        if(i == pos)
            return h;
        h = h->next;
        i++;
    }
    return NULL;
}

void insertAft(Node* pos, int d)
{
    if(pos == NULL)
        return;
    Node* t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = pos->next;
    pos->next = t;
}

void display(Node* h)
{
    while(h != NULL)
    {
        printf("%d -> ", h->data);
        h = h->next;
    }
    printf("NULL\n");
}

int main()
{
    Node* head = NULL;
    int data, opt, pos;
    do{
        printf("1. Append a Node\n");
        printf("2. Insert a Node\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter an option: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                append(&head, data);
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);
                Node* p = lsearch(head, pos);
                printf("Enter data: ");
                scanf("%d", &data);
                if(p == NULL)
                    printf("Not Found\n");
                else
                    insertAft(p, data);
                break;
            case 3:
                display(head);
                break;
            case 4:
                break;
            default:
                printf("Invalid option\n");
        }
    }while(opt != 4);
    return 0;
}
