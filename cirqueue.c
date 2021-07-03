#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define NILL -1
typedef struct queuetype{
    int a[MAX];
    int front,rear;
}queue;
void main(){
    int isfull(queue*);
    int isempty(queue *);
    void enqueue(queue *,int);
    int dekqueue(queue *);
    queue Q;
    Q.front=Q.rear=NILL;
    int ch,item;
    while(1){
        printf("\t MENU");
        printf("\n\t------------------");
        printf("\n1. INSERTION");
        printf("\n2.DELETION");
        printf("\n3.EXIT");
        printf("\n\n ENTER YOUR CHOICE");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter element to insert");
            scanf("%d",&item);
            if(isfull(&Q))
            {
                printf("\nQUEUE IS FULL");
            }
            else{
                enqueue(&Q,item);
            }
            break;
            case 2:
            if(isempty(&Q)){
                printf("Queue is empty");
            }
            else{
                item=delqueue(&Q);
                printf("Deleted value is %d",item);
            }
            break;
            case 3:
              exit(1);
            default:
            printf("Wrong Choice");

        }

    }
   
}
 int isfull(queue *Q){
        if((Q->front==0&& Q->rear==MAX-1)||(Q->rear==Q->front-1))
        return 1;
        else  
        return 0;
    }
    int isempty(queue *Q){
        if(Q->front==NILL)
        return 1;
        else
        return 0;
    }
   void enqueue(queue *Q,int item)

{

    int i;

    if(Q->front==NILL)

    {

        Q->front=Q->rear=0;

    }

    else if(Q->rear==MAX-1)

    {

        for(i=Q->front;i<=Q->rear;i++)

        {

            Q->a[i  -  Q->front] = Q->a[i];

        }

        Q->rear = Q->rear - Q->front;

        Q->front=0;

        Q->rear=Q->rear+1;

    }

    else{

        Q->rear=Q->rear+1;

    }

    Q->a[Q->rear]=item;

}
    
int delqueue(queue *Q){
    int item;
    item=Q->a[Q->front];
    if(Q->front==Q->rear)
     Q->front=Q->rear=NILL;
     else if(Q->front==MAX-1)
     Q->front=0;
     else
     Q->front=Q->front+1;
     return item;
}