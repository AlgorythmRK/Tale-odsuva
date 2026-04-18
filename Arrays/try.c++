#include <bits/stdc++.h>
using namespace std;

int lar_sec_lar(vector <int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    int sec_lar = arr[0];

    for (int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sec_lar=largest;
            largest = arr[i];
        }

        if(arr[i]>sec_lar && arr[i]!=largest)
        {
            sec_lar = arr[i];
        }
    }   

    cout << largest << endl << sec_lar << endl;
}

int small_sec_small(vector <int> &arr)
{
    int n= arr.size();
    int small = arr[0];
    int sec_small=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            sec_small=small;
            small=arr[i];
        }

        if(arr[i]<sec_small && arr[i]!=small)
        {
            sec_small=arr[i];
        }
    }

    cout << small << endl <<sec_small << endl;

}

bool sort_rotated(vector <int> &arr)
{
   int n = arr.size();
   int count = 0;
   for(int i = 0; i<n;i++)
   {
     
     if(arr[i]<(arr[i+1]%n))
     {
        count++;
     }
   }

   if (count <= 1)
   {
     cout << "true" << endl;
   }

   else{
    cout << "false";
   }
}


int main()
{
    vector <int> arr = {1,2,3,6,5};
    lar_sec_lar(arr);
    cout << endl;
    small_sec_small(arr);
    cout << endl;
    sort_rotated(arr);

    return 0;

}