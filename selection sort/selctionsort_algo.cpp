#include<iostream>
using namespace std;

int selection_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter: " << size << "Elements :" << endl;
    for(int i = 0; i < size; i++){
       cin >> arr[i];
    }
    selection_sort(arr, size);

    cout << "Array after selction sort: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "<< endl;
    }                                                 
    cout << endl;
    return 0;

}