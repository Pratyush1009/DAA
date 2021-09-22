#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,key,count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        int mid,beg,end;
        beg = 0;
        end = n-1;
        while(beg<=end){
            mid = (beg+end)/2;
            count++;
            if(arr[mid]>key)
            {
                end = mid-1;
            }
            else if(arr[mid]<key)
            {
                beg = mid+1;
            }
            else
            {
                cout<<"PRESENT "<<count;
                break;
            }
        }
        if(beg>end)
            cout<<"NOT PRESENT "<<count;
    }
    return 0;
}
