long fib(int m){
    int f0 = 0;
    int f1 = 1;
    int help = 0;
    long long sum = 0;
    while (f1 <= m){
        sum += sum + f1;
        help = f1;
        f1 = f0 + f1;
        f0 = help;
    }
    return sum;
}