int icecream(int x){

    if((x%3 == 0 || x%5 == 0 || x%(3+5) == 0)&& (x != 0)) return 1;
    else return 0;
}