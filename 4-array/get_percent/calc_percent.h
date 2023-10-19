#include <math.h>

int calc_percent(int matrix[], int size){
    int minim = matrix[0];
    int maxim = matrix[0];
    float r = 0;
    long long count = 0;
    for (int i = 1; i < size; i++)
    {
        if (matrix[i] > maxim) maxim = matrix[i];
        if (matrix[i] < minim) minim = matrix[i];
    }
    r = (maxim - minim)/2;
    for (int i = 1; i < size; i++)
    {
        if (matrix[i] > r) 
            count++;
    }
    return (count/size)*100;
}