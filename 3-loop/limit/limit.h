#include <math.h>

double limit(double eps, int n_max){
    long double ans, ans1, minim;
    if (n_max == 1) return 1 / sqrt(1*1+1);
    else{
        for (int i = 1; i<n_max; i++){
            ans = i / sqrt(i*i+i);
            ans1 = (i+1) / sqrt((i+1)*(i+1)+(i+1));
            if ((ans1 - ans) <= eps){
                minim = n_max / sqrt(n_max*n_max+n_max);
                if (minim > ans1){
                    minim = ans1;
                    return minim;
                } 
                else return minim;
            }
                
        }
    }
    
}