#ifndef DATA_H
#define DATA_H

typedef struct {
    int* X;             // Feature array pointer
    int* Y;             // Label array pointer
    int sample_size;    // Size of dataset
} Data;

#endif