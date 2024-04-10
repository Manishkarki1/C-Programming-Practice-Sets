/*#include<stdio.h>
union student{
	char name[60];
	int roll_no;
	float fee;
};
void main(){
	union student c;
	printf("Enter your roll_no,name and fees: ");
	scanf("%d%s%f",&c.roll_no,c.name,&c.fee);
	printf("Name=%s\nroll_no=%d\nFee=%.2f",c.name,c.roll_no,c.fee);
}
*/
#include<stdio.h>
union example{
	int x,y;
};
void main(){
	union example e;
	e.x=3;
	printf("After making x=3:\nx=%d,y=%d\n\n",e.x,e.y);
	e.y=10;
	printf("After making y=10:\nx=%d,y=%d\n\n",e.x,e.y);
}
