#include<stdio.h>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,flag=0;
        cin>>n;
        char str[n];
        for(i=0;i<n;i++){
            cin.getline(str[i]);
        }
        int count[26]={0};
        for(i=0;i<n;i++){
            count[str[i]-97]++;
        }
        int max_indx=0;
        for(i=0;i<26;i++){
            if(count[i]>1){
                if(count[i]>count[max_indx])
                    max_indx = i;
                flag = 1;
            }
        }
        if(flag==0)
            cout<<"No Duplicate Present\n";
        else
            cout<<max_indx+97<<" - "<<count[max_indx];
    }
    return 0;
}