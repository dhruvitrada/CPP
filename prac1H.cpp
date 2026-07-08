#include <iostream>
using namespace std;
int main() 
{
    int i,j,n,arr[20],temp;
    cout<<"Enter how many number to be printed :"<<endl;
    cin>>n;
    cout<<"Enter the values"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Executed array :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
