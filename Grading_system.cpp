#include <iostream>
using namespace std;

int main ()    {
    int score;
    
    cout<<"Enter your score : ";
    cin>>score;
    
    if(score>=90)    {
        cout<<"you have secured A grade!";
    } else if (score>=80 && score<90)    {
        cout<<"you have secured B grade!";
    } else {
        cout<<"you have secured C grade!";
    }
    return 0;
}
