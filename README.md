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
 		**********************************************************************
 		* Name:		main() 
 		* Type:		void 
 		* 
 		* Description:  contains the main exceuting code 
 		* 
 		* input para:	none 
 		* 
 		* output para:  return; 
 		***********************************************************************
 		* Name:		print_statistics() 
 		* Type:		void 
  		* 
 		* Description:	takes the varaibles optained from the 
  		*		given array of; Largest number, smallest
 		*		number, mean and median. and prints them 
 		* 
 		* input para:	unsigned char max , the largest value in array 
 		*		unsigned char min , the smallest value in array 
 		*		unsigned char med , the median of the array	
 		*		unsigned char mean, the mean of the array 
 		* 
 		* output para:	return;	  returns nothing	
 		***********************************************************************
 		* Name:		print_array() 
 		* Type:		void 
 		* 
 		* Description:	prints the array in a neat and organised 
 		*		way.	
 		* 
 		* input para:	unsigned char * x , pointer to the array 
 		*		int s    , size of the array 
 		* 
 		* output para:	return;	   returns nothing 
 		***********************************************************************
 		* Name:		sort_array() 
 		* Type:		void 
 		* 
 		* Description:	sorts the array's value from the largest 
 		*		to the smallest 
 		*
 		* input para:	unsigned char * x , pointer to the array 
 		*		int s    , size of the array 
  	        *
 		* output para:	return;	   returns nothing 
 		***********************************************************************
 		* Name:		find_median() 
 		* Type:		unsigned char 
 		* 
 		* Description:	finds the median of the array and 
 		*		returns its value. 
 		* 
 		* input para:	unsigned char * x , pointer to the array 
 		*		int s    , size of the array	
 		* 
 		* output para:	unsigned char median, returns the median of the array 
 		***********************************************************************
 		* Name:		find_mean() 
 		* Type:		unsigned int 
 		*
 		* Description:	finds the mean of the array and returns 
 		*		its value.
 		*
 		* input para:	unsigned char * x , pointer to the array
 		*		int s    , size of the array
 		*
 		* output para:	unsigned char mean, returns the mean of the array 
 		***********************************************************************
 		* Name:		find_maximum()
 		* Type:		unsigned char
 		*
 		* Description:	finds the largest number in the array
 		*		and returns it.
 		*
 		* input para:	unsigned char * x , pointer to the array
 		*		int s    , size of the array
 		*
 		* output para:	unsigned char max, returns maximum value in array 
 		***********************************************************************
 		* Name:		find_minimum()
 		* Type:		unsigned char
 		*
 		* Description:	finds the smallest number in the array	
 		*		and returns it.
 		*
 		* input para:	unsigned char * x , pointer to the array
 		*		int s    , size of the array
 		*
 		* output para:	unsigned char min, returns minimum value in array 
 		***********************************************************************
