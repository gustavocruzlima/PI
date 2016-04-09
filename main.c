#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double pi(void);

int main (void){

	printf("Valor do PI: %f\n",pi());

}

double pi (void){

	double valor_pi=0.0,a;

	for (double i = 0.0 ; i < 1000000; i++)
	{

		a = (pow(-1,i))/(2*i+1);
		a *=4;

		valor_pi = valor_pi + a;

		
	}

	return valor_pi;


}
