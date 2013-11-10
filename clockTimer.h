#ifndef CLOCKTIMER_H
#define CLOCKTIMER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

struct timespec zero, cur;


inline int setZeroTime()
{
	clock_gettime(CLOCK_REALTIME, &zero);
	return 0;
}

inline int getCurTime(double *dt)
{
	clock_gettime(CLOCK_REALTIME, &cur);
	*dt = (cur.tv_sec-zero.tv_sec)+((double)(cur.tv_nsec)-(double)(zero.tv_nsec))/1000./1000./1000.;
	return 0;
}

#endif

//##########################################
// USEAGE
//##########################################
//gcc -lrt test.c
//
//int main(void)
//{
//	setZeroTime();
//
//	usleep(1000);
//
//	double dt;
//	getCurTime(&dt);
//	printf("%lf\n",dt);
//}

