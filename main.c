#include <stdio.h>

int stack[10],n,top=-1;


void push(){
  int x;
  if(top==n-1){
    printf("Over flow\n");
  }
  else{
    printf("Enter the \n");
    scanf("%d",&x);
    top++;
    stack[top]=x;

  }
}
void peek(){
  if(top==-1)
  {
     printf("Under flow\n");
  }
  else
  {
    printf("%d\n",stack[top]);
  }
}
void display(){
  for(int i=top;i>-1;i--){
    printf("%d\n",stack[i]);
    
  }
}
void pop(){
   if(top==-1)
  {
     printf("Underflow\n");
  }
  else{
    top--;
  }
}

int main(void) {
  printf("enter the size of stack\n");
  scanf("%d",&n);
  int ch;
  do{
    
    printf("Enter\n 1 for push()\n 2 for pop()\n 3 for peek()\n 4 for display()\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 :push();
      break;
      case 2 :pop();
      break;
      case 3 :peek();
      break;
      case 4 :display();
      break;
      default:printf("\n invalid");


    }

  }while(ch!=0);
  return 0;
}
