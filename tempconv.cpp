// Online C compiler to run C program online
#include <iostream>
using namespace std;

int main() {
    
        int t;
        //input
        cout<<"Enter temperature in  farenheit:";
       cin>>t;
        //logic
        int c=(t-32)/1.8;
        
        //print result
        cout<<"celcius temp = "<<c;
        
        
    
    return 0;
}
