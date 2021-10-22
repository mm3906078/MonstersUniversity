#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    int z = 0;
    while (true) {
        cout << str[z] << endl;
        if (str[z + 1] == '\0') {
            break;
        }
        z++;
    }
}
