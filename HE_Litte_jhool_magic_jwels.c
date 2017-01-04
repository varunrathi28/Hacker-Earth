// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Little Jhool & magic jewels (hash tables)
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/

// FAST IO
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}

#include <stdio.h>
#include<string.h>
int main()
{
    int test;
    scan_int(&test);
    while(test--)
    {
    	char input[100];
    	int hash[4]={0},i;
    	scanf("%s",input);
    	int length = strlen(input);
    	for(i=0;i<length;i++)
    	{
    		switch(input[i])
    		{
    			case 114:
    			{
    			
    				hash[0]++;
    			}
    			break;
    			case 117:
    			{
    			
    				hash[1]++;	
    			}
    			break;
    			case 121:
    			{
    				
    				hash[2]++;
    			}
    			break;
    			case 98:
    			{
    
    				hash[3]++;	
    			}
    			break;
    			default:
    			break;
    			
    		}
    		
    		
    	}
    	int j,min;
    	min=hash[0];
    	for(j=1;j<4;j++)
    		{
    			if(min>hash[j])
    			{
    					min=hash[j];
    			}
    		}
    		
    	printf("%d\n",min);
    }
    return 0;
}
