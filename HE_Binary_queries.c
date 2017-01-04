// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Binary Queries (Array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/

#include <stdio.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
    long array[1000000];
    long n,i,q;
    scan_int(&n);
	 scan_int(&q);    
   
    for(i=0;i<n;i++)
    {
    	scan_int(&array[i]);
    }
    
    while(q--){
    	int type;
    scan_int(&type);
    	
    	if(type==0)
    	{
    		long l,r;
    		scan_int(&l);
    		scan_int(&r);
    		
    		if(array[r-1]%2==0)
    		{
    			printf("EVEN\n");	
    		}
    		else
    		{
    			printf("ODD\n");
    		}
    		
    	}
    	else if(type == 1)
    	{
    		long x;
    		scan_int(&x);
    		array[x-1] = (array[x-1] +1) %2;
    	}

    }
    return 0;
}
