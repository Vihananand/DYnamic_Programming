#include <iostream>
using namespace std;

void sayDigits(int num, string arr[]){
    //Base Case
    if(num == 0){
        return;
    }

    //Preprocessing
    int digit = num % 10;
    num = num / 10;

    //RR
    sayDigits(num, arr);
    
    cout << arr[digit] << " ";
}

int main(){
    int num;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout << "Enter the number: ";
    cin >> num;

    sayDigits(num, arr);
}