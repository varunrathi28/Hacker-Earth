// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Signal Range(Stacks)
// Link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/signal-range/
#include <stdio.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
void getRange(int height[], int n){
	int min_index=0,temp,i,j;
	printf("1 ");
	for(i=1; i<n; i++){
		if(height[i]>=height[i-1]){
			temp=i-min_index;
			j=min_index-1;
			while(j>=0 && height[i]>=height[j]){ temp++;j--; }
			printf("%d ",temp+1);
		}else{
			printf("1 ");
			min_index=i;
		}
	}
	printf("\n");
}
int main()
{
    int t,n,height[1000000],i,j;
    scan_int(&t);
    while(t--){
    	scan_int(&n);
    	for(i=0; i<n; i++)
    		scan_int(&height[i]);
    	getRange(height,n);
    }
    return 0;
}