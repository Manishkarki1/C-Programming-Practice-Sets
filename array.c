/*sum of the number
#include<stdio.h>
#include<conio.h>
void main(){
	int arr[5]={1,2,3,4,5},i,sum=0;
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
}*/
/*To find the largest number using array
#include<stdio.h>
void main(){
	int num[5]={2,3,45,33,29},i,large;
	large=num[0];
	for(i=1;i<5;i++){
		if(num[i]>large){
		large=num[i];	
		}
	}
	printf("%d",large);

}*/
/*find the largest number by taking input
#include<stdio.h>
void main(){
	int num[4],large,i;
	printf("Enter your number: ");
	scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]);
	large=num[0];
	for(i=1;i<4;i++){
		if(num[i]>large){
			large=num[i];
		}
	}
	printf("The largest number is %d",large);
	}*/

//C Program to add two matrices using multi-dimensional arrays
#include<stdio.h>
void main(){
	int m,n,i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter the size of row not more than 3: ");
	scanf("%d",&m);
	printf("Enter the size of column not more than 3: ");
	scanf("%d",&n);
	printf("The first matrix element are:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the element of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix elements:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the element of b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
    }
	printf("\nThe sum of two matrices: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
/*
//reverse using array
#include<stdio.h>
void main(){
	int i,n,arr[10];
	printf("Enter the size of the element of the array: ");
	scanf("%d",&n);
	printf("Input %d number of elements in the array:\n ",n);
	for(i=0;i<n;i++){
		printf("Element-%d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("The values store into the array are:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nThe values store into the array in reverse array: ");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	printf("\n");
}*/
/*
//sum of all the elements of the array
#include<stdio.h>
void main(){
	int n,sum=0,arr[5],i;
	printf("Input the number of elements to be stored in array :");
	scanf("%d",&n);
	printf("Input %d elements in the array: ");
	for(i=0;i<n;i++){
		printf("Elements-%d",i);
		scanf("%d",&arr[i]);
		
	}
	printf("Sum of all elements stored in the array is: ");
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum :%d",sum);
}
//to find out the duplicate number
#include<stdio.h>
void main(){
	int n,i,arr[5],dup;
	printf("Enter the number of element to be stored in the array: ");
	scanf("%d",&n);
	printf("Input %d elements in the array:\n ",n);
	for(i=0;i<n;i++){
		printf("Element-%d:",i);
		scanf("%d",&arr[i]);
	}
	dup=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]==dup)
		dup=arr[i];
	}
	printf("total number of duplicate elements found in the array is: %d",dup); 
}

#include<stdio.h>
void main(){
	int i,n,arr[30];
	printf("Input the number of elements to store in the array: ");
	scanf("%d",&n);
	printf("Input %d number of element in the array: \n",n);
	for(i=0;i<n;i++){
		printf("element-%d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("The values store into the array are: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nThe values store into the array in reverse are: ");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
#include<stdio.h>
void main(){
	int sum=0,arr[30],n,i;
	printf("Input the number: ");
	scanf("%d",&n);
	printf("Input %d elements in the array:\n ",n);
	for(i=0;i<n;i++){
		printf("element-%d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("sum of all element: %d",sum);
}

//program to find duplicate elements
#include<stdio.h>
void main(){
	int arr[40],dup[40];
	int n,i,j,cnt;
	printf("enter the number: ");
	scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i=0;i<n;i++){
    	printf("element-%d : ",i);
    	scanf("%d",&arr[i]);
    	dup[i]=-1;
	}
	for(i=0;i<n;i++){
		cnt=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
				dup[j]=0;
			}
		}
		if(dup[i]!=0){
			dup[i]=cnt;
		}
	}
	printf("\n Duplicate Elements Are: ");
	for(i=0;i<n;i++){
		if(dup[i]>1)
		printf("\n%d",arr[i]);
	}
}
#include<stdio.h>
void main(){
	int arr[40];
	int n,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Element-%d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("The even elements are: ");
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\nThe odd elements are: ");
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
}
//to find out the unique element
#include<stdio.h>
void main(){
	int arr[40];
	int n,i,j,cnt;
	printf("enter the number: ");
	scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i=0;i<n;i++){
    	printf("element-%d : ",i);
    	scanf("%d",&arr[i]);
	}
	printf("unique elements are: ");
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt==1)
		printf("%d ", arr[i]);
		}
	}
	
//to find out the dublicate element
#include<stdio.h>
void main(){
	int arr[40];
	int n,i,j,cnt;
	printf("enter the number: ");
	scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i=0;i<n;i++){
    	printf("element-%d : ",i);
    	scanf("%d",&arr[i]);
	}
	printf("Dublicate elements are: ");
	for(i=0;i<n;i++){
		cnt=0;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt==1)
		printf("%d ", arr[i]);
		}
	}
//to find out the maximum and minimum number
#include<stdio.h>
void main(){
	int arr[40];
	int n,max,min,i;
	printf("enter the number: ");
	scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i=0;i<n;i++){
    	printf("element-%d : ",i);
    	scanf("%d",&arr[i]);
	}
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++){
    	if(arr[i]>max){
    		max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("maximum number: %d\n",max);
	printf("minimum number: %d",min);
}
//to find out the frequency of the array
#include<stdio.h>
void main(){
	int arr[40],freq[40];
	int n,i,j,cnt;
	printf("enter the number: ");
	scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i=0;i<n;i++){
    	printf("element-%d : ",i);
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		freq[i]=cnt;
		}
	printf("frequency : \n");
	for(i=0;i<n;i++){
	     printf("%d occurs %d times\n",arr[i],freq[i]);
	}	
	}
	
//program to merge the two arrays elements
#include<stdio.h>
void main(){
	int arr1[40],arr2[40];
	int i,n,m;
	printf("Enter the number of element to be stored in first array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("element-%d",i);
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number of element to be stored in second array: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("element-%d",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<m;i++){
		arr1[n+i]=arr2[i];
	}
	printf("Final merge array: ");
	for(i=0;i<m+n;i++){
		printf("%d ", arr1[i]);
	}
}

#include<stdio.h>
void main(){
	int i,j,num[100],temp,n;
	printf("Enter the number of element to be stored : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Element-%d:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
   printf("\nNumber in ascending order are: ");
   for(i=0;i<n;i++){
   	printf("\n%d",num[i]);
   }
}*/
