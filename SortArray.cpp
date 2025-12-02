//Take array value from the user then sort them in ascending order
#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter the Array size: ";

    cin>>n;

    int arr[n];
    
    int temp;

    cout<<"Enter Values of Array Integers: ";

    for(int a=0;a<n;a++){

        cin>>arr[a];

    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
    {
        
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
       }
    }
    cout<<"The Value of Array : ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}
