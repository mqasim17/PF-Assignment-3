#include <iostream>
using namespace std;

int main() {

    int n,max,min;
    int sum=0;
    cout<<"Enter 10 Numbers: ";
    cin>>n;
    max=n;
    min=n;
    sum=n;
    for(int i=1;i<=9;i++){
        cin>>n;
        sum=sum+n;
        if(max<n){
            max=n;
        }
        if(min>n){
            min=n;
        }
    }
    cout<<"Sum = "<<sum<<" Maximum = "<<max<<" Minimum = "<<min;

    return 0;
}