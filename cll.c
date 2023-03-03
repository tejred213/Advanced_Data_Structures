//P=(struct node*)malloc (sizeof(struct node));

//

#include<stdio.h>

#include<stdlib.h>

struct node

{

int coeff;

int exp;

struct node *next;

};

struct node *head1, *head2, *head3;

void create( struct node *H)

{

struct node *temp, *curr;

temp=head1;

int choice;

while(choice==1)

{

temp=(struct node *)malloc(sizeof(struct node));

printf("Enter the coefficient");

scanf("%d",curr->coeff);

printf("Enter the exponent");

scanf("%d",curr->exp);

curr->next=head1;

temp->next=curr;

temp=curr;

}

printf("enter the choice",choice);

scanf("%d",&choice);

}

void display(struct node *H)

{

struct node *nnode;

if(head1-> next == H)

{

printf("Empty");

}

else

{

nnode=H->next;

while(nnode->exp /=-1)

{

printf("+");

}

printf("%d^x%d",nnode->coeff,nnode ->exp);

nnode = nnode->next;

}

}

int main()

{

struct node *head1, *head2, *head3;

head1=(struct node*)malloc(sizeof(struct node));

head1->exp =-1;

head1->next = head1;

head2=(struct node*)malloc(sizeof(struct node));

head2->exp =-1;

head2->next = head2;

head3=(struct node*)malloc(sizeof(struct node));

head3->exp =-1;

head3->next = head3;

create(head1);

create(head2);

return 0;

}