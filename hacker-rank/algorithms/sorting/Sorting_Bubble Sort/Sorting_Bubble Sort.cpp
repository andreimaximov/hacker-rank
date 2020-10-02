// Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
// Worst and Average Case Time Complexity: O(n^2). Worst case occurs when array is reverse sorted.

// Auxiliary Space: O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    int flag,p=0;
    for(int i=0;i<n-1;i++)
    {   flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
                p++;
            }
        }
        if(flag==0)
        {
            break;
        }
    }

    cout<<"Array is sorted in"<<" "<<p<<" "<<"swaps."<<endl;
    cout<<"First Element:"<<" "<<a[0]<<endl;
    cout<<"Last Element:"<<" "<<a[n-1]<<endl;
    
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    return 0;
}


// Input:
// 4
// 3 12 4 2
// Output:
// Array is sorted in 4 swaps.
// First Element: 2
// Last Element: 12
