int icecream(int x){
    if (x == 0) return 0;
    for (int i = 0; i <= (x/3); i++)
    {
        for (int j = 0; j <= (x/5); j++)
        {
            if (5*j + 3*i == x) 
            {
                return 1;
            } 
        }
    }
    return 0;
}