long long change(int a, int b, int c, int d){
    unsigned long long cost;
    cost = a*100 + b;
    unsigned long long pay;
    pay = c*100 + d;
    if (pay < cost)
    {
        return -1;
    }
    else
    {
        return pay-cost;
    }
}