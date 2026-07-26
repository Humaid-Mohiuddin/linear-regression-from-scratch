#include <stdio.h>
#include <stdlib.h>
#include "train.h"
#include "parameters.h"

int* train(int spendings[], int sales[], int epochs, Params *params) {
    int e, noutputs=2;

    /*
        Planning to store all outputs in a dynamic array outputs.
        outputs is freed in main.
    */
    int* outputs = malloc(noutputs*sizeof(int));
    if (outputs == NULL) {
        printf("Malloc error for 'outputs'\n");
        exit(1);
    }
    
    // Iterating through each epoch.
    for (e=0; e<epochs; e++) {
        printf("========== Epoch %d ==========\n", e);
    }

    return outputs;
}