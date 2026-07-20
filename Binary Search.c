#include <stdio.h>
int binarySearch(int arr[], int i, int r, int x)
{
    while(i <=r)
    {

        //calculate mid point
        int m = i + (r-i)/2;

        //check if x is present at mid
        if(arr[m] == x)
            return m;

        // if x is greater, ignore left half
        if(arr[m] <x)
        {
            i = m+1;
        }

        // if x is smaller, ignore right half
        else
        {
           r = m-1;
        }
    }
    return -1;
}

int main(void)
{
    //creating sorted array
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr)/sizeof(arr[0]);

    //Element to be searched
    int x = 60;

    //Calling binary search function
    int result = binarySearch(arr, 0, size-1, x);

    if(result == -1)
    {
        printf("Element is not present in array");
    }

    else
    {
        printf("Element is present at index %d", result);
    }
    
    return 0;
}