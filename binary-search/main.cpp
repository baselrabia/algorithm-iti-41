#include <iostream>

using namespace std;

int bsearch(int arr[],int s, int key){
    int startarr =0;
    int endarr=s-1;
    int mid;

    while(startarr <= endarr){
        mid = (startarr+endarr)/2;
        if(arr[mid]==key){
            return mid;
        }else if(key > arr[mid]){
            startarr=mid+1;
        }else{
            endarr=mid-1;
        }
    }
    return -1;
}

 int binarySearch(string arr[],int s, string key)
    {
        int startarr =0;
        int endarr=s-1;
        int mid;

        while(startarr <= endarr){
            mid = (startarr+endarr)/2;

           if(arr[mid]==key){
                return mid;
            }else if(key > arr[mid]){
                startarr=mid+1;
            }else{
                endarr=mid-1;
            }
        }
        return -1;
    }


int main()
{
    cout << "Hello world!" << endl;
    int arr[8] ={1,2,3,4,5,6,7,8};
    string sarr[4] = { "boy", "cat", "dog", "school"};

    int x=bsearch(arr,8,3);
    int result = binarySearch(sarr,4,"cat");

    cout << "int result : "<<x << endl;
    cout << "string result : "<<result << endl;

    return 0;
}
