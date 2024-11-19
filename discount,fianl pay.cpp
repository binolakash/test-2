//This program calculate discount and final payment of a customer
#include <stdio.h>
int main (void)
{
	double finalpay,totalpay,discount;
	
	printf ("Enter the total payment of a customer :");
	scanf ("%lf", &totalpay);
	
	discount = (totalpay * 0.15);
	finalpay = totalpay - discount;
	
	printf ("discount is %.2f\n", discount);
	printf ("final payment %.2f\n", finalpay);
	
	return 0;
	
}
