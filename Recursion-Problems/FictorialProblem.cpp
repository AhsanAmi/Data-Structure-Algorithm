#include <iostream>
using namespace std;
int Fictorial(int n) {
    if (n <=1 ) {
        return 1;
    }
    return n * Fictorial(n - 1);
   
}
int main() {
    int n=Fictorial(5);
    cout << n;
    return 0;
}
