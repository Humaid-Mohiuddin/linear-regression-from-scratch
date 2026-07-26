#include <stdio.h>

void main() {
    int data[5] = {1, 2, 3, 4, 5};
    
    /*
        sizeof(data) gives the no. of bytes data holds
        divide it by the sizeof(int) to get the no. of elements in data
    */
    printf("Size of data: %d\n", (int)(sizeof(data)/sizeof(int)));
}