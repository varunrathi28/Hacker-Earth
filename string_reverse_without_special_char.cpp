// Program for reversing a string without changing the speical characters


#include<bits/stdc++.h>
using namespace std;

bool isAlphabet(char a)
{
    return ( a >= 'a' && a <= 'z' )||( a >= 'A' && a <= 'Z');
    
}

// void swap(char * a , char * b)
// {
//     char * temp= * a;
//     *a = * b;
//     *b = temp;
// }

void reverse(char arr[])
{
    int r = strlen(arr) - 1,l = 0;
    
    
    while(l<r)
    {
        if (!isAlphabet(arr[l]))
        {
            l++;
        }
        
        else if (!isAlphabet(arr[r]))
        {
            r--;
        }
        else
        {
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}


int main() {

    char str[] = "d!!!dddd.c.d,e'f,wwed";
    cout << "Input :"<<str << endl;
    reverse(str);
    cout << "Output :"<<str << endl;
    return 0;
}
