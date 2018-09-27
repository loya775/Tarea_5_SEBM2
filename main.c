/*
 * main.c
 *
 *  Created on: Sep 26, 2018
 *      Author: Jorge Loya
 */
#include "stats.h"
#include <stdio.h>
int main(void)
{
	int8_t data[2];
	dataset_t dataset;
	dataset.Ndata = sizeof(data);
	data[0] = 23;
	data[1] = 8;
	get_stats(data, &dataset);
	printf("\r%i, %i, %f , %f, %i, %i, %i, %i \n", (int)data[0], (int)data[1], dataset.mean, dataset.variance,(int)(dataset.min), (int)(dataset.max), (int)(dataset.is_max_outlier), (int)(dataset.is_min_outlier));
	return 0;
}

