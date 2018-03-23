#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct linklist
{
	int number;
	struct linklist *next;
};
typedef struct linklist node;
void create(node *);
void count(node *);
node *head;
void main()
{
	head=(node *) malloc(sizeof(node));
	create(head);
	printf("\n");
	count(head);
	getch();
}
void create(node *list)
{
	char conf='y';
	int i;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&list->number);
	printf("\nWANT TO CONTINUE[Y/N]: ");
	conf=getche();
	printf("\n");
	if(conf=='n' || conf=='N')
		list->next=NULL;
	else
	{
		list->next=(node *) malloc(sizeof(node));
		create(list->next);
	}
}
void count(node *first)
{
	int i=0;
	while(first!=NULL)
	{
		first=first->next;
		i++;
	}
	printf("THERE ARE %d NODES IN THE LINK LIST",i);
}
