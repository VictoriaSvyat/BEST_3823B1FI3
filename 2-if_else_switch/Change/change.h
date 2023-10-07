long long change(int a, int b, int c, int d){
    /*long long cost;
    cost = a*100 + b;
    long long pay;
    pay = c*100 + d;
    if (pay < cost)
    {
        return -1;
    }
    else
    {
        return pay-cost;
    }*/
    unsigned long long cost;
    cost = a*100 + b;
    unsigned long long pay;
    pay = c*100 + d;
    unsigned long long ans;
    if (pay < cost)
    {
        return -1;
    }
    else
    {
        ans = pay-cost;
        return ans;
    }
}