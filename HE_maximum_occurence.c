// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : maximum occurence (hash tables)
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
#include <stdio.h>
#include <string.h>
 
int main()
{
	char input[1000];
	int i,n;
	int hash[200]={0};
 
	gets(&input);
	n= strlen(input);
	int max =0;
	int index = -1;
	for(i=0;i<n;i++)
	{
		hash[input[i]]++;
		if(hash[input[i]] >= max)
		{
			if(max==hash[input[i]])
			{
				if(input[i]<index)
				{
					index = input[i];
				}
				
			}
			else
			{
			max = hash[input[i]];
			index = input[i];
			}
		}
	}
 
	printf("%c %d",index,max);
	
	
    
    return 0;
}
