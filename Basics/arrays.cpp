#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[5];
    cin >> array[0] >> array[1] >> array[2]; 
    cout << "The output for the input is " << array[0] << array[1] << array[2] << endl;
   array[1]+=20;
   cout << array[1];
   int array2[3][5];
   array2[3][1]=2;
   cout << array2[3][1];

    return 0;
}

/*array is stored in a contigius memory location
The first elemnent is stored at the base address and
the next element is stored at the next memory location and so on*/

//Data type should be same for all elements