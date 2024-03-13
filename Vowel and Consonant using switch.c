#include<stdio.h>
main()
{
  char ch;
  printf("Enter the character\n");
  scanf("%c",&ch);
  switch(ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':printf("%c is vowel\n",ch);break;
  default:printf("%c is Consonant\n",ch);break;

}


}
