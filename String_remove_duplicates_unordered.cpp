/* Function to remove duplicates in a sorted array */
#include<bits/stdc++.h>
using namespace std;
 


char * removeDupsFromArray(char *);
char * removeDups(char * str)
{
    int l = strlen(str);
    sort(str, str+ l);
    return removeDupsFromArray(str);
}

char * removeDupsFromArray(char * array)
{
    int curr_ind = 1, res_ind = 1;
    
    
    while (*(array + curr_ind))
    {
      if (*(array + curr_ind) != *(array + curr_ind - 1))
      {
          *(array + res_ind) = *(array + curr_ind);
          res_ind++;
      }
        
       curr_ind++ ; 
    }
    
    *(array + res_ind) = '\0';
    return array;
}
 
int main()
{
  char str[] = "Thisisateststring";
  cout << removeDups(str);
  return 0;
}