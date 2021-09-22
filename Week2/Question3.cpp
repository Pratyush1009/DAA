#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i,j,count=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(fabs(arr[j]-arr[i])==key)
                {
                        count++;
                }
            }
        }
        if(count==0)
            cout<<"No Pair Found"<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
