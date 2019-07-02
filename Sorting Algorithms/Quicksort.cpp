#include <iostream>
using namespace std;

void quicksort(int *arr, int start, int end)
{
        /*follows Divide and Conquer ...selects a pivot (lets say
        here ,it is the end element in the array)..then the algorithm
        takes all smaller elements and puts it before the pivot 
        while the larger elements are put after the pivot..after this 
        quicksort is called recursively for each parts.This takes O(n.lgn)*/
        if (start >= end)
                return; //base case..sorted

        //recursive cases

        int index = end;
        int pivot = arr[end];
        int i = start;

        while (i < index)
        {
                if (arr[i] > pivot)
                {
                        int key = arr[i];
                        for (int j = i + 1; j <= end; j++)
                        {
                                arr[j - 1] = arr[j];
                        }
                        arr[end] =key;
                        index -= 1;
                        i = start;
                }
                else
                        i++;
        }
        quicksort(arr, start, index - 1);
        quicksort(arr, index + 1, end);
}

int main()
{
        int arr[] = {7, 6, 1, 5, 4};
        quicksort(arr, 0, 4);
        for (int i : arr)
        {
                cout << i << " ";
        }
}