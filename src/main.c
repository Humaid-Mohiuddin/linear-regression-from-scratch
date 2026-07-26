#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"
#include "train.h"
#include "data.h"

/*
The model for linear regression with only one dimensional feature
looks like f(x) = wx + b.
Here w and b are the parameters which need to be optimized.
*/

int main() {

    // Pointer to the array containing training outputs
    int* training_output;

    Data data;

    // Dummy data for tessting train module
    int dummy_spendings[5] = {4, 5, 6, 7, 8};
    int dummy_sales[5] = {8, 7, 6, 5, 4};

    data.X = dummy_spendings;
    data.Y = dummy_sales;
    data.sample_size = 5;

    // Using a type definition for parameter struct
    Params params = {0, 0}; // Initializing both parameters to 0
    Params *params_ptr = &params;

    training_output = train(data, 5, params_ptr, 0.5);

    free(training_output);

    return 0;

}