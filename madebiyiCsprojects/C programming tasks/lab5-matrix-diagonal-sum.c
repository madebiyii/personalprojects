#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int matrixdiagonalsum(int *inputnums, int dimnum, int length);

int main(int argc, char *argv[]){

        int dimnum = atoi(argv[1]);
        int length = argc - 2;
        int inputnums[length];

        for(int i = 0; i < length; ++i){
            inputnums[i] = atoi(argv[i + 2]);
        }

        matrixdiagonalsum(inputnums, dimnum, length);

        return 0;
}


int matrixdiagonalsum(int *inputnums, int dimnum, int length)
{
    int sum = 0;
    for(int i = 0; i < length;){

        sum = sum + inputnums[i];
        i = i + dimnum + 1;
    }

    printf("%d\n", sum);

    return 0;
}
