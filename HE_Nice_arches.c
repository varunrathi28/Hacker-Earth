// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Nice Arches (DS->Array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/nice-arches-1/
#include <stdio.h>
#include <string.h>

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
		return; 
	else 
		top --;
}
 
int main()
{
	int stack[100000],num,i=0,total =0;;
	const int maxSize =100000;
	scan_int(&num);
	
	while(num--)
	{
		char input[100000];
		scanf("%s",input);
		int length = strlen(input);
		top = -1;
		for (i=0;i<length;i++)
		{
			if (input[i]==stack[top])
					pop(stack,maxSize);
			else
					push(stack,input[i],maxSize);
		}
		if (top==-1)
			total++;
	}
	
  printf("%d",total);
    return 0;
}
