#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
	int a[5]={2,5,8,1,3};
	for(i=0;i<5;i++){
		cout<<a[i];
		cout<<"/n";
	}
		for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[j]<a[i]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					
				}
		}
			for(i=0;i<5;i++){
			cout<<a[i];	
			}
	
}

