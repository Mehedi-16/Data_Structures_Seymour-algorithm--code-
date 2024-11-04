//binary search
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"N input: ";
cin>>n;
int arr[n];
cout<<"Input: ";
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}

int item;
cout<<"iitem ";
cin>>item;

int result=-1,low=0,high=n;

while (low<high)
{
   int mid=(low+high)/2;
   if (item==arr[mid])
   {
      result=mid;
      break;
   }
   if (item<arr[mid])
   {
      high=mid-1;
   }
   else
   {
      low=mid+1;
   }
   
}

if (result==-1)
{
   cout<<"not found";
}
else
{
   cout<<"Found ";
}



}