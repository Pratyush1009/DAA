#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"INPUT TEST CASE : ";
    cin>>t;
    while(t--)
    {
        int n,key,i;
        cout<<"\nINPUT ARRAY SIZE : ";
        cin>>n;
        unsigned int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        cout<<"\nINPUT  KEY ELEMENT : ";
        cin>>key;
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                cout<<"\nKEY FOUND!!!";
                cout<<"\nTOTAL COMPARISION : "<<i+1;
                break;
            }
        }
        if(i==n)
        {
            cout<<"\n\nKEY NOT FOUND!!!";
        }
    }
    return 0;
}
