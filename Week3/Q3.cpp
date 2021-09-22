#include<iostream>
using namespace std;
void merge(int *a,int start,int mid,int end)
{
    int i,j,k,n,m;
    n = mid-start+1;
    m =end-mid;
    int l[m],r[n];
    for(i=0;i<n;i++)
        l[i]=a[start+i];
    for(j=0;j<m;j++)
        r[j]=a[mid+1+j];
    i=j=0;
    k=start;
    while(i<n&&j<m)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<m)
    {
        a[k]=r[j];
        j++;
        k++;
    }
}

void merge_sort(int *a,int start,int end)
{
    if(start<end)
    {
        int mid =(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        merge_sort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                cout<<"YES\n";
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
