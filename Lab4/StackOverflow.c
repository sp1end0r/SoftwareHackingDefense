#include<stdio.h>
  
void fun(int x)
{
    if (x == 1)
       return;
    x = 6;
    fun(x);
}
  
int main()
{
   int x = 5;
   fun(x);
}
