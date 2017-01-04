// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Biased Chandan
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/biased-chandan/

#include <stdio.h>
int top =-1;

void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}

void push(int  stack[], int x, int n)
{
	if ( top == n-1)
		return;
	
	else 
		stack[++top]=x;
}
 
int pop(int stack[], int n)
{
	if(top==-1 || top ==0)
		return 0; 
	else
	{
		int element = stack[top];
		top --;
		return element;
	}
}
int main()
{
	int a,num,i,total=0;
	int maxSize =5000;
	int stack[maxSize];

	scan_int(&num);
	for(i = 0;i<num;i++)
	{
		scan_int(&a);
		
		if(a==0)
		{
		    total-= pop(stack,maxSize);
		}
		else
		{
		    total += a;
		    push(stack,a,maxSize);
		}
	}
   printf("%d",total);
    return 0;
}
