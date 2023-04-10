#include <iostream>

using namespace std;

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }

    cout << endl;
    cout <<"++++++++++++++"<< endl;
}

void insertSort(int *arr, int n){
    if(n > 1){
        int current = 1;
        while(current < n){
            int temp = arr[current];
            int step = current - 1;
            while (step >= 0 && temp < arr[step]){
                arr[step + 1] = arr[step];
                step = step - 1;
            }
            arr[step + 1] = temp;
            printArray(arr, n);
            current++;
        }
    }
}

int main(){
    
    int arr[5] = {5 , 4, 3, 2, 1};
    insertSort(arr, 5);

    return 0;

}