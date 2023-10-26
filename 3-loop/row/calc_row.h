long long calc_row(int n, long long k){
    unsigned long long ans = 0;
    int flag = 0;
    if (k > 0){
        for (int i = 1; i <= n; i++)
            ans += k*i;
        return ans; 
    }
    else {
        k = -k;
        for (int i = 1; i <= n; i++)
            ans += k*i;
        return - ans;
    }   
    return 0;
}