/*#include<stdio.h>
void main(){
	int ch,fn,ln,sum,sub,mul;
	printf("Choose 1,2,3 for sum,sub and mul respectively: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			scanf("%d%d",&fn,&ln);
			sum=fn+ln;
			printf("%d+%d=%d",fn,ln,sum);
			break;
		case 2:
			scanf("%d%d",&fn,&ln);
			sub=fn-ln;
			printf("%d-%d=%d",fn,ln,sub);
			break;
		case 3: 
		    scanf("%d%d",&fn,&ln);
		    mul=fn*ln;
		    printf("%d*%d=%d",fn,ln,mul);
		    break;
	    default:
	    	printf("Error!choose between 1 and 3 only.");
	}
}*/
/*
// to make the christmas tree
#include<stdio.h>
void main(){
	int i,j,k,c=10;
	for(i=1;i<=5;i++){
			
		for(k=1;k<=5-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("   |||");
	
	
}
/*
#include<stdio.h>
void main(){
	int i,j,k,c=40;
	for(i=1;i<=5;i++){
		for(k=i;k<=5;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("    |||");
}
#include<stdio.h>
void main(){
	char input;
	float kmsTomiles= 0.62137119224 ;
	float inchesTofoot= 0.08333333333;
	float cmsToinches= 0.3937;
	float poundTokgs=0.45359237 ;
	float inchesTometers=0.0254;
	float fn,sn;
	while(1){
		printf("Enter the input character\n 1.kms to miles\n 2.inches to foot\n 3.cms to inches\n 4.pound to kgs\n 5.inches to meters\n q to quit\n");
		scanf(" %c", &input);
		switch(input){
			case '1':
				printf("Enter quantity: ");
				scanf("%f",&fn);
				sn=fn*kmsTomiles;
				printf("%f kms is equal to %f miles\n",fn,sn);
				break;
			case '2':
				printf("Enter quantity: ");
				scanf("%f",&fn);
				sn=fn*inchesTofoot;
				printf("%f inches is equal to %f foot\n",fn,sn);
				break;
			case '3':
				printf("Enter quantity: ");
				scanf("%f",&fn);
				sn=fn*cmsToinches;
				printf("%f cms is equal to %f inches\n",fn,sn);
				break;
			case '4':
				printf("Enter quantity: ");
				scanf("%f",&fn);
				sn=fn*poundTokgs;
				printf("%f pound is equal to %f kgs\n",fn,sn);
				break;
			case '5':
				printf("Enter quantity: ");
				scanf("%f",&fn);
				sn=fn*inchesTometers;
				printf("%f inches is equal to %f meters\n",fn,sn);
				break;
		    case 'q':
				printf("Quiting the progress.......");
				goto end;
				break;
			default: 
			    printf("Error! please choose between 1 and 5\n");
			    
		}		
        }
  end:;
}

#include<stdio.h>
#include<math.h>
void main(){
	int r,n,i=0,sum=0;
	printf("Enter your Binary number: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		sum=sum+pow(2,i)*r;
		n=n/10;
		i++;
	} 
	printf("Decimal number is %d",sum);
}

#include<stdio.h>
void main(){
	int n,r,sum=0,i=1;
	printf("enter the decimal number: ");
	scanf("%d",&n);
	while(n){
	    r=n%2;
		sum=sum+r*i;
		n=n/2; 
		i=i*10;
		}
	printf("Binary number is %d",sum);
}
*/

//The sum of first n even number
#include<stdio.h>
void sum(int);
void main(){
	int n;
	printf("Enter the size of number: ");
	scanf("%d",&n);
	sum(n);
}
void sum(int n){
	int i,sum=0,even=0;
	for(i=1;i<=n;i++){
		even=2*i;
		printf("%d",even);
		sum=sum+even;
	}
    printf("The sum is %d",sum);
}
/*
#include<stdio.h>
int divisible();
void main(){
  int n;
  n=divisible();
  printf("The count of those number which is divisible by 7 is %d",n);
}
int divisible(){
	int i,count=0;
	for(i=1;i<=100;i++){
		if(i%7==0){
			count++;
		}
	}
	return count;
}


#include<stdio.h>
void main(){
	int i,a=1,b=1,c,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
/*
#include<stdio.h>
void main(){
	int a,b,ch,sum,sub;
	printf("Enter First number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter 1 for sum\n2 for subtraction:");
	scanf("%d",&ch);
	switch(ch){
		case 1: sum=a+b;
		printf("The sum is %d",sum);
		break;
		case 2: sub=a-b;
		printf("The subraction is %d",sub);
		break;
		default:
			 printf("Sorry! Enter 1 or 2 only.");
	}
}*/
/*
#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter how many prime number do you want:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j)
			printf("%d\t",i);
		
	}
}
#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
}
*/

