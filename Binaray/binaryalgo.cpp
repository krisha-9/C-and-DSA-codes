#include<iostream> //input output
using namespace std; // so we don't need to write std::cout or endl in every statement

int binary(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;  

    while(start <= end){ // loop is always start less than end
        if(arr[mid] == key){
                return mid;
        }

        //for right side
        if(key > arr[mid]){
            start = mid + 1;
        }
        else { // for left side
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int evenarray[6] ={1,2,3,4,5,6};
    int oddarray[7] = {3,4,5,6,78,89,90};

    int even_Index = binary(evenarray,6,4);

    cout << "Index of even array is : " << even_Index << endl;

    int odd_Index = binary(oddarray,7,98);

    cout << "Index of odd array: " << odd_Index << endl;
    return 0;

}