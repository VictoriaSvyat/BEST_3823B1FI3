bool compare_double(double x, double y) {
    if (x < y)
    {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    if ((x - y) <= 0.00000001)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int get_nearest_int(double x) {
    float x_float, razn;
    int x_int;
    x_int = x;
    x_float = x_int;
    razn = x - x_float;
    if (x > 0)
    {
        if ( razn >= 0,5)
        {
            x = x + 0.5;
        }
        else
        {
            x = x - 0.5;
        }
    }
    else
    {
        if ( razn >= 0,5)
        {
            x = x - 0.5;
        }
        else
        {
            x = x + 0.5;
        }
    }
    x_int = x;
    return x_int;
}


double get_fractional(double x) {
    float x_float;
    int x_int;
    if (x > 0)
    {
        x_int = x;
        x_float = x_int;
        return (x - x_float);
    }
    else
    {
        x_int = x - 1;
        x_float = x_int;
        x = x - x_float;
        return x;
    }
}
