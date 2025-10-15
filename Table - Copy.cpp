#include <iostream>
using namespace std;

int main() {
    int num, tab;
    cout << "Enter Number for table :" << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        tab = num * i;
        cout << num << " * " << i << " = " << tab << endl;
    }
    return 0;
}

//Masood Akhtar
//Hammad code is here