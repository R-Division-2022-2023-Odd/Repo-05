#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
char postfix[SIZE];
float stack[SIZE];
void push(float);
float pop();
int top;
float eval_postfix(char []);
int is_operator(char);
main()
{
top=-1;
float res;
printf("enter a postfix expression\n");
scanf("%s",postfix);
res=eval_postfix(postfix);
printf("result=%f\n",res);
}

float eval_postfix(char postfix[SIZE])
{

int i=0;
float val,op2,op1,r;
char symbol;
while(postfix[i]!='\0')
{
     symbol=postfix[i];
     if(isalpha(symbol))
     {
        printf("enter the value for %c\n",symbol);
        scanf("%f",&val);
        push(val);
     }
     else if(is_operator(symbol))
     {
        op2=pop();
        op1=pop();

        switch(symbol)
        {
           case '+': r=op1+op2;
                           push(r);
                           break;
            case '-': r=op1-op2;
                           push(r);
                           break;
            case '*': r=op1*op2;
                           push(r);
                           break;
            case '/': r=op1/op2;
                           push(r);
                           break;

        }

     }
     else if(isdigit(symbol))
     {
        switch(symbol)
        {
            case '0': push(0);break;
            case '1': push(1);break;
            case '2': push(2);break;
            case '3': push(3);break;
            case '4': push(4);break;
            case '5': push(5);break;
            case '6': push(6);break;
            case '7': push(7);break;
            case '8': push(8);break;
            case '9': push(9);break;
        }
     }

     i++;
}

return(stack[top]);

}


void push(float num)
{
    if(top!=SIZE-1)
    {
        top++;
        stack[top]=num;
    }
}

float pop()
{
    float number;
    if(top!=-1)
    {
         number=stack[top];
         top--;
         return(number);
    }
}

int is_operator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        return(1);
    else return(0);
}
