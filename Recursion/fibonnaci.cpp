#include <iostream>
using namespace std;

int fibonnaci(int num){
    //base case
    if(num == 0){
        cout << "0";
        return 0;
    }
    if(num == 1){
        cout << "1";
        return 1;
    }

    //RR
    return fibonnaci(num-1) + fibonnaci(num-2);
}

int main(){
    int num;
    cout << "Enter upto which number you want fibonacci serie's sum: ";
    cin >> num;
    int result = fibonnaci(num);
    cout << "SUM: " << result;
}