#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],i,count=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==key){
                i=mid;
                while(arr[i++]==key)
                    count++;
                i=mid-1;
                while(arr[i--]==key)
                    count++;

                cout<<key<<" - "<<count;
                break;
            }
            else if(key<arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        if(count==0)
            cout<<"Key not present";
    }
    return 0;
}
