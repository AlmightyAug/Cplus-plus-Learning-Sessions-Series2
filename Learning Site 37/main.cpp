#include <iostream>

using namespace std;

int main()
{
    try{
        int parentsAge;
        int childAge;

        cout << "Enter in the Parent(s) age: " << endl;
        cin >> parentsAge;
        cout << endl << endl;

        cout << "Enter in the Child's age: " << endl;
        cin >> childAge;
        cout << endl << endl;

        if (childAge > parentsAge){
            throw 404;
        }
    }catch(int x){
        cout << "Son's age cannot be older than Parent(s) age. ERROR NUMBER: " << x << endl;
    }
}
