#include <iostream>
#include <string.h>
using namespace std;


void merge(int input[], int start, int mid, int end){
    int size = (end - start + 1);
    int *arr = new int[size];
    int i = start;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= end){
        if(input[i] <= input[j]){
            arr[k] = input[i];
            i++;
        }else if(input[i] > input[j]){
            arr[k] = input[j];
            j++;
        }
        k++;
    }

    while( i <= mid){
        arr[k] = input[i];
        i++;
        k++;
    }

    while( j <= end){
        arr[k] = input[j];
        j++;
        k++;
    }
    
    int m = 0;

    for(int i = start; i <= end; i++){
        input[i] = arr[m];
        m++;
    }
    delete arr[];
}

void mergeSort(int input[], int start, int end){
    if(start >= end){  // There is only one or 0 element in array
        return;
    }

    int mid = (start+end)/2;
    mergeSort(input,start,mid);
    mergeSort(input,mid+1,end);
    merge(input,start,mid,end);
}

void mergeSort(int input[], int size){
    if(size == 0 || size == 1){
        return;
    }
    mergeSort(input, 0, size-1);
}

int main(){
    int input[10000], n = 0;
    cout << "Enter Size : " ;
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    mergeSort(input, n);

    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
    return 0;
}