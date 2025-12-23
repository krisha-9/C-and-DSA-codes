#include<iostream>
using namespace std;

int main() {
   int num[10]; //store 10 integers

   cout << "Enter the 10 integers: " << endl; // print statement
   for(int i = 0; i < 10; i++){
    cin >> num[i]; // take input
   }
   for(int i = 0; i < 10; i++){
    cout << "Display num: " << num[i] << endl; // display karvaya
   }
// to find max and min value
   int max = num[0]; // max and min ko intilize karvaya 0 se jis se hume max and min value mile
   int min = num[0];

   for(int i = 0; i < 10; i++) {
        if(num[i] > max){ // condition check kari
            max = num[i];
    }
        if(num[i] < min) {
            min =  num[i];
   }
   }

   // to fing avg of nums
   int sum = 0; // avg keh liye sum find karna hota he toh sum ko 0 se intialize karvya
   float avg; // avg decimal form me hoti he so we use float here
   for (int i = 0; i < 10; i++) {
    sum = sum + num[i];
    avg = sum / 10.0;
   }
   
   // count even and odd nums
   int even = 0;
   int odd = 0;
  
   for(int i = 0; i < 10; i++){
    if(num[i] % 2 == 0){
        even = even + 1;
        
    }
    if(num[i] % 2 != 0) {
        odd = odd + 1;
    }
   }
   
   // print all the outputs out of all loops
   cout << "max num: " << max << endl;
   cout << "min num: " << min << endl;
   cout << "sum : " << sum << endl;
   cout << "Avg: " << avg << endl;
   cout << "Even num: " << even << endl;
   cout << "Odd num: " << odd << endl;
   
  

}