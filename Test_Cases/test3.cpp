//CC4 test case
//expected result: CC1 3 CC4 2
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if(a == 1 && b == 1){
        cout << "a = " << a << "b = " << b;

    }

    if(a == 1){
        if(b == 1){
             cout << "a = " << a << "b = " << b;
        }

    }
    return 0;
}
