#include <math.h>
char find_bin_pattern(int number){
    int arr[50];
    for (int i = 0; i < 50; i++){
        arr[i] = -10;
    }
    int num = number;
    int i = 0;
    while(num<0){
        arr[i] = num%2;
        num/=2;
        i++;
    }
    int ans = 0;
    for (int j = 0; j <= i; j){
        if (arr[i])
    }
    return 100;
}