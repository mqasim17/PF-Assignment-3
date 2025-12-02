#include <iostream>
using namespace std;

int main() {

    int height , inche , reminch;
    cout<<"Enter Height in Inches: ";
    cin>>height;
    inche=height/12;
    reminch=inche%12;
    cout<<"Height is "<<inche<<" feet and "<<reminch<<" inches";

    return 0;
}