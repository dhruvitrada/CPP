#include <iostream> 
using namespace std; 
int main() 
{ 

    int num1,num2,op; 

    cout << "Enter two numbers :"<<endl; 
    cin>>num1>>num2; 
    
    cout<<"Enter the operation :\n 1.Addition \n 2. SUbtraction \n 3. Multiplication \n 4. Division\n"; 
    cin>>op; 

    if(op==1) 
    { 
        cout<<"Result is :"<<num1+num2; 
    } 
    else if(op==2) 
    { 
        cout<<"Result is :"<<num1-num2; 
    } 
    else if(op==3) 
    { 
        cout<<"Result is :"<<num1*num2; 
    } 
    else if(op==4) 
    { 
        if(num2!=0) 
        { 
        cout<<"Result is :"<<num1/num2; 
        } 
        else 
        { 
            cout<<"Not Defined!!"; 
        } 
    } 
    else 
    { 
        cout<<"Operation Invalid!!"; 
    } 

    return 0; 
} 
