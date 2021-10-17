#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    int n = 5;
    for (int i = 0,y = 0; i < n ; i++,y+=5) {
        cout<<"N: "<<n<<endl;
        cout<<"I: "<<i<<endl;
        cout<<"Y: "<<y<<endl;
    }
}
