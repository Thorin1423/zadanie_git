#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) 
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Liczba jest ujemna" << endl;
        return 0; 
    }

    cout << n << " " << fibo(n) << endl;
    return 0;
}