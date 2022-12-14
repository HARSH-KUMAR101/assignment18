/*Write a function to check whether a given string is palindrome or not.*/
#include<stdio.h>
void palindrome(char str[])
{ int i,l=0,flag=0;
    for(i=0;str[i]!=0;i++);
    l=i-1;
    for(i=0;i<l/2;i++)
    { if(str[i]!=str[(l-1)-i]){
        flag=1;
        break;
    }
    }
    if(flag==1)
        printf("given string is not palindrome");
    else
        printf("given string is palindrome");
}
int main()
{ char str[20];
    printf("enter a string: ");
    fgets(str,20,stdin);
   palindrome(str);
  return 0;
}
