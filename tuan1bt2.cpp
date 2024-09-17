#include<stdio.h>
#include<math.h>
main()
{
	long stg;
	float ls, n;
	int thg;
	double tld, tlk;
	printf("Nhap vao so tien gui: ");
	scanf("%ld", &stg);
	printf("Nhap vao lai suat: ");
	scanf("%f", &ls);
	printf("Nhap vao so thang gui: ");
	scanf("%d", &thg);
	n= (thg*30) / 365;
	if(thg < 12)
	{
		tld = stg * ls / 100 * n;
		printf("so tien lai co duoc sau %d thang la: %lf", thg, tld);
	}
	else
	{
		tld = stg * ls / 100 * n;
		printf("so tien lai don co duoc sau %d thang la: %lf", thg, tld);
		tlk = stg * pow(1 + ls/100, (thg/12));
		printf("so tien lai co kep sau %d thang la: %lf", thg, tlk);
	}
}
