#include<iostream>
using namespace std;
void merge(int *a,int l,int m,int r)
{
    int n1,n2,i,j,k;
    n1 = m-l+1;
    n2= r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=a[i+l];
    for(j=0;j<n2;j++)
        R[j]=a[j+1+m];
    i=0;
    j=0;
    k = l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void sort(int *a,int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        sort(a,l,m);
        sort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,key,flag=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        sort(arr,0,n-1);
        int j=n-1;
        i=0;
        while(i<j)
        {
            if(arr[i]+arr[j]>key)
                j--;
            else if(arr[i]+arr[j]<key)
                i++;
            else{
                cout<<arr[i]<<" "<<arr[j];
                flag=1;
                i++;
                j--;
            }
        }
        if(flag==0)
            cout<<"\nNo Such Pair Exist"<<endl;
    }
    return 0;
}
