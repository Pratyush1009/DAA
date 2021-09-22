#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,shift,comp,flag=0;
        shift=comp=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0&&key<arr[j])
            {
                comp++;
                shift++;
                flag = 1;
                arr[j+1]=arr[j];
                j--;
            }
            if(j!=-1)
                comp++;
            arr[j+1]=key;
            if(flag==1)
            {
                shift++;
                flag = 0;
            }
        }
        for(i=0;i<n;i++)
            cout<<arr[i];
        cout<<"\nComparisons : "<<comp;
        cout<<"\nShift : "<<shift<<endl;
    }
    return 0;
}
