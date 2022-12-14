/*Write a function to transform string into uppercase*/
#include<stdio.h>
void uprcase(char str[])
{int i;
    for(i=0;str[i]!='\0';i++)
    { if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
  printf("%s",str);
}
int main()
{ char str[20];
    printf("enter a string: ");
    fgets(str,20,stdin);
  uprcase(str);
 return 0;
}
