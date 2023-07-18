//Jose Hichez
//PID 6186740
//"I affirm that I wrote this program myself without any help from any other people or sources from the internet."
#include <stdio.h>
#include <math.h>
int main(void)
{
	//declare constants for Kilometers
	float kilometer1 = 2.00;
	float kilometer2 = 55.00;
	float kilometer3 = 402.00;
	float kilometer4 = 1895.00;

	//function to convert Kilometers into Miles
	float km_mile = 0.621371;

	//convert the Kilometers into Miles
	double mile1 = kilometer1*km_mile;
	float  mile2 = kilometer2*km_mile;
	float  mile3 = kilometer3*km_mile;
	double mile4 = kilometer4*km_mile;

	//print output
	printf("%13cConvert\n",0x13 );
	printf("Kilometers\t\t Miles\n");
	printf("%11.2f\t%16.2f\n",kilometer1,mile1);
	printf("%11.2f\t%16.2f\n",kilometer2,mile2);
	printf("%11.2f\t%16.2f\n",kilometer3,mile3);
	printf("%11.2f\t%16.2f\n",kilometer4,mile4);

	return 0;
}	
