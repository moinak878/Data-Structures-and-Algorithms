//F6 to compile run
#include <iostream>
using namespace std;

void InsertionSort(int *A, int size)
{
    int j = 1, i = 0, key;

    key = A[j];
    for (j = 1; j < size; j++)
    {
        key = A[j];
        for (i = j - 1; i >= 0; i--)
        {
            if (A[i] > key)
            {
                A[i + 1] = A[i];
            }
        }
        A[i + 1] = key;
    }
}

int main(void)
{
    int A[] = {5, 4, 3, 2, 1};
    InsertionSort(A, 5);
    for (int i : A)
        cout << i << "";
}
