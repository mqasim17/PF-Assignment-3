#include <iostream>
using namespace std;

int main() {

    int n1,n2;
    cout<<"Enter 1 Number: ";
    cin>>n1;
    cout<<"Enter 2 Number: ";
    cin>>n2;
    if(n1%n2==0)
    cout<<n1<<" is Multiple of "<<n2;
    else
    cout<<n1<<" is not the Multiple of "<<n2;
    return 0;
}