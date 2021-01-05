#include <iostream>
#include <cstring>
using namespace std;

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleString(char arr[][100], int s)
{
        char temp[100];


    // Sorting strings using bubble sort
    for (int j=0; j<s-1; j++)
    {
        for (int i=j+1; i<s; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                //swapString(&arr[j], &arr[i]);
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

void bubbleSort(int arr[], int s)
{

    for (int i=0; i< s-1; i++){

        for (int j=0; j< s-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
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
void testint(){
    int arr[8] = {10, 34, 25, 40, 12, 22, 11, 90};
     cout <<" Before sort" << endl;

    pArray(arr,8);
    bubbleSort(arr, 8);

    cout <<" After sort" << endl;
    pArray(arr,8);

}


int main()
{
    cout << "Hello world!" << endl;

  //  testint();

    char arr[5][100] = {"abc","zoy","dca","dba","try"};

    bubbleString(arr,5);

    cout <<" After String sort" << endl;
    for (int i=0; i < 5; i++){
        cout << arr[i] << ", ";
    }

    return 0;
}
