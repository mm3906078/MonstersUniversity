#include<iostream>
using namespace std;

void jam(int num1,int num2){
    cout<< num1+num2;
}

void kam(int num1,int num2){
    cout<< num1-num2;
}

int main() {
    char func;
    cin>>func;
    int num1,num2;
    cin>>num1;
    cin>>num2;
    if (func == '+'){
        jam(num1,num2);
    } else if (func == '-'){
        kam(num2,num1);
    }
}
