#include <iostream>
using namespace std;
int main() {
    int m = 2;
    int n = 34;

    int prod = 0;
    for (int i = 0; i < n; ++i) {
        prod += m;
    }

    cout << "el producto es: " << prod << endl;
    return 0;
}
