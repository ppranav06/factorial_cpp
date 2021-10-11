#include<iostream>
using namespace std;
int main(){
    int n;
    long double fact=1.0; 
    cout<<"Enter a positive integer: ";
    cin>>n;

    if(n<0) cout<<"Factorial isn't for negatives."<<endl;
    else {
    for(int i=1; i<=n; ++i) {
        fact *= i;
    }
    cout<<"Factorial = "<<fact<<endl;
    }
    return 0;
}