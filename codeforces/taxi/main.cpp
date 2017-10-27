
#include<bits/stdc++.h>
using namespace std;
typedef long long int INT;

int main()
{
    int n;
    cin>>n;
    int a[4]={0};
    int x;
    for(int i=0;i<n;i++)
        {
        cin>>x;
        a[x-1]++;
        /*
        Maps number of groups of 1 -> a[0]
             number of groups of 2 -> a[1]
             number of groups of 3 -> a[2]
             number of groups of 4 -> a[3]
        */
    }
    int group4=a[3];
    int group3_1=min(a[2],a[0]);
    int left_3=a[2]-group3_1;
    int left_1=a[0]-group3_1;
    int group2_2=a[1]/2;
    int left_2=a[1]%2;
    int group2_1_1=left_2;
    if(group2_1_1 && left_2)
    {
        if(left_1>=2)
        {
            left_1-=2;
        }
        else if(left_1>=1)
        {
            left_1-=1;
        }
    }
    int group1=ceil(left_1/4.0);
    int ans=group4 + group3_1 + group2_2 + left_3 + group2_1_1 + group1;
    cout<<ans;
}
