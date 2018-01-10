#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
node* create(int n);
node* display(node* head);
int main()
{
    int n,head;
    printf("How many nodes?");
    scanf("%d",&n);

    head = create(n);
    printf("\nThe linked list is:\n\n\n ");
    display(head);
    printf("\n\n\n");

return 0;
}
node* create(int n)
{
    int i=0;
        node* p = NULL;
        node* head = NULL;
        node* temp = NULL;

        for(i=0; i<n; i++)
        {
            temp = (node*)malloc(sizeof(node));
            printf("\nEnter value of node no. %d - ",i+1);
            scanf("%d",&temp->data);
            temp->next = NULL;
            if(head == NULL)
                head = temp;
            else
            {
                p = head;
                while(p->next != NULL)
                    p = p->next;
                p->next = temp;
            }

        }
    return head;
}

node* display(node* head)
        {
            node* p = NULL;
            if(head == NULL)
                printf("\nList is empty");
            else
            {
                p = head;
                while(p != NULL)
                {
                    printf("%d->",p->data);
                    p = p->next;
                }
            }
            return 0;
        }
