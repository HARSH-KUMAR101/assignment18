/*Write a function to find the repeated character in a given string.*/
#include<stdio.h>
#include<string.h>
void repeat(char str[])
{ int i,hash[150]={0};

    for(i=0;str[i]!='\0';i++)
    {
        hash[str[i]]++;
    }
    printf("repeated characters in the strings are:\n");
    for(i=0;i<123;i++)
    { if(hash[i]>1)
        printf("%c = %d \n",i,hash[i]);
    }
}
int main()
{ char str[50];
  int l;
     printf("enter a string: ");
     fgets(str,50,stdin);
     l=strlen(str);
     str[l-1]='\0';
      repeat(str);
return 0;
}
