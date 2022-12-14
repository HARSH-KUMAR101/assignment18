/*Write a function to check whether a given string is an alphanumeric string or not.*/
#include<stdio.h>
void alphanumeric_check(char str[])
{ int i,flag1=0,flag2=0;
   for(i=0;str[i]!='\0';i++)
   { if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
       flag1=1;
     else if(str[i]>='0' && str[i]<='9')
        flag2=1;
   }
   if(flag1==1 && flag2==1)
     printf("this string is alphanumeric");
   else
     printf("this string is not alphanumeric");
}
int main()
{ char str[20];
    printf("enter a string: ");
    fgets(str,20,stdin);
    alphanumeric_check(str);
 return 0;
}
