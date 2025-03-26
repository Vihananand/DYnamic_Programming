#include <iostream>
using namespace std;

int factorial(int n){
    //Base Case - This is the condition where we have to stop the program
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int result = factorial(5);
    cout << "Factorial: " << result;
}