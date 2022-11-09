#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"number of element in array : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // linera search
    
    int s, count=0;
    cout<<"enter element you want top search : ";
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(a[i]==s)
        {
            cout<<a[i]<<"is found in array at index"<<i<<endl;
            count=1;
        }
    }
    if(count!=1)
    {
        cout<<s<<" is  not found in array"<<endl;
    }
    return 0;
}