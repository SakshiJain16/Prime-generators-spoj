#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	int t;
	
	cin>>t;
	while(t--)
	{
		long long int x,y;
		int flag;
		cin>>x;
		cin>>y;
		for(int i=x;i<=y;i++)
		{
			flag=0;
			for(int j=2;(j*j)<=i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0&&i!=1)
			{
				cout<<i<<endl;
			}
			
		}
	}
 
	return 0;
} 
