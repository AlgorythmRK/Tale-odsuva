#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[5];
    cin >> array[0];
    int largest= array[0];
    int secondlargest= array[0];
    for(int i=0;i<=4;i++)

    {
        cin >> array[i];
        if(largest < array[i])
        {
            secondlargest=largest;
            largest=array[i];
           
        }

        if(array[i]!=largest && array[i]>secondlargest)
        {
            secondlargest=array[i];
        }
    }
   
    cout<<largest<<endl<<secondlargest<<endl;
    return 0;
}
