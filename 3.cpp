#include<stdio.h>
#include<conio.h>

main()
{
	int salary ,HRA,DA, TA;
	float total;
	
	printf ("enter thevalue of salary ");
	scanf("%d",&salary);
	printf("enterthe value of HRA:");
	scanf(" %d",& HRA);
	
	printf("enter the value of DA :");
	scanf("%d",&DA);
	
	printf("enter the value of TA :");
	scanf("%d",&TA);
	
	HRA=(salary*HRA)/100;
	DA=(salary*DA)/100;
	TA=(salary*TA)/100;
	
	total=(HRA+DA+TA)+salary;
	printf("ans=%f",total);	
}
