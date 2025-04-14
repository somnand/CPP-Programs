/**
 * Sorting : 
 * Selection Sort and Bubble Sort
 */
#include<iostream>
#include<vector>
using namespace std;

void selectionSortArray(int arr[],int n)
{
    int temp;

    for(int i=0;i<n-1;i++)//Not required to compare the last element
    {
        int min_idx=i;

        for(int j=i+1;j<n;j++)//Check till the last element
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx=j;
            }
        }
        //Swapping i and min_idx
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int a[] = {2,13,7,4,16,8};
    cout<<"Original array : "<<endl;
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";

    cout<<endl<<"Sorted array :"<<endl;    
    selectionSortArray(a,6);

    return 0;
}