#include <stdio.h>
#include <stdlib.h>
#include "train.h"
#include "parameters.h"
#include "data.h"

void _update_w_and_b(Data data, Params *params, float alpha) {

    int i, progress_bar_count=2, progress; // progress_bar_count is the same as no. of equals to be printed (approx.)
    double d_lw=0.0, d_lb=0.0; // Partial derivates of loss function w.r.t w and b respectively.

    progress = (int) (data.sample_size/progress_bar_count);
    progress = progress>0?progress:1;
    /*
        This loop adds up all the partial derivatives of our loss function
        with respect to parameters w and b respectively.
    */
    for (i=0; i<data.sample_size; i++) {
        d_lw += (-2*data.X[i]) * (data.Y[i] - (params->w * data.X[i]) - params->b);
        d_lb += -2 * (data.Y[i] - (params->w * data.X[i]) - params->b);
        if ((i!=0) && (((i) % progress) == 0))
            printf("=");
    }
    printf(")\n");

}

int* train(Data data, int epochs, Params *params, float alpha) {
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
        printf("Epoch %d: (", e+1);
        _update_w_and_b(data, params, alpha);
    }

    return outputs;
}