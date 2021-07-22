#include<iostream>

#define size 6

using namespace std;

int LinearSearch(int arr[size],int Ele){
    for(int i=0;i<size;i++)
    {
        if(Ele==arr[i])
        {
            return i+1;
        }
    }
    return 0;
}

int main()
{
    cout<<"\t......Linear Search......"<<endl;
    int Ele,key;
    int arr[size]={65,78,23,90,122};
    cout<<"Array is:"<<endl;
    for(auto i: arr)
    {
        cout<<i<<"  ";
    }
    cout<<"\nEnter the Element to be Searched :";
    cin>>Ele;
    key=LinearSearch(arr,Ele);
    
    if(key!=0)
        cout<<Ele<<" is found at Position "<<key<<endl;
    else
        cout<<Ele <<" is not found"<<endl;
    
    return 0;
}