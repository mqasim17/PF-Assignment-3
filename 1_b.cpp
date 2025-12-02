#include <iostream>
using namespace std;
int main(){
    int num1 = 5, num2 = 10;
    if(num1 < num2)
        cout << "num1 is smallest";
        num1 = num2;
    else
        cout << "num2 is smallest";
    return 0;
}

// The if has no {} so the code doesn’t work the way it looks.

// Because of no braces, the else gives an error since it doesn’t know what it belongs to.

// The line num1 = num2; is placed weirdly and messes up the if-else.