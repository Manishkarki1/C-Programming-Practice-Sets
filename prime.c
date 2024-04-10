//To print prime number upto 100
#include<stdio.h>
#include<conio.h>
void main(){
     int i,j;
     for(i=2;i<=100;i++){
     	for(j=2;j<=i;j++){
     		if(i%j==0)
     		break;
		 }
		 if(i==j){
		 	printf("%d\t",i);
		 }
	 }  
 }
 
 
/*#include<stdio.h>
 #include<conio.h>
 void main(){
 	int n,i,x=2;
 	printf("Enter how many prime number do you want to print: ");
 	scanf("%d",&n);
 	while(n!=0){
	 for(i=2;i<x;i++){
	     if(x%i==0)
 		break;}
	 if(i==x){
	 	printf("%d\n",x);
	 	n--;
	 	
	 }
	 x++;
	 
}
 }
 
 #include<stdio.h>
 #include<conio.h>
 void main(){
 	int n,i;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	for(i=2;i<=n;i++){
 		if(n%i==0)
 		break;
	 }
	 if(i==n){
	 	printf("The number is prime number");
	 }
	 else{
	 	printf("The number is not a prime number");
	 }
 }
 */
 /*#include<stdio.h>
 void main(){
 	int n,i,j=2;
 	printf("Input the range number:");
 	scanf("%d",&n);
 	while(n!=0){
 		for(i=2;i<j;i++){
 			if(j%i==0)
 			break;
		 }
		 if(j==i){
		 	printf("%d\t",j);
		 	n--;
		 }
		 j++;
	 }
 }
 
#include<stdio.h>
void main(){
	int n,r,sum=0,temp,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		m=r*r*r;
		sum=sum+m;
		n=n/10;
	}
	n=temp;
	if(n==sum){
		printf("it is an armstrong number");
	}
	else{
		printf("not an armstrong number");
	}
	
}
 */
 

