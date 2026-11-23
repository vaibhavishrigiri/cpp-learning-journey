#include <iostream>
using namespace std;

int main ()    {
    char ch;
    
    cout<<"Enter an alphabate : ";
    cin>>ch;
    
    if(ch>= 65 && ch<=97) {
        cout<<"Entered alphabate is in Uppercase";
    }    else {
        cout<<"Entered alphabate is in Lowercase";
    }
    return 0;
}
