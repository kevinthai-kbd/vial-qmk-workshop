#pragma once

#include "quantum.h"

#define LAYOUT(\
	K000, K001, K002,  \
    K010, K011, K012,  \
	K020, K021, K022   \
) {\
	{K000, K001, K002},\
	{K010, K011, K012},\
	{K020, K021, K022} \
}


	// Matrix Representation 
	// {K000, K001, K002}, /*row 0*/
	// {K010, K011, K012}, /*row 1*/
	// {K020, K021, K022}  /*row 2*/

	// //col0  col1  col2
