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
 * @file stats.h
 * @brief Function declarations
 *
 * Collection of function declarations
 *
 * @author Adrian Valdes Zavala
 * @date 01/06/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Compares 2 values
 *
 * A common function using in C, to apply qsort later 
 *
 * @param a Value 1
 * @param b Value 2
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return comparison between both values
 */
int compare (const void * a, const void * b);

/**
 * @brief print functions
 *
 * Basically just calls the min, max, median and mean functions
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return min, max, median, mean as output
 */
void print_statistics(unsigned char arr[], size_t arrsize);

/**
 * @brief Prints all the values from the array
 *
 * uses a simple loop
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
int print_array(unsigned char arr[], size_t arrsize);

/**
 * @brief returns minimum value
 *
 * Checks one by one to see if there is a smaller number
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return min value
 */
int find_minimum(unsigned char arr[], size_t arrsize);

/**
 * @brief returns maximum value
 *
 * Checks one by one to see if there is a smaller number
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return max value
 */
int find_maximum(unsigned char arr[], size_t arrsize);

/**
 * @brief Returns the median from the array
 *
 * Sorts the array and then returns the median, aka the 
 * value in the middle but it changes if it is even
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return returns median
 */
int find_median(unsigned char arr[], size_t arrsize);

/**
 * @brief Returns mean from array
 *
 * Adds upp all the values of the array and divides it by the 
 * size
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return The mean
 */
int find_mean(unsigned char arr[], size_t arrsize);

/**
 * @brief Sorts the array low to high
 *
 * Uses qsort again, just like the median, then prints the values
 *
 * @param arr[] array with values
 * @param arrsize size of array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return Ordered array, low to high
 */
int sort_array(unsigned char arr[], size_t arrsize);

#endif /* __STATS_H__ */
