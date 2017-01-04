// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem :Game of bots (Hash Tables) 
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/game-of-bots/
#include <stdio.h>

// Fast IO
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
 
int main()
{
    char s[2][1000000];
    int a[2],b[2],hash[2];
    int i,f,t;
    scan_int(&t);
    while(t--){
    	f=0;
    	scanf("%s %s",s[0],s[1]);
    	for(i=0;i<2;i++){
    		a[i]=0;
    		b[i]=0;
    		hash[i]=0;
    	}
    	for(i=0;s[0][i]!='\0';i++){
    		if(s[0][i]=='#')
    			hash[0]++;
    		else if(s[0][i]=='A')
    			a[0]++;
    		else
    			b[0]++;
    		
    		if(s[1][i]=='#')
    			hash[1]++;
    		else if(s[1][i]=='A')
    			a[1]++;
    		else
    			b[1]++;
    			
    		if(a[0]>a[1] || b[0]<b[1]){
    			f=1;
    			break;
    		}
    	}
    	if(a[0]==a[1] && b[0]==b[1] && hash[0]==hash[1] && f==0)
    		printf("Yes\n");
    	else
    		printf("No\n");
    }
    
    return 0;
}
