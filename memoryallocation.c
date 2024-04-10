/*
//malloc()
#include<stdio.h>
void main(){
	float *ptr;
	ptr=(float*)malloc(4);
	*ptr=3.5;
	printf("%f",*ptr);
}

#include<stdio.h>
#include<stdlib.h>
	struct emp{
		int id;
		char name[30];
		float salary;
	};
void main(){
struct emp *ptr;
 ptr=(struct emp*)malloc(sizeof(struct emp));
 if(ptr==0){
 	printf("Out of memory error\n");
 }
 else{
 	printf("Enter emp details:");
 	scanf("%d%s%f",&ptr->id,ptr->name,&ptr->salary);
 }
 printf("Employee name=%s\nEmployee_ID=%d\nEmployee Salary=%.2f",ptr->name,ptr->id,ptr->salary);
}
*/

/*
#include<stdio.h>
struct Employee {
    char name[100];
    int age;
    char emp_id[20];
    float salary;
};
int main() {
    struct Employee emp[20];
    FILE *file;
    int i;  // Declare the loop variable outside the loop
    // Input employee details and store in file
    file = fopen("emp.dat", "w");
    if(file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }
    for(i = 0; i < 20; i++) {
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee age: ");
        scanf("%d", &emp[i].age);
        printf("Enter employee ID: ");
        scanf("%s", emp[i].emp_id);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
        fprintf(file, "%s,%d,%s,%.2f\n", emp[i].name, emp[i].age, emp[i].emp_id, emp[i].salary);
    }
    fclose(file);
    // Display employee records
    file = fopen("emp.dat", "r");
    if(file == NULL) {
        printf("Employee records file not found.\n");
        return 1;
    }
    printf("Employee Records:\n");
    printf("Name\tAge\tID\tSalary\n");
    printf("--------------------------\n");
    for(i = 0; i < 20; i++) {
        fscanf(file, "%[^,],%d,%[^,],%f\n", emp[i].name, &emp[i].age, emp[i].emp_id, &emp[i].salary);
        printf("%s\t%d\t%s\t%.2f\n", emp[i].name, emp[i].age, emp[i].emp_id, emp[i].salary);
    }
    fclose(file);
    return 0;
}

//writing in a file using fputs 
#include<stdio.h>
void main(){
	char str[20];
	FILE *fp;
	fp=fopen("f1.txt","a");
	printf("Enter your name: ");
	gets(str);
	fputs(str,fp);
	fclose(fp);
}

//writing file using fwrite function
#include<stdio.h>
struct book{
	char title[20];
	float price;
}a;
void main(){
//	struct book a;
	FILE *fp;
	fp=fopen("f1.txt","wb");
	if(fp==NULL){
		printf("sorry,File is not available");
	}
	printf("Enter the title and price of the book : ");
	gets(a.title);
	scanf("%f",&a.price);
	fwrite(&a,sizeof(a),1,fp);
	fclose(fp);
}
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,*p,i,min,max;
	printf("\nEnter the number of elements ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL){
		printf("Error");
		exit(0);
	}
	else{
		printf("\nEnter the elements: ");
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
			min=*p;
			max=*p;
			for(i=0;i<n;i++){
				if(*(p+i)<min){
					min=*(p+i);
				}
				if(*(p+i)>max){
					max=*(p+i);
				}
				
			}
		
		printf("max:%d\n min:%d",max,min);
	}
}
