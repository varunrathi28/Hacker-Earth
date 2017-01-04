// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : All vowels (hash tables)
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/all-vowels-2/
#include <stdio.h>

int main()
{
	int n,i;
	int hash[5]={0};
	char input[10000];
	scanf("%d",&n);
	scanf(" %s",input);
	
	for(i=0;i<n;i++)
	{
		if(input[i]=='a')
			hash[0]++;
		if(input[i]=='e')
			hash[1]++;
		if(input[i]=='i')
			hash[2]++;
		if(input[i]=='o')
			hash[3]++;
		if(input[i]=='u')
			hash[4]++;
	}
	int product=1;
	for(i=0;i<5;i++)
	{
		product *=hash[i];
	}
	
	if(product==0)
		printf("NO");
	else
		printf("YES");

    return 0;
}
