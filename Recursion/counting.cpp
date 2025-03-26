#include <iostream>
using namespace std;

void count(int num){
    //Base Case
    if(num == 0){
        return;
    }
    //Recursive Relation
    count(num - 1);
    cout << num << "\n";
}

int main(){
    int num;
    cout << "Enter the number till where you want to count: ";
    cin >> num;
    count(num);
}