#include <stdio.h>

void train(void) {
    printf("train");
    <<<<<< < HEAD
        printf("The first feature is added");
    ====== =
        printf("The second feature is added");
    >>>>>> > secondFeature
}

void predict(void) {
    printf("predict");
}