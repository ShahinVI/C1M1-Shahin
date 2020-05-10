	Author: Aiman Shahin
	Email:  Shahinaiman@gmail.com

	Purpose:
		this code is made to train our coding skills. this is
		assignment 1 of the Introduction to Embedded Systems course.

	description: 
		In this code we recieve an array of numbers which we need to 
		extract data from. these data are as follows:
		- Largest number in the array
		- Smallest number in the array
		- mean of the array
		- median of the array
		
		then we will print all of these values in an organised way.

		the next step is to reorder the array from the largest number to
		the smallest number and round them down to the nearest integer.
		then print the array in an organised and neat way.

	Functions:
		*********************************************************
		* Name:		main()					*
		* Type:		int					*
		* Description:  contains the main exceuting code	*
		* input para:	none					*
		* output para:  return 0;				*
		*********************************************************
		* Name:		print_statistics()			*
		* Type:		void					*
		* Description:	takes the varaibles optained from the 	*
		*		given array of; Largest number, smallest*
		*		number, mean and median. and prints them*
		* input para:	char max, char min, char med, char mean	*
		* output para:	return;					*
		*********************************************************
		* Name:		print_array()				*
		* Type:		void					*
		* Description:	prints the array in a neat and organised*
		*		way.					*
		* input para:	char * x, int s				*
		* output para:	return;					*
		*********************************************************
		* Name:		sort_array()				*
		* Type:		void					*
		* Description:	sorts the array's value from the largest*
		*		to the smallest				*
		* input para:	char * x, int s				*
		* output para:	return;					*
		*********************************************************
		* Name:		find_median()				*
		* Type:		char					*
		* Description:	finds the median of the array and	*
		*		returns its value.			*
		* inpit para:	char * x, int s				*
		* output para:	char median				*
		*********************************************************
		* Name:		find_mean()				*
		* Type:		char					*
		* Description:	finds the mean of the array and returns *
		*		its value.				*
		* input para:	char * x, int s				*
		* output para:	char mean				*
		*********************************************************
		* Name:		find_maximum()				*
		* Type:		char					*
		* Description:	finds the largest number in the array 	*
		*		and returns it.				*
		* input para:	char * x, int s				*
		* output para:	char max				*
		*********************************************************
		* Name:		find_minimum()				*
		* Type:		char					*
		* Description:	finds the smallest number in the array	*
		*		and returns it.				*
		* input para:	char * x, int s				*
		* output para:	char min				*
		*********************************************************
