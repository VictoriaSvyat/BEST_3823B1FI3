#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int maxmin(int input[], int size){
    int array[15];
    for (int i = 0; i < 15; i++)
        array[i] = -999999;
    int ans = 0;
    int maximal;
    if (input[0] < input[1])
        maximal = input[0];
    if (input[size-2] > input[size-1])
        array[0] = input[size-1];
    for (int i = 1; i < size-1; i++){
        if ((input[i-1] > input[i]) && (input[i] < input[i+1])){
            ans++;
            array[ans] = input[i];
        }
    }
    for (int i = 0; i <= ans; i++)
        if (input[i]  < maximal)
            maximal = input[i]; 
    return maximal;
}