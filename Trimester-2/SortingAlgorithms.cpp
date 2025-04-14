#include<iostream>
#include<vector>

using namespace std;

int hitcount=0;
/**
 * This works on the principle of Bubbling up the greater element just ilke a bubble rises up when water is Boiled. 
 * Stability : True
 * In-Place : True
 */
void bubbleSort(int arr[],int n)
{    
    for(int i=0;i<n-1;i++)//Since j is compared with j+1 
    {
        for(int j=0;j<n-i-1;j++)//Here the last i elements are already Bubbled up and sorted, which are towards the end
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                hitcount++;
            }
                
        }
    }
}

/**
 * This is the oposite of BubbleSort.
 * Works on the principle of dividing the array into Sorted and Unsorted parts. 
 * Then find out the smallest and add it to the end of the sorted part. 
 * Stability : 
 * In-Place : True
 */
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIdx=i;
        //Scanning for a smaller value than a[minIdx]. Here the sorted part is till i and unsorted is i+1 to n-1
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIdx])
            {
                minIdx=j;//Marking the smallest Index
                hitcount++;                
            }
        }
        swap(a[i],a[minIdx]);        
    }
}

/**
 * This works in the same way, we sort a pack of cards. 
 */
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int curr = i;
        int prev=i-1;

        while(arr[prev]>curr && prev>=0)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
    cout<<"Hits : "<<hitcount<<endl;
}

class DivideAndConquerSorting
{
    public:
    // Function to partition the array and return the pivot index
    int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;        // Index of smaller element
    
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;  // Increment index of smaller element
            std::swap(arr[i], arr[j]);
            hitcount++;
        }
    }
    std::swap(arr[i + 1], arr[high]);
    hitcount++;
    return i + 1;  // Return the pivot index
}

// The main QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        printArray(arr,5);
        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);
        
        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        }
    }
};


int main()
{
    //Bubble Sort
    int a[] = {5,4,3,2,1};
    cout<<"Original Array : ";
    printArray(a,5);
    bubbleSort(a,5);
    cout<<"Sorted Array(Bubble) : ";
    printArray(a,5);

    //Selection Sort
    int b[] = {5,4,3,2,1};
    hitcount=0;
    cout<<"Original Array : ";
    printArray(b,5);
    selectionSort(b,5);
    cout<<"Sorted Array(Selection) : ";
    printArray(b,5);

    //Insertion Sort
    int c[] = {5,4,3,2,1};
    hitcount=0;
    cout<<"Original Array : ";
    printArray(c,5);
    selectionSort(c,5);
    cout<<"Sorted Array(Insertion) : ";
    printArray(c,5);

    DivideAndConquerSorting daqs;
    
    //Quick Sort
    int d[] = {5,4,3,2,1};
    hitcount=0;
    cout<<"Original Array : ";
    printArray(d,5);
    daqs.quickSort(d,0,5);
    cout<<"Sorted Array(Quick Sort) : ";
    printArray(c,5);

    return 0;
}

