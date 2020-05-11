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

/**
 * @Functions:
 *	**********************************************************************
 *	* Name:		main()					 
 *	* Type:		void					 
 *	*							 
 *	* Description:  contains the main exceuting code	 
 *	*							 
 *	* input para:	none					 
 *	*							 
 *	* output para:  return;				 
 *	***********************************************************************
 *	* Name:		print_statistics()			 
 *	* Type:		void					 
 *	*							 
 *	* Description:	takes the varaibles optained from the 	 
 *	*		given array of; Largest number, smallest
 *	*		number, mean and median. and prints them 
 *	*							 
 *	* input para:	unsigned char max , the largest value in array	 
 *	*		unsigned char min , the smallest value in array 	 
 *	*		unsigned char med , the median of the array	 
 *	*		unsigned char mean, the mean of the array	 
 *	*							 
 *	* output para:	return;	  returns nothing		 
 *	***********************************************************************
 *	* Name:		print_array()				 
 *	* Type:		void					 
 *	*							 
 *	* Description:	prints the array in a neat and organised 
 *	*		way.					 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *	*							 
 *	* output para:	return;	   returns nothing		 
 *	***********************************************************************
 *	* Name:		sort_array()				 
 *	* Type:		void					 
 *	*							 
 *	* Description:	sorts the array's value from the largest 
 *	*		to the smallest				 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *      *
 *	* output para:	return;	   returns nothing		 
 *	***********************************************************************
 *	* Name:		find_median()				 
 *	* Type:		unsigned char					 
 *	*							 
 *	* Description:	finds the median of the array and	 
 *	*		returns its value.			 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *	*							 
 *	* output para:	unsigned char median, returns the median of the array			 
 *	***********************************************************************
 *	* Name:		find_mean()				 
 *	* Type:		unsigned char					 
 *	*							 
 *	* Description:	finds the mean of the array and returns  
 *	*		its value.				 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *	*							 
 *	* output para:	unsigned char mean, returns the mean of the array 
 *	***********************************************************************
 *	* Name:		find_maximum()				 
 *	* Type:		unsigned char					 
 *	*							 
 *	* Description:	finds the largest number in the array 	 
 *	*		and returns it.				 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *	*							 
 *	* output para:	unsigned char max, returns maximum value in array 
 *	***********************************************************************
 *	* Name:		find_minimum()				 
 *	* Type:		unsigned char					 
 *	*							 
 *	* Description:	finds the smallest number in the array	
 *	*		and returns it.				 
 *	*							 
 *	* input para:	unsigned char * x , pointer to the array		 
 *	*		int s    , size of the array		 
 *	*							 
 *	* output para:	unsigned char min, returns minimum value in array 
 *	***********************************************************************
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char maximum;
  unsigned char minimum;
  unsigned char median;
  unsigned char mean;

  /* Statistics and Printing Functions Go Here */
  maximum = find_maximum ( test, SIZE);
  minimum = find_minimum ( test, SIZE);
  median  = find_median ( test, SIZE);
  mean    = find_mean ( test, SIZE);
  print_statistics ( maximum, minimum, median, mean);
  sort_array ( test, SIZE);
  print_array ( test, SIZE);

  /* new median after sorting */
  printf(" new median after sorting:  %d\n\n",find_median( test, SIZE));
  
}

/* Add other Implementation File Code Here */

void print_statistics ( unsigned char max , unsigned  char min , unsigned char med , unsigned  char m ) {
  printf("\n\n the following are the data of the array:\n\n Maximum: %d\n Minimum: %d\n Median:  %d\n Mean:    %d\n\n",max,min,med,m);
  return;
}

void print_array ( unsigned char * x, int s ) {
  printf("\n ");
  for ( int i = 0; i < s; i++ ){
     if(i%5==0){
       printf("\n %d",*x);
     }
     else{
       printf(" %d",*x);
     }
     x++;     
  }
  printf("\n\n");
  return;
}

void sort_array ( unsigned char * x, int s ) {
  unsigned char temparr[s];
  unsigned char temp1 = *x;
  unsigned char temp2;
  temparr[0]= *x;
  for ( int i = 1;  i < s; i++ ){
     x++;
     temp1 = *x;
     temparr[i] = *x;
     for ( int j = 0; j < i; j++ ){
        if( temp1 > temparr[j] ){
          temparr[i] = temparr[j];
          temparr[j] = temp1;
          temp1 = temparr[i];
        }
     }
  }
  x = x-s+1;
  for ( int i = 0 ; i < s; i++ ){
	*x = temparr[i];
        x++;
  }
  return;
}

unsigned char find_median ( unsigned char * x, int s ) {
  unsigned char median;
  if( s%2 == 0 ) {
    median = (*(x+(s/2))+*(x+(s/2)-1))/2;
  }
  else{
    median = *(x+(s/2));
  }
  return median;
}

unsigned char find_mean ( unsigned char * x, int s ) {
  unsigned char mean = *x;
  for( int i = 1 ; i < s ; i++) {
     x++;
     mean = mean + *x;
  }
  mean = mean/s;
  return mean;
}

unsigned char find_maximum ( unsigned char * x, int s ) {
  unsigned char maximum = *x;
  for( int i = 1 ; i < s ; i++) {
     x++;
     if( *x > maximum ) {
        maximum = *x;
     }
  }
  return maximum;
}

unsigned char find_minimum ( unsigned char * x, int s ) {
  unsigned char minimum = *x;
  for( int i = 1 ; i < s ; i++) {
     x++;
     if( *x < minimum ) {
        minimum = *x;
     }
  }
  return minimum;
}

