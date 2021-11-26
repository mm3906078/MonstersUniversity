#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;


void test2(int &h1)
{
    h1 += 13;
    cout << h1 <<endl ;
}

int main() {
    int temp = 5;
    test2(temp) ;
    cout<<temp;       // 5
}
