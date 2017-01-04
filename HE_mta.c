// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Mark The Answer
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
#include <stdio.h>

void scan_int(int *x){
    register int c=getchar_unlocked();
    *x=0;
    for( ; (c<48 || c>57); c = getchar_unlocked());
    for( ; (c>47 && c<58); c = getchar_unlocked()) *x = (*x << 1) + (*x << 3) + c - 48;
}
int main()
{
    int n,i,score=0,maxScore=0;
    unsigned long questions[100000],level;
    int  canSkip =1;
    scan_int(&n);
    scan_int(&level);
   
    for(i=0;i<n;i++)
   {
       scan_int(&questions[i]);
       if(questions[i]<=level)
       {
           score++;
           maxScore = score>maxScore?score:maxScore;
       }
       else if(canSkip)
           canSkip= 0;
       else
   			break;
	}
   printf("%d",maxScore);
    return 0;
}
