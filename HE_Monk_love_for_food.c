// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem :  Monk's love for food
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/
#include <stdio.h>

void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int top = -1;
void push(int  stack[], int x, int n)
{
	if ( top == n-1)
		return;
	
	else 
		stack[++top]=x;
}
 
void pop(int stack[], int n)
{
	if(top==-1)
		printf("No Food\n"); 
	else
	{
		long element = stack[top];
		printf("%ld\n",element);
		top --;
	}
}
int main()
{
    int maxSize = 10000;
    long stack[maxSize];
    int q,i;
    scan_int(&q);
    while(q--)
    {
        int a;
        long cost;
        
        scan_int(&a);
        if(a==2)
        {
            scan_int(&cost);
            push(stack,cost,maxSize);
        }
        else
        {
            pop(stack,maxSize);
        }
        
    }

    return 0;
}
