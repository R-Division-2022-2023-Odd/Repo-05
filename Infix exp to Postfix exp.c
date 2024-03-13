#include<stdio.h>
char stack[50];
char infix[50],postfix[50];
int i,j;
void infix_to_postfix(char [],char []);
int is_operator(char);
int is_precedence(char);
void push(char);
char pop();
char symbol,ch;
int top;


main()
{
    top=-1;
  printf("enter the infix expression\n");
  scanf("%s",infix);
  infix_to_postfix(infix,postfix);
  printf("the postfix expresssion=%s\n",postfix);
}

void infix_to_postfix(char infix[50],char postfix[50])
{
 int i=0,j=0;
 while(infix[i]!='\0')
 {
    symbol=infix[i];
    if(symbol=='(')
    {
        push(symbol);
    }
    else if(isalpha(symbol)||isdigit(symbol))
    {
     postfix[j]=symbol;
     j++;
    }
    else if(is_operator(symbol))
    {
       if(top==-1)
       {
         push(symbol);
       }
       else if(is_precedence(symbol)<is_precedence(stack[top]))
       {
                while(is_precedence(symbol)<=is_precedence(stack[top]))
                 {
                     postfix[j]=pop();
                     j++;
                 }



         push(symbol);
       }
       else if(is_precedence(symbol)>is_precedence(stack[top]))
       {
        push(symbol);
       }
         else if(is_precedence(symbol)==is_precedence(stack[top]))
       {
        postfix[j]=pop();
         j++;
         push(symbol);
       }
    }
    else if(symbol==')')
    {
        ch=pop();
        while(ch!='(')
        {
        postfix[j]=ch;
        j++;
        ch=pop();
        }
    }

    i++;
 }
while(top!=-1)
{
    postfix[j]=pop();
    j++;
}
postfix[j]='\0';
}




void push(char c)
{
    if(top!=49)
    {
        top=top+1;
        stack[top]=c;
    }
}

char pop()
{
char sym;
    if(top!=-1)
    {
       sym=stack[top];
       top--;
       return(sym);
    }
}

int is_precedence(char c)
{
    switch(c)
    {
    case '(':return(0);break;
    case '+':
    case '-':return(1);break;
    case '*':
    case '%':
    case '/':return(2);break;
    }

}

int is_operator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%')
        return(1);
    else
        return(0);
}
