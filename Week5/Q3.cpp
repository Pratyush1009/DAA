#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,flag=0;
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++)
        cin>>arr1[i];
    cin>>m;
    int arr2[m];
    for(i=0;i<m;i++)
        cin>>arr2[i];
    i=j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            flag=1;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    if(flag==0)
        cout<<"No Common Element"<<endl;
    return 0;
}
