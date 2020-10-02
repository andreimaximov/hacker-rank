#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x,s=0;
	std::vector<int> v;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
	    s+=a[i];
	    if(s>x)
	    {
	        break;
	    }
	    v.push_back(a[i]);
	}
	cout<<v.size()<<endl;
	
	return 0;
}

//Input:
//7 50
//1 12 5 111 200 1000 10
//Output:
//4
