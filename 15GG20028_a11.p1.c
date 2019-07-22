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
	int n,i;
	printf("Enter 8 valuesin non decreasing order\n");
	for(i=0;i<8;i++){
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
	for(i=0;i<8;i++){
		printf("%d ",p->data);
		p=p->next;
    }
    removedup(head);
    p=head;
	printf("\nList after duplicates removed:");
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}   
    return 0;
}
void removedup(struct node *header){ 
    struct node *head=NULL,*a,*b;
	a=header;
	int i;
    for(i=1;i<8;i++){
       b=a->next;
	   if(a->data==b->data){
	   	 a->next=a->next->next;
	   	 b=b->next;
       }
	   else{
	   	a=a->next;
	   	b=b->next;
	   }
	}	
}
