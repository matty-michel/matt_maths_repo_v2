#include <iostream>
using namespace std;

void power(int base, int power) {
    int result = base;
    
    for (int i = 1; i < power; i++) {
        result = result * base;
    }
    
    cout << result << endl;
}

//---

int main() {
    
    power(4, 2);
    power(5, 3);
    power(10, 5);
    power(6, 10);
    power(10, 8);

    return 0;
}
