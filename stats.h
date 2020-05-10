/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief this code is written to train our coding skills this is assignment 1
 *	  of the embedded systems course.
 *
 * @author Aiman Shahin
 * @date   11/05/2020
 *
 * 	  In this code we recieve an array of numbers which we need to 
 *	  extract data from. these data are as follows:
 *	  	- Largest number in the array
 *	 	- Smallest number in the array
 *		- mean of the array
 *		- median of the array
 *		
 *	  then we will print all of these values in an organised way.
 *
 *	  the next step is to reorder the array from the largest number to
 *	  the smallest number and round them down to the nearest integer.
 *	  then print the array in an organised and neat way.
 *
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
	void print_statistics( int max , int min , int mean , int median )
	void print_array( char array[] , int x )


/**
 * @Functions:
 *	**********************************************************
 *	* Name:		main()					 *
 *	* Type:		int					 *
 *	*							 *
 *	* Description:  contains the main exceuting code	 *
 *	*							 *
 *	* input para:	none					 *
 *	*							 *
 *	* output para:  return 0;				 *
 *	**********************************************************
 *	* Name:		print_statistics()			 *
 *	* Type:		void					 *
 *	*							 *
 *	* Description:	takes the varaibles optained from the 	 *
 *	*		given array of; Largest number, smallest *
 *	*		number, mean and median. and prints them *
 *	*							 *
 *	* input para:	char max , the largest value in array	 *
 *	*		char min , the smallest value in array 	 *
 *	*		char med , the median of the array	 *
 *	*		char mean, the mean of the array	 *
 *	*							 *
 *	* output para:	return;	  returns nothing		 *
 *	**********************************************************
 *	* Name:		print_array()				 *
 *	* Type:		void					 *
 *	*							 *
 *	* Description:	prints the array in a neat and organised *
 *	*		way.					 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	*							 *
 *	* output para:	return;	   returns nothing		 *
 *	**********************************************************
 *	* Name:		sort_array()				 *
 *	* Type:		void					 *
 *	*							 *
 *	* Description:	sorts the array's value from the largest *
 *	*		to the smallest				 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	* output para:	return;	   returns nothing		 *
 *	**********************************************************
 *	* Name:		find_median()				 *
 *	* Type:		char					 *
 *	*							 *
 *	* Description:	finds the median of the array and	 *
 *	*		returns its value.			 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	*							 *
 *	* output para:	char median, returns the median of the   *
 *	*			     array			 *
 *	**********************************************************
 *	* Name:		find_mean()				 *
 *	* Type:		char					 *
 *	*							 *
 *	* Description:	finds the mean of the array and returns  *
 *	*		its value.				 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	*							 *
 *	* output para:	char mean, returns the mean of the array *
 *	**********************************************************
 *	* Name:		find_maximum()				 *
 *	* Type:		char					 *
 *	*							 *
 *	* Description:	finds the largest number in the array 	 *
 *	*		and returns it.				 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	*							 *
 *	* output para:	char max, returns maximum value in array *
 *	**********************************************************
 *	* Name:		find_minimum()				 *
 *	* Type:		char					 *
 *	*							 *
 *	* Description:	finds the smallest number in the array	 *
 *	*		and returns it.				 *
 *	*							 *
 *	* input para:	char * x , pointer to the array		 *
 *	*		int s    , size of the array		 *
 *	*							 *
 *	* output para:	char min, returns minimum value in array *
 *	**********************************************************
 */


#endif /* __STATS_H__ */
