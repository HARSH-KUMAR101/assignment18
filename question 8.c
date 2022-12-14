/*Write a function to count words in a given string*/
#include<stdio.h>
int wordcount(char str[50])
{ int i=0,word=1;
    while(str[i]!='\0')
    { if(str[i]==' ')
        word++;
        i++;
    }
 return word;
}
int main()
{ char str[50];
     printf("enter a string: ");
     fgets(str,50,stdin);
  printf("total number of words is %d",wordcount(str));
 return 0;
}
