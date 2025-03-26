#include <iostream>
using namespace std;

int power(int num, int pow){
    //Base Case
    if(pow == 0){
        return 1;
    }
    // Recursive Relation
    return num * power(num, pow - 1);
}

int main(){
    int result = power(5, 4);
    cout << "Power: " << result;
}