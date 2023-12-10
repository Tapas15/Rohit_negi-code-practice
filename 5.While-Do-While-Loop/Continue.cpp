#include<iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    }

    return 0;
}
