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
 * @brief Statistics review
 *
 * C practics with basic functions
 *
 * @author Adrian Valdes Zavala
 * @date 01/06/2023
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  size_t arrsize = sizeof(test)/sizeof(test[0]);
  /* Statistics and Printing Functions Go Here */
  print_array(test, arrsize);
  printf("\nmin: %d",find_minimum(test, arrsize));
  printf("\nmax: %d",find_maximum(test, arrsize));
  printf("\nmedian: %d",find_median(test, arrsize));
  printf("\nmean: %d",find_mean(test, arrsize));
  sort_array(test, arrsize);
}

//Compare integers function, needed for qsort 
int compare (const void * a, const void * b)
{
    return ( *(unsigned char*)a - *(unsigned char*)b );
}

int print_array(unsigned char arr[], size_t arrsize){
  for(int i=0; i<arrsize; i++){
		printf("%d ", arr[i]);        
  }
}

int find_minimum(unsigned char arr[], size_t arrsize){
  int min = arr[0];
  for(int i=1; i<arrsize; i++){
    if(min>arr[i])
		  min=arr[i];        
  }
  return min;
}

int find_maximum(unsigned char arr[], size_t arrsize){
 	int max = arr[0];
  for(int i = 1; i<arrsize; i++){ 
		if(max<arr[i])
		  max=arr[i];       
  }
  return max;
}

int find_median(unsigned char arr[], size_t arrsize){
  qsort(arr, arrsize, sizeof(unsigned char), compare); 
  if (arrsize % 2 != 0){
    float even = arr[arrsize / 2];
    return even;
  }
  else{
    float odd = (arr[(arrsize - 1) / 2] + arr[arrsize / 2]) / 2.0;
    return odd;
  }
}

int find_mean(unsigned char arr[], size_t arrsize){
  int cont = 0;
  for (int i = 0; i < arrsize; i++){
    cont += arr[i];
  }
  float mean = cont/arrsize;
  return mean;
}

int sort_array(unsigned char arr[], size_t arrsize){
  printf("\norder: ");
  qsort(arr, arrsize, sizeof(unsigned char), compare); 
  for(int i=0; i<arrsize; i++){
		printf("%d ", arr[i]);        
  }
}

/* Add other Implementation File Code Here */
