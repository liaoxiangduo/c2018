/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : preproc.h
#   Last Modified : 2019-04-29 19:12
#   Describe      :
#
# ====================================================*/

/* #line 202 "hello world" */

#ifndef PREPROC_H_
#define PREPROC_H_

#include <assert.h>

#ifndef CUBE
#	define CUBE(x) ((x)*(x)*(x))
#endif

#ifndef SUB
#	define SUB(x, y) printf(#x " - " #y " = %d\n", x - y)
#endif

#if 0
#define LINUX		// null macro

#ifdef LINUX
	#include <stdio.h>

#endif
#endif

#if 0
#define OS linux

#if OS == linux		// use logic operator
	#include <stdio.h>
#endif
#endif

#define SIZE 10

#if SIZE > 2 && SIZE < 20
	#include <stdio.h>
#endif

#ifndef PASTER
#	define XNAME(n) x##n
#	define PRI(x) printf("X = %d\n", x);
#endif

inline static double cube(double x)
{
	return (x * x * x);
}

inline static double fact(int x)
{
	long double res = 1.00;
	
	assert(x >= 0);

	if (x == 0 || x == 1) return res;

	for (int i = 1; i <= x; ++i)
		res *= i;

	return res;
}

#endif
