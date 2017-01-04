// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : bob and string(hash)
// Link : https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/
#include <stdio.h>
#include<string.h>
void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
 
int main() {
	int test,i;
	scan_int(&test);
	while(test--) {
	    char s[100001],t[100001];
	    int hash_s[26]={0},hash_t[26]={0},count=0;
	    scanf(" %s",s);scanf(" %s",t);
	    int len_s = strlen(s);
	    int len_t = strlen(t);
	    for(i=0;i<len_t;i++){   hash_t[t[i]	- 'a']++;    }
	    for(i=0;i<len_s;i++){   hash_s[s[i] - 'a']++;    }
	    for(i=0;i<26;i++) {
	    	if(hash_s[i]!=hash_t[i]) {	count+= abs(hash_s[i] - hash_t[i]);	}
	    }
		printf("%d\n",count);
	}
    return 0;
}
