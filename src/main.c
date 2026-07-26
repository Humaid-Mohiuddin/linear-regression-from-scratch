#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"
#include "train.h"

/*
The model for linear regression with only one dimensional feature
looks like f(x) = wx + b.
Here w and b are the parameters which need to be optimized.
*/

int main() {

    // Pointer to the array containing training outputs
    int* training_output;

    // Dummy data for tessting train module
    int dummy_spendings[5] = {4, 5, 6, 7, 8};
    int dummy_sales[5] = {8, 7, 6, 5, 4};

    // Using a type definition for parameter struct
    Params params = {0, 0}; // Initializing both parameters to 0
    Params *params_ptr = &params;

    training_output = train(dummy_spendings, dummy_sales, 3, params_ptr);
    printf("w = %d\nb = %d\n", params.w, params.b);

    free(training_output);

    return 0;

}