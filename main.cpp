#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,c,i,j;
	
	cin>>t;
	
	while(t--)
	{
       
	 cin>>l>>c;
	
		for(i=0;i<l;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==0 || i==l-1 || j==0 || j==c-1)
				 cout<<"*";
				else
				 cout<<".";
			}
			
			cout<<"\n";
		}
		cout<<"\n\n";
	}
	
	return 0;
}