#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;     // left side-এর শুরু ইন্ডেক্স
    int j = m + 1; // right side-এর শুরু ইন্ডেক্স
    int k = l;     // temp-এর শুরু ইন্ডেক্স

    int temp[5]; // temp অ্যারে সাইজ ধরে রাখা হয়েছে

    // মেন্জ প্রক্রিয়া
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i]; // arr[i] ছোট হলে temp-তে বসানো হবে
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j]; // arr[j] ছোট হলে temp-তে বসানো হবে
            j++;
            k++;
        }
    }

    // বাকি উপাদানগুলো কপি করা
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // temp-এর উপাদানগুলো আসল arr অ্যারেতে কপি করা
    for (int s = l; s <= r; s++)
    {
        arr[s] = temp[s];
    }
}

void MergeShort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        MergeShort(arr, l, m);
        MergeShort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int myarr[5];

    cout << "Enter elements of array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }

    MergeShort(myarr, 0, 4);

    cout << "After Merge Sort: ";

    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
}
