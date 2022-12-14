/*Write a function to reverse a string.*/
#include<stdio.h>
void revstr(char str[20],int n)
{ int i,l;
  char ch;
   for(l=0;str[l];l++);
        for(i=0;i<l/2;i++)
        { ch=str[i];
          str[i]=str[(l-1)-i];
           str[(l-1)-i]=ch;
        }
        printf("%s",str);
}
int main()
{ char str[20];
    printf("enter a string:");
    fgets(str,20,stdin);
      revstr(str,20);
  return 0;
}
