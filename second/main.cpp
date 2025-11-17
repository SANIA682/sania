#include <iostream>

using namespace std;

int main()
{
    int  totalseconds;
    cout << "enter total seconds:";
    cin >> totalseconds;


int hours=totalseconds/3600;
int minutes=(totalseconds%3600)/60;
int seconds=totalseconds%60;

cout <<hours <<"hours," << minutes <<"minutes," << seconds<<  "seconds."<<endl;
return 0;
}
