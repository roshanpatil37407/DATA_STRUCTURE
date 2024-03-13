#include<iostream>
using namespace std;
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void print(int a[],int n)
{
	int i;
		for(i=0;i<=n;i++){
			cout<<a[i]<<"";
			
		}
	
}
int main()
{
	int a[]={99 ,66, 33, 74 ,2};
	int n=sizeof(a) / sizeof(a[0]);
	cout<<"before sorting"<<endl;
    print(a,n);
	insert(a,n);
	cout<<"after sorting"<<endl;
	print(a,n);
	
	
}
