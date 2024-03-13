#include<stdio.h>
int main(){
	int i,item,flag;
	int a[5]={10,50,60,90,12};
	printf("\n search the element of array :");
	scanf("%d",&item);
	for(i=0;i<5;i++){
		if(a[i]==item){
			flag=i+1;
			break;
		}
		else{
			flag=0;
		}
	}
	if(flag!=0){
		printf("item found",flag);
	}
	else{
		printf("item is not found");
	}
}
