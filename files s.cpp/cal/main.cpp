#include <iostream>

using namespace std;

int main()
{   char operation;
    float num1, num2, result;
    cout << "enter first number" << endl;
    cin>>num1;
    cout << "enter second number" << endl;
    cin>>num2;
    cout << "enter operation(+, -, *, /):" << endl;
    cin>>operation;

    switch(operation){
case'+':
     result=num1 + num2;
     break;
case'-':
    result=num1 - num2;
    break;
case '*':
    result=num1 * num2;
    break;
case '/':
    if (num2 !=0){
        result=num1 / num2;
    }
    else {
        cout<<"Eroor division by zero"<<endl;
    return 1;
    }
break;
default:
    cout<<"invalid operation"<<endl;
return 1;
}
 cout<< "result= "<< result<<endl;
    return 0;

}
