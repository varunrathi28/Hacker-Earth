// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem :  Monk and Lucky Minimum
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-lucky-minimum-3/
#include <stdio.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
int test;
    scan_int(&test);
    while(test--)
    {
    	int n;
    	scan_int(&n);
    	long min=999999999,frequency=0;
    	while(n--)
    	{
    		long element;
    		scan_int(&element);
    		if(element<min)
    		{
    			min = element;
    			frequency = 1;
    		}
    		
    		else if(element == min)
    		{
    			frequency++;
    		}
    	}
    	
    	if(frequency%2==0)
    		printf("Unlucky\n");
    	else
    		printf("Lucky\n");
    }
    return 0;
}