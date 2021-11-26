#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;


int test2()  // Function with output
{
    int h1 = 12;
    h1 += 13;
    return h1;
}

void test() // Function without output
{
    cout << "hi";
}

int main() {
    int h1_resalt;
    test();                 // Call Function without output
    h1_resalt = test2() ;   // Call Function with output
}
