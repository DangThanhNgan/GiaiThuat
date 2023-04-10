#include <iostream>

using namespace std;


// Trao đổi 2 vị trí cho nhau
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// in mảng
void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "++++++" << endl;
}

void selectionSort(int *arr, int n){
    int current = 0;
    while(current < n - 1){
        int smallest = current;
        int walker = current + 1;
        while(walker < n){
            if(arr[walker] < arr[smallest]){
                smallest = walker;
            }
            walker++;
        }
        swap(arr[current], arr[smallest]);
        printArray(arr, n);
        current++;
    }
}

int main(){
   
    int arr[5] = {5 , 4, 3, 2, 1};
    selectionSort(arr, 5);

    return 0;

}