#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort(int arr[], int s){

    int key ;

    for (int i = 1; i < s; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }

     }
}

void pArray(int arr[], int s)
{
    for (int i=0; i < s; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    cout << "Hello world!" << endl;

    int arr[8] = {10, 30, 20, 40, 12, 22, 110, 90};
    cout <<" Before sort" << endl;

    pArray(arr,8);
    insertionSort(arr, 8);

    cout <<" After sort" << endl;
    pArray(arr,8);

    return 0;
}
