/*Write a function to compare two strings.*/
#include<stdio.h>
void strcomp(char str1[],char str2[])
{ int i,flag=0;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    { if(str1[i]!=str2[i])
      { flag=1;
         break;
       }
    }
    if(flag==1)
        printf("both strings are not equal");
    else
        printf("both strings are equal");
 return 0;
}
int main()
{ char str1[20],str2[20];
     printf("enter first string to compare: ");
      fgets(str1,20,stdin);
     printf("enter second string to compare: ");
      fgets(str2,20,stdin);
   strcomp(str1,str2);
 return 0;
}
