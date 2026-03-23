#include <iostream>
using namespace std;
int main() {
    int num, i;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for(i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}
