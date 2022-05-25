#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,k,l;
	cout<<"\n"<<"Enter the row size"<<endl;
	cin>>m;
	cout<<"\n"<<"Enter the column size"<<endl;
	cin>>n;
	int arr[m][n],sum=0;
	cout<<"\n"<<"Enter "<<m*n<<" elements for the matrix"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				for(k=0;k<m;k++)
				{
					for(l=0;l<n;l++)
					{
						if(k<=i+1 && k>=i-1)
						{
							if(l>=j-1 && l<=j+1)
							{
								if(k!=i || l!=j)
									sum=sum+arr[k][l];
							}
						}
						
					}
				}
				arr[i][j]=sum;
				sum=0;
			}
		}
	}
	cout<<"Your output matrix (replacing the diagonal elements by it's surrounding) is "<<"\n\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cout<<arr[i][j]<<"\t";
		cout<<"\n";
	}
	return 0;
	
}
