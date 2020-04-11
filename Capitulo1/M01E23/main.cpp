#include <iostream>
using namespace std;
int main() {
    int m = 15;
    for (int i = 1, count = 0; count < m; ++i) {
        int val = 3 * i;
        if (val % 5 == 0)
            continue;
        count++;
        cout << val << endl;
    }
    return 0;
}
