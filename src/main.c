#include <stdio.h>
#include "parameters.h"

/*
The model for linear regression with only one dimensional feature
looks like f(x) = wx + b.
Here w and b are the parameters which need to be optimized.
*/

int main(void) {
    
    // Using a type definition for parameters struct
    Params params = {55, 66};

    printf("w = %d\nb = %d\n", params.w, params.b);
}