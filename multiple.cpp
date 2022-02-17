#include<bits/stdc++.h>
#define Stack_Size 50
typedef struct
{
        int top;
        int data[Stack_Size];
}SeqStackOne;
typedef struct
{
        char data;
        char data[Stack_Size];
}SeqStackTwo;
void compare(){
      int a,b,c;
      char d;
    if ( (c!='*') || (c!='/') )
    {
        d=a*c*b;
    }