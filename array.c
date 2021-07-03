#include<stdio.h>
int fun(int a[]){
    int h;
    h=a+1;
    printf("%d",sizeof(a));
    return h;
}
void main(){
    int q,n=38,b=44;
    int a[10]={33,663};
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(a));
    printf("%d\n",*a);
    q=fun(a);
  //  printf("%d",sizeof(h));
}