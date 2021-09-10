#include <bits/stdc++.h> 

#include <time.h>
using namespace std;

int main()
{
    int a[10] = {10,20,50,30,70,25,15,77,100,55};


    for(int i = 0 ; i < 9 ; i++)
    {
        for (int j = 0 ; j < 10-i-1; j++)
        {
            if(a[j] < a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "The Sorted List is " << endl;

    for(int i = 0 ; i<10 ; i++)
    {
        cout << a[i] << "  ";
    }


    int ticks = clock();

    cout << float(ticks)/CLOCKS_PER_SEC;


    return 0;
}