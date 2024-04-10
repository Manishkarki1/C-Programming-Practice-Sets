 /*
//example of pointer
#include<stdio.h>
void main(){
	int a=5;
	int *p;
	p=&a;
	printf("a is %d\n",a); 
	printf("p is %u\n",p);
	printf("&a is %u\n",&a);
	printf("*p is %u\n",*p);
	printf("&p is %u\n",&p);
	printf("*(&a) is %u\n",*(&a)); 
}*/
/*
#include<stdio.h>
void swap(int*,int*);
void main(){
	int a,b,c;
	printf("Enter the value of a:  ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\nAfter swapping a=%d and b=%d",a,b);
}
void swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}*/
/*
#include<stdio.h>
void main(){
int i,a[4],*p;
p=&a[0];
for(i=0;i<=3;i++){
	scanf("%d",p+i);
}
for(i=0;i<=3;i++){
	printf("%d",*(p+i)); 
}	 	 
}*/

//pointer and array
#include<stdio.h>
void input(int,int*);
void display(int,int*);
void sort(int,int*);
void main(){
	int n,a[10];
	printf("enter the term of value: ");
	scanf("%d",&n);
    input(n,a);
    display(n,a);
    sort(n,a);
    display(n,a);
}
void input(int n,int *a){
	int i;
	for(i=0;i<n;i++){
		printf("Element-%d: ",i);
		scanf("%d",a+i);
	}
}
void display(int n,int *a){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}
void sort(int n,int *a){
     int i,j,temp;
	 for(i=0;i<n;i++){
	 	for(j=i+1;j<n;j++){
	 		if(*(a+i)>*(a+j)){
	 			temp=*(a+i);
	 			*(a+i)=*(a+j);
	 			*(a+j)=temp;
			 }
		 }
	 }	
}

/*
#include<stdio.h>
int sum(int,int);
int multiply(int,int,int);
void main(){
	int s1,s2;
	s1=sum(10,20);
	s2=multiply(2,3,4);
	printf("sum=%d,multiply=%d",s1,s2);
}
int sum(int x,int y){
	return (x+y);
}
int multiply(int x,int y,int z){
	return (x*y*z);
}
#include<stdio.h>
int sum(int*,int*);
void main(){
	int a,b,c;
	printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(&a,&b);
    printf("%d+%d=%d",*(&a),*(&b),c);
}
int sum(int *x,int *y){
   return (*x+*y);
}
#include<stdio.h>
void main(){
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("Input two number: ");
	scanf("%d%d",&a,&b);
	if(*p>*q){
		printf("%d is maximum number",*p);
	}
	else{
		printf("%d is not a maximum number",*q);
	}
}
#include<stdio.h>
void main(){
	int n,fact=1,i,*p;
	p=&n;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=1;i<=*p;i++){
		fact=fact*i;
	}
	printf("factorial of %d is %d",*p,fact);
}
*/

#include<stdio.h>
void main(){
	int n,a[10],*p,i,j;
	int temp;
	p=&a[0];
	printf("Input the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("element-%d: ",i+1);
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
			temp=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=temp;	
			}
		}
	}
	printf("After sorting: \n");
	for(i=0;i<n;i++){
		printf("\nelement-%d:%d",i+1,*(a+i));
	}
}

/*
//pointer and string
#include<stdio.h>
void length(char *);
void reverse(char *);
void main(){
	char str[30];
	printf("Enter the string: ");
	scanf("%s",str);
	length(str);
	reverse(str);
}
void length(char *p){
	int i;
	for(i=0;*(p+i)!='\0';i++);
	printf("The length is %d",i);
}
void reverse(char *a){
	int i,j;
	for(i=0;*(a+i)!='\0';i++);
	printf("\nThe reverse: ");
	for(j=i;j>=0;j--){
		printf("%c",*(a+j));
			}
}
#include<stdio.h>
char* reverse(char *p);
void main(){
	char str[30];
	printf("Enter the string: ");
	scanf("%s",str);
	printf("%s",reverse(str));
}
char* reverse(char *p){
	int l,i;
	char ch;
	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++){
		ch=*(p+i);
		*(p+i)=*(p+l-1-i);
	    *(p+l-1-i)=ch;
	}
	return(p);
}
#include<stdio.h>
void sum(int *,int *);
void main(){
	int a,b;
	printf("Enter First number: ");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	sum(&a,&b);
}
void sum(int *p,int *q){
	int sum;
	sum=*p+*q;
	printf("The sum is %d",sum);
}

#include<stdio.h>
void main(){
	int a,b,ch,*p,*q,*r,sum,sub,mul;
	p=&a;
	q=&b;
	r=&ch;
	printf("Enter your first number: ");
	scanf("%d",p);
	printf("Enter your second number: ");
	scanf("%d",q);
	printf("Choose\n1 for sum\n2 for difference\n3 for product");
	scanf("%d",r);
	switch(*r){
		case 1: sum=*p+*q;
		        printf("The sum is %d:",sum);
		        break;
		case 2: sub=*p-*q;
		        printf("The difference is %d:",sub);
		        break;
	    case 3: mul=*p**q;
	            printf("The product is %d:",mul);
	            break;
	    default:
	    	   printf("Wrong choice! Please enter between 1 to 3");
	}
	
}
*/
