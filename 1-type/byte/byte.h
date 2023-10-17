unsigned char max_byte(unsigned short) {
    int num = int(max_byte);
    int ans;
    int num_massive[4*num] = {0};
    int i = 0;
    while (num > 0)
    {
        num_massive[i] = num%2;
        num = num/2;
        i=i+1;
    }
    return 0;}
