// Author : Varun Rathi (arrays->2d)
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Speed (Array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
#include <stdio.h>
#include <limits.h>

void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
	int test,output=1,i;
	
	scan_int(&test);
	while(test--)
	{
		output = 1;
		int n;
		 long cars[100000];
	scan_int(&n);
		for(i=0;i<n;i++)
		scan_int(&cars[i]);
		int max=cars[0];
		for(i=1;i<n;i++)
		{
			if(cars[i]>cars[i-1])
			{
				cars[i]=cars[i-1];
			}
			else
				output++;
		}
		
		printf("%d\n",output);	
	}
   
    return 0;
}
