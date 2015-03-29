//CC4 test case
//expected result: CC1 3 CC4 1
#include <iostream>
using namespace std;

int main()
{
    bool signal = false;

    if(flag==true){
        cout<<"signal = " << signal;
    }

    if(flag){
        cout<<"signal = " << signal;
    }

    if(flag == true){
        cout<<"signal = " << signal;
    }


    if(flag==true){
        cout<<"signal = " << signal;
    }

    if(flag == 1){
        cout<<"signal = " << signal;
    }
    return 0;
}
