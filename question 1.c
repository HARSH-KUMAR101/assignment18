/*Write a function to calculate length of the string*/
#include<stdio.h>
int length(char str[],int n)
{ int i;
    for(i=0;str[i]!='\0';i++);
  return i-1;
}
int main()
{ char str[20];
     printf("enter a string: ");
     fgets(str,20,stdin);
    printf("length of string is %d",length(str,20));
 return 0;
}
