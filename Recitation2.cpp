#include <math.h>
int *ArrayDynamicAllocation(int array[], int size, int number) {
  int* arr2;
  if(number == 0) {   // # of iterations = 0
    return array;
        
  } else if (size == 1) {   // Array of size 1  
    int newSize = pow(2, number);
    arr2 = new int[newSize];
        
    for(int i = 0; i <= number; i++) {
      int size2 = size * (pow(2, i));
      if(i == 0) {
	arr2[i] = array[i];
	arr2[size] = array[i] * 2;
      } else {
	for(int x = 0; x < size2; x++) {
	  arr2[size2 + x] = 2 * arr2[x];
	}
      }
    }
    return arr2;
        
  } else {    // Array of size > 1
    int newSize = pow(size, number);
    arr2 = new int[newSize];
        
    for(int x = 0; x < number; x++) {
      int size2 = size * (x * 2);
      if(x == 0) {
	for(int i = 0; i < size; i++) {
	  arr2[i] = array[i];
	  arr2[size + i] = 2 * array[i];
	}   
      } else {
	for(int i = 0; i < size2; i++) {
	  arr2[size2 + i] = 2 * arr2[i];
	}
      }
    }
    return arr2;
  }
}
