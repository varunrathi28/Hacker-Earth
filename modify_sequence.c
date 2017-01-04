//Author : Varun Rathi 
//Github : https://github.com/varunrathi28/Hacker-Earth
//Problem :Modify Sequence : Arrays->2d-
//Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/modify-sequence/
#include <stdio.h>

void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
	int n,i=0;
	int a[10000];
	
	scan_int(&n);
	
	for(i=0;i<n;i++)	
		scan_int(&a[i]);
		
	int diff = a[0];
	
	for(i=1;i<n;i++)
	{
		a[i] -= diff;
		if(a[i]<0)
		{
			printf("NO\n");
			return 0;
		}
		
		diff  = a[i];
	}
		
	
	
	if (diff==0)
	{
		printf("YES\n");
	}
	
	else
	{
		printf("NO\n");
	}

    return 0;
}
