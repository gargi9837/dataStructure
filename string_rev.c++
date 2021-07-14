#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main(){
    int i;
    stack<char> stack;
    char str[6]={"Geeks"};
    for(i=0;i<strlen(str);i++){
        stack.push(str[i]);
    }
   /* stack.push(22);
    stack.push(32);
    stack.push(52);
    stack.push(22);
    stack.pop();*/
    while(!stack.empty()){
        cout<<" "<<stack.top();
        stack.pop();
    }
}