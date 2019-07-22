//15GG20028
//Sourav Khemka
#include <stdio.h>
typedef struct{
int num;
struct node *link;
}node;
void reverse(node *p1)
{
    node *p2,*p3;
    p2=p1;
    p1=p1->link;
    p2->link=NULL;
    while(p1->link!=NULL)
    {
        p3=p1;
        p1=p1->link;
        p3->link=p2;
        p2=p3;
    }
    p1->link=p2;

    print(p1);
}
void input()
{
node *head=NULL, *p ,*prev;
    int count = 0;
    int choice = 1;

 printf("HOW many elements do you want to enter? ");
 scanf("%d",&choice);
    while (count<choice)
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter the element %d \n",count+1);
        scanf("%d", &p-> num);
        if (head != NULL)
        {
            prev->link=p;

        }
        else
        {
            head=p;
        }
        prev=p;
     count++;
    }
    p->link=NULL;
    print(head);
    printf("\nAfter reversing: ");
    reverse(head);
}
void print(node * head)
{
    /*  reset temp to the beginning */
    int count=0;node *temp;
    temp = head;
    printf("\n Status of the linked list is\n");
    while (temp != NULL)
    {
        printf("%d---->",temp->num);
        count++;
        temp =temp->link;
    }
    printf("Null");
    printf("\nNo. of nodes in the list = %d\n", count);
}
main()
{
input();
}
