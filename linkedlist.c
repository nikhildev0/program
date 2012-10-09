#include<stdio.h>
#include<stdlib.h>
struct node  
{
    int data;
    struct node *next;
};
struct node *start;
void insertbegining(void)
{
    struct node *nextnode;
    int a;
    nextnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&nextnode->data);
    a=nextnode->data;
    if(start==NULL)                       
    {
        nextnode->next=NULL;
        start=nextnode;
    }
    else
    {
        nextnode->next=start;
        start=nextnode;
    }
    printf("%d successfully inserted\n",a);
    return;
}
void insertend(void)
{
    struct node *nextnode,*lp;int b;
    nextnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&nextnode->data);
    b=nextnode->data;
    if(start==NULL)
    {
        nextnode->next=NULL;
        start=nextnode;
    }
    else
    {
        lp=start;
        while(lp->next!=NULL)
        {
            lp=lp->next;
        }
        lp->next=nextnode;
        nextnode->next=NULL;
    }
    printf("%d is successfully inserted\n",b);
    return;
}
void insertmiddle(void)
{
    struct node *nextnode,*temp,*ptemp;int x,v;
    nextnode=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("singlylinkedlist is empty\n"); return;
    }
    printf("enter data before which number is to be inserted:\n");
    scanf("%d",&x);
    if(x==start->data)
    {
        insertbegining();
        return;
    }
    ptemp=start;
    temp=start->next;
    while(temp!=NULL&&temp->data!=x)
    {
        ptemp=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("%d data does not exist\n",x);
    }
    else
    {
        printf("enter data:");
        scanf("%d",&nextnode->data);
        v=nextnode->data;
        ptemp->next=nextnode;
        nextnode->next=temp;
        printf("%d sucessfully inserted\n",v);
    }
    return;
}
void deletion(void)
{
    struct node *pt,*t;
    int x;
    if(start==NULL)
    {
        printf("singlylinkedlistl is empty\n");
        return;
    }
    printf("enter data to be deleted:");
    scanf("%d",&x);
    if(x==start->data)
    {
        t=start;
        start=start->next;
        free(t);
        printf("%d is successfully deleted\n",x);
        return;
    }
    pt=start;
    t=start->next;
    while(t!=NULL&&t->data!=x)
    {
        pt=t;t=t->next;
    }
    if(t==NULL)
    {
        printf("%d does not exist\n",x);return;
    }
    else
    {
        pt->next=t->next;
    }
    printf("%d is sucessfully deleted\n",x);
    free(t);
    return;
}
void display(void)
{
    struct node *temp;
    if(start==NULL)
    {
        printf("singlylinkedlist is empty\n");
        return;
    }
    printf("elements are:\n");
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return;
}
void main()
{
    int c,a;
    start=NULL;
    do
    {
        printf("1:insert\n2:delete\n3:display\n4:exit\nenter choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("1:insertbegining\n2:insert end\n3:insert middle\nenter choice:");
                scanf("%d",&a);
                switch(a)
                {
                    case 1:insertbegining();break;
                    case 2:insertend();break;
                    case 3:insertmiddle();break;
                }
                break;
            case 2:deletion();break;
            case 3:display();break;
            case 4:printf("program ends\n");break;
            default:printf("wrong choice\n");
                    break;
        }
    }while(c!=4);
}
