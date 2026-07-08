#include <iostream> 
#include <math.h> 
using namespace std; 
int main() 
{ 
    int num,dig=0,a,d,c,sum=0; 
    cout<<"Enter the value :"<<endl; 
    cin>>num; 

    d=num; 
    c=num; 

    while(d!=0) 
    { 
        dig++; 
        d=d/10; 
    } 

    while(num>0) 
    { 
        a=num%10; 
        sum+= pow(a,dig); 
        num=num/10; 
    } 
    if(sum==c) 
    { 
        cout<<"It is armstrong!!"; 
    } 
    else 
    { 
        cout<<"It is not armstrong!!"; 
    } 
    
    return 0; 
} 
