#include <iostream>
using namespace std;

int main() {
    int asci;
    char name;
    cout << "Enter the Uppercase Charactor of Your name:\n";
    cin>>name;
    name=name+32;
    cout<<"Lowercase of that charactor:"<<name;
    return 0;
}