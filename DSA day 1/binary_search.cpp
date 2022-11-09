#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int search){
    int s=0;
    int e=size;
    
    while(s<=e){
        int mid=(s+e)/2;

        if (arr[mid]==search){
            return mid;
        }

        else if(arr[mid]>search){
          e=mid-1;
        }

        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int size; cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
      cout<<"array is";
       for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int search; cout<<"enter element for search "; cin>>search;

    cout<<binarysearch(arr,size,search);
    
    return 0;
}