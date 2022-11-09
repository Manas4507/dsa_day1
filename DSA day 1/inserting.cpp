#include <iostream>
using namespace std;

int main()
{
    int n, in, i;
    cout<<"numbers of element in array : ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the index at which mnumber should be instered : ";
    cin>>in;
    n=n+1;
    for(i=n-2; i>=in; i--)
    {
        a[i+1]=a[i];
    }
    cout<<"enter the element you want to insert : ";
    cin>>a[in];
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}