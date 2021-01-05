#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int s)
{
    int mins=0;


    for (int i = 0; i < s-1; i++)
    {
        mins = i;
        for (int j = i+1; j < s; j++){
            if (arr[j] < arr[mins]){
                 mins = j;
            }
        }
        swap(&arr[mins], &arr[i]);
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
    selectionSort(arr, 8);

    cout <<" After sort" << endl;
    pArray(arr,8);

    return 0;
}
