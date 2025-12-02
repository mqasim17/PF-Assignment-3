#include <iostream>
using namespace std;
int main(){
    cout << "enter values";
    int a, b, res;
    cin >> a; cin >> b;
    a = 20; b = -10;
    a + b = res;
    cout << "res = " << res;
    return 0;
}


// a + b = res; is wrong
// You can’t put a value on the left side of = like that.
// This line causes a compilation error.