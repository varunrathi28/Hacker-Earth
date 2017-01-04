// Author : Varun Rathi
// Github : https://github.com/varunrathi28/Hacker-Earth
// Problem : Monk and Power of Time (Array)
// Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/
#include <iostream>
#include <queue>
using namespace std;

int main() {
	
	int n;
	scanf("%d",&n);
	int i;
	int array[100000],order[100000];
	queue<int> input,final;
	int totaltime;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		input.push(x);
	}
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		final.push(x);
	}
	
	 totaltime = n;
	
	while(!input.empty()) {
		
		if(final.front()==input.front())
		{
			
			final.pop();
			input.pop();
		}
		else
		{
			int removed = input.front();
			input.pop();
			input.push(removed);
			totaltime++;
		}
		
	}
	
	printf("%d",totaltime);
	return 0;
}
