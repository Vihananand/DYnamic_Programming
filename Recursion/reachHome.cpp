#include <iostream>
using namespace std;

void reachHome(int n){
    //Base Case
    if(n == 0){
        return;
    }
    //Recursive Realtion
    reachHome(n - 1);
    cout << "Step " << n << " taken.\n";
}

int main(){
    reachHome(10);
    cout << "Destination Reached!!";
} 