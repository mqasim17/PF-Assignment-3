#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 1;
    a = b++; //2
    cout << a << b;//2 1
    b = ++a; //3
    cout << a << b; //2 3 
    return 0;
}


// No, this code has no errors.
// It will run perfectly.

//Output
//1222