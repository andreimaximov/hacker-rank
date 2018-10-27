#include<iostream>
using namespace std;

typedef long long int lli;
float from(int i,int j,int k){
    if(i==j&&i==0)
        return ((float)k-1)/2.0;
    //cout<<"y";
    int uli=i-1,ulj=j-1;
    int uri=i-1,urj=j;
    float ur,ul;
    if(ulj>=0)
        ul=from(uli,ulj,k);
    else
        ul=0.0;
        
    if(uri>=urj)
        ur=from(uri,urj,k);
    else
        ur=0.0;
        
    float n=ul + ur;
    
    n=(n-1)/2.0;
    if(n>=0)
    	return n;
    else
    	return 0;
    
}
float how_much_in(int i,int j,int k){
	if(i==j && i==0){
		return 1;
	}
    int uli=i-1,ulj=j-1;
    int uri=i-1,urj=j;
    float ul,ur;
    if(ulj>=0)
        ul=from(uli,ulj,k);
    else
        ul=0.0;
        
    if(uri>=urj)
        ur=from(uri,urj,k);
    else
        ur=0.0;
   
    float n=ul+ur;
    //cout<<n<<" ";
    if ( n>1)
    	return 1;//(n - (n-1)/2 + (n-1)/2);
    else if(n>=0)
    	return n;
    else
    	return 0;
}
int main() {
	//code
	int t;
	cin>>t;
	int k,i,j;
    while(t-->0){
        cin>>k;
        cin>>i>>j;
        cout<< how_much_in(i-1,j-1,k)<<'\n';
        
      
	
        	
    }
	return 0;
}
