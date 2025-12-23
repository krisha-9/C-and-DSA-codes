#include<iostream>
#include <string>
using namespace std;

int main(){
    string Str;
    cout << "Enter the value of string: " << Str << endl;
    cin >> Str;
    int length = Str.length(); // length isliye li ki hum loop ko length keh jitna itterate kar paye
    
    int vowels = 0; // vowels ko 0 se instilise isliye kiya kyunki hume vowels badhane the
    int consonants = 0;//conso ko 0 se instilise isliye kiya kyunki hume conso badhane the

    for(int i = 0; i < length; i++ ){ //mistake i < lenth aayega kyunki Str[i] will access out of bounds when i == length, because string indices go from 0 to length - 1.

        char ch = Str[i];

        if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u'  || ch == 'A'|| ch == 'E' || ch == 'I' || ch =='O' || ch == 'U' ){
            vowels = vowels + 1;
        }
        else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
         consonants = consonants + 1;
        }
        else{
            cout << "other" << ch << endl;
        }
    }

    cout << "No of vowels: " << vowels << endl;
    cout << "No of consonants: " << consonants << endl;
}