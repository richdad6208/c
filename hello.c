#include <stdio.h>
#include <float.h>

typedef union {
    int hex;
    float dec;
} int_float;

int main(void) {
    int_float data, data2; 

    data.dec = 9.1234567f;
    data2.hex = 0x4111F9AD;

    printf("hex=%08X\t dec=%20.18f\n", data.hex, data.dec); 
    printf("hex=%08X\t dec=%20.18f\n", data2.hex, data2.dec);

    printf("FLT_ROUNDS=%d\n", FLT_ROUNDS); 
    printf("FLT_EPSILON=%11.10f\n", FLT_EPSILON); 

    return 0; 
}