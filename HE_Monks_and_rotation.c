// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Monk and Rotation (Array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/
#include <stdio.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
	int array[100000],result[100000];
	int test,i=0;
	
	scanf("%d",&test);
	while(test--)
	{
		int n;
		long k;
		scan_int(&n);
		scan_int(&k);
		k = k%n;
		for(i=0; i<n;i++)
		{
		scan_int(&array[i]);
		}
	
		int j;
		for (j=0;j<k;j++)
			{
				result[j]=array[n-k+j];
			}
			
		for (j=k;j<n;j++)
			{
				result[j]=array[j-k]; 
			}

	for(i=0;i<n;i++)
	{
		printf("%d ",result[i]);
	}
	printf("\n");	
		
	}

    return 0;
}
