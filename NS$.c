#include<stdio.h>
int main()
{
	double n; 
	double grosalary;
	double nhif, nssf, nsalary;
	printf("enter income");
	scanf("%lf", &n);
	printf("enter NHIF");
	scanf("%lf", nhif);
	printf("enter NSSF");
	scanf("%lf", nssf);
	nsalary= n-(grosalary+nhif+nssf);
	if(12298 <= n== 0){
	grosalary=0.01*n;
	}
	else if(23885<=n>=12299)
	{
	grosalary=0.15*n;
	}
	else if(35472<=n>=23886){
	grosalary=0.2*n;
	}
	else if(47059<=n>=35473){
	grosalary=0.25*n;
	}
	else 
	(grosalary=0.3*n);
	printf("grosalary: %lf\n", grosalary);
	printf("netsalary: %lf\n", nsalary);
}