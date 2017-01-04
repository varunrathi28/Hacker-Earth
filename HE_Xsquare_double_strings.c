// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Xsquare and double strings
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
#include <stdio.h>
#include<string.h>
 
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int hash[26]={0},i;
		char input[101];
		scanf("%s",input);
		int length = strlen(input);
		
		int flag =0 ;
		for(i=0;i<length;i++)
		{
			int index = input[i]-'a';
			hash[index]++;
			if(hash[index]>1)
			{
				flag=1;
				break;
			}
			
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	
		
	}
    return 0;
}
