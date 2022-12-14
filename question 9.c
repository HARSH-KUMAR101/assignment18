/*Write a function to reverse a string word wise.*/
#include<stdio.h>
void reverse(char* begin,char* end)
{ char temp;
    while(begin<end)
    { temp=*begin;
      *begin++ = *end;
        *end-- = temp;
    }
}
void reversewords(char*s)
{ char* word_begin=s;
  char* temp=s;
    while(*temp)
    { temp++;
       if(*temp=='\0')
          reverse(word_begin,temp-1);
       else if(*temp == ' ')
       { reverse(word_begin,temp-1);
           word_begin=temp+1;
       }
    }
    reverse(s,temp-1);
}
int main()
{  char s[100];
   char* temp=s;
  int l;
     printf("enter a string: ");
     fgets(s,50,stdin);
     l=strlen(s);
     s[l-1]='\0';
    reversewords(s);
    printf("%s",s);
  return 0;
}
