// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Monk and the welcome  (array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/

#include <stdio.h>


inline int read_int()
{
	int ret = 0;
	int c = getchar_unlocked();

	while(c<'0' || c>'9')
		c = getchar_unlocked();
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}


int main()
{
	long a[100000];
	long n,i;
	 n = read_int();
	
	for (i=0 ;i<n;i++)
	{
		a[i] = read_int();
	}
	
	for (i=0 ; i<n ;i++)
	{
		long aa;
		aa = read_int();
		a[i]+=aa;
	}
	
	for(i=0;i<n;i++)
		printf("%ld ",a[i]);
    
    return 0;
}