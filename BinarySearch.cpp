#include<iostream>

using namespace std;

#define size 6

int BinarySearch(int arr[],int start,int end,int ele)
{
    if(start<=end)
    {
        int mid;
        mid = (start + end)/2;
        if (arr[mid]==ele)
        {
            return mid + 1;
        }
        else if(arr[mid]<ele)
        {
            return BinarySearch(arr,mid+1,end,ele);
        }
        else if(arr[mid]>ele)
        {
            return BinarySearch(arr,start,mid-1,ele);
        }
    }
    return -1;
}

int main()
{
    cout<<"\t......Binary Search......\n"<<endl;
    int Ele,key;
    int arr[size]={12,33,89,98,120,234};
    cout<<"The array is:"<<endl;
    for(int i: arr)
    {
        cout<<i<<"  ";
    }
    cout<<"\n\nEnter the Element to be Searched :";
    cin>>Ele;
    key = BinarySearch(arr,0,size-1,Ele);    
    if(key!=-1)
        cout<<Ele<<" is found at position "<<key<<endl;
    else
        cout<<Ele <<" is not found"<<endl;
    
    return 0;
}