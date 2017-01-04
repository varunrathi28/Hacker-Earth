// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem :The football fest (Stacks) 
// Link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/the-football-fest-6/
#include <stdio.h>
int top = -1;
int flag = 0;

// Fast IO
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
void push(long  stack[], int x, int n)
{
	if ( top == n-1)
		return;
	
	else 
		stack[++top]=x;
}
 
void pop(long stack[])
{
	if(top==-1)
		return; 
	else
	{
		top --;
	}
}
 
int main()
{
   int num,test,i;
   long stack[1000000];
   
   scan_int(&test);
   while(test--)
   {
       long currPass, currPasser;
       
       scan_int(&num);
       scanf("%ld",&currPass);
       for(i=0;i<num;i++)
       {
           char type;
           long pid;
           scanf(" %c",&type);
         
           
           if(type== 'P'|| type == 'p')
           {
               scanf("%ld",&pid);
               if(flag ==1)
               {
               	flag = 0;
               	if(currPass !=  stack[top])
               	{
               		push(stack,currPass,1000000);
               	}
               	
               }
               
               push(stack,pid,1000000);
               currPass = pid;
               currPasser = -1;
           }
           else if(type == 'B')
           {
               if(currPasser == -1)
               {
               	flag = 0;
               		currPasser = stack[top];	
                   pop(stack);
                   currPass =  stack[top];
               }
               else
               {
               		flag = 1;
                   long temp= currPasser;
                   currPasser = currPass;
                   currPass = temp;
           
               }
               
               
           }
           
       }
       printf("Player %ld\n",currPass);
       
   }
    return 0;
}
