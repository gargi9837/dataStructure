#include<stdio.h>
#include<stdlib.h> 
# define max 10
typedef struct stack{
    int top;
    int ar[max];
}stack1;
typedef enum{false,true} boolean;
void createstack(stack1 *sp);
boolean isempty(stack1 *sp);
boolean isfull(stack1 *sp);
int pop(stack1 *sp);
void push(stack1 *sp,int element);
int peek(stack1 *sp);

void main(){
    int choice,value,poped,item;
   stack1  s;
   createstack(&s);
   while(1){
       printf("\n1.Push");
       printf("\n2.Pop");
       printf("\n3.Peek");
       printf("\n4.Exit");
       printf("\nEnter your choice");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           if(isfull(&s)){
               printf("Stack is full\n");
           }
           else{
           printf("\nEnter Element");
           scanf("%d",&value);
           push(&s,value);
           }
           break;
           case 2:
           if(isempty(&s)){
               printf("\nStack is empty");
               
           }
           else{
              poped=pop(&s);
              printf("Poped element is %d",poped);
           }
           break;
           case 3:
           if (isempty(&s)){
               printf("\nStack Empty");
           }
           else{
               item=peek(&s);
               printf("Peeped element is %d",item);
           }
           break;
           case 4:
           exit(0);
           default:
           printf("Wrong Choice!!!!");

       }
   }
}
void createstack(stack1 *sp){
    sp->top=-1;
}
boolean isempty(stack1 *sp){
    if(sp->top==-1)
    return true;
    else 
    return false;
}
boolean isfull(stack1 *sp){
    if(sp->top==max-1){
        return true;
    }
    else
    return false;
}
int pop(stack1 *sp){
    int temp=sp->ar[sp->top];
    sp->top--;
    return temp;
}
void push(stack1 *sp, int element){
    sp->top++;
    sp->ar[sp->top]=element;
}
int peek(stack1 *sp){
    return(sp->ar[sp->top]);
}
