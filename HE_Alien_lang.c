// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Alien Language (hash Tables)
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/alien-language/
#include <stdio.h>
#include<string.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}

int main()
{
	int test,i;
	scan_int(&test);
	while(test--)
	{
		char text[100001],pattern[100001];
		scanf("%s", text);
		scanf("%s", pattern);
		int flag=0;
		for(i=0; i<strlen(pattern);i++)
		{
			char * returnVal = strchr(text,pattern[i]);
			if(returnVal){
				flag =1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}
