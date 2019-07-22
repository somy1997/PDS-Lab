//15GG20028
//Sourav Khemka
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head=NULL,*p,*prev,*q;
	int n,i,num;
	printf("Enter number of values you want to enter(MAX 10)):");
	scanf("%d",&num);
	printf("Enter %d values\n",num);
	for(i=0;i<num;i++){
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL)
		  head=p;
        else
          prev->next=p;
        prev=p;
	}
	p=head;
	printf("The entered linked list:");
	for(i=0;i<num;i++){
		printf("%d ",p->data);
		p=p->next;
    }
    print_middle(head);
    return 0;
}
void print_middle(struct node *header){
	struct node *p;
	p=header;
	int n=0;
	while(p!=NULL){
		p=p->next;
		n++;
	}
	p=header;
	int i=1;
	n=n/2+1;
	while(i<n){
		p=p->next;
		i++;
	}
	printf("\nThe Middle value is : %d\n",p->data);
}


