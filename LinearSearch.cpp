#include<iostream>

using namespace std;

int main()
{
    cout<<"\t......Linear Search......\n"<<endl;
    int len,Ele,key;
    cout <<"Enter the length of the array :";
    cin>>len;
    int arr[len];
    cout <<"Enter "<<len<<" Elements :"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<"Enter "<<i<<"th element: ";
        cin>>arr[i];
    }
    cout<<"\nThe array is:"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<"\n\nEnter the Element to be Searched :";
    cin>>Ele;
    for(int i=0;i<len;i++)
    {
        if(Ele==arr[i])
        {
            key=i+1;
            break;
        }
    }
    if(key!=0)
        cout<<Ele<<" is found at Position "<<key<<endl;
    else
        cout<<Ele <<" is not found"<<endl;
    
    return 0;

}