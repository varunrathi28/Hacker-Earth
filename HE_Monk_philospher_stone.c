// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Monk And The Philosopher Stone (Stacks)
// Link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-philosophers-stone/

#include <stdio.h>
#include <string.h>
int top = -1;
//Fast IO
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
	if(top==-1)
		return; 
	else 
	{
	    int element= stack[top];
		top --;
		return element;
	}
}
 
int main()
{
    int maxSize =10000;
    int n,coins[maxSize],q,i;
    
    long x;
    int counter =0;
    int monk[maxSize];
    scan_int(&n);
    for(i=0;i<n;i++)
        scan_int(&coins[i]);

    scan_int(&q);
    scanf("%ld",&x);
    long sum = 0;
    while(q--)
    {
        char input[10];
        scanf(" %s",input);
        
        if(strcmp(input,"Harry")==0)
        {
            int element = coins[counter++];
            push(monk,element,maxSize);
            sum+= element;
        }
        else
        {
           int removedCoin= pop(monk,maxSize);
           sum-= removedCoin;
        }
        
        if(sum==x)
        	break;
    }
    
   if(sum==x)
        printf("%d\n",top+1);
    else
        printf("-1\n");
    
}
