#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}


int main(){
    int a, b;
    int sum;

    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    sum = add(a, b);
    cout<<"sum:"<<sum<<endl;


    return 0;
}
