#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,shift=0,comp=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n-1;i++)
        {
            int pos=i;
            for(j=i+1;j<n;j++)
            {
                comp++;
                if(arr[j]<arr[pos])
                {
                    pos=j;
                }
            }
            shift++;
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
        for(i=0;i<n;i++)
            cout<<arr[i];
        cout<<"\nComparisons : "<<comp;
        cout<<"\nShift : "<<shift<<endl;
    }
    return 0;
}
