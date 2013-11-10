#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

#include "clockTimer.h"

int main(void)
{
	setZeroTime();

	usleep(1000);
	
	double dt;
	getCurTime(&dt);
	printf("%lf\n", dt);

	return 0;
}

