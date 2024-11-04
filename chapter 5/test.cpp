//Binary search

#include<iostream>
using namespace std;
int main()
{

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int l=0,h=4;
    int item=2;
    int result=-1;
    while (l<=h)
    {
        int m=(l+h)/2;

        if (item==arr[m])
        {
            result=m;
            break;
        }
        if (item<arr[m])
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }

    if (result==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found";
    }
    
}