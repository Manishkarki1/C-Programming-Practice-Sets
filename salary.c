/*
#include<stdio.h>
void main(){
     int i,emp[10],sum=0,average;
     char name[10],address[10];
     for(i=0;i<=10;i++){
     	printf("Input your name: ",i);
     	scanf("%s",name);
     	printf("Input your address: ");
     	scanf("%s",address);
     	printf("Input your salary:\n ");
     	scanf("%d",&emp[i]);
	 }
	 for(i=0;i<=10;i++){
	 	sum=sum+emp[i];
	 }
	 average=sum/10;
	 printf("The average salary of the employee is %d",average);
	 
}*/

#include<stdio.h>
void main(){
	int num[40],i,j,temp,n;
	printf("Enter the size of the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input the number: ");
		scanf("%d",&num[i]);
	}
	printf("The sorted number are: ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		printf("%d\n",num[i]);
	}
}
