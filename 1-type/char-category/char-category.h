#include <stdbool.h>


bool is_digit(char x) {
    char digit[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < 10; i++)
    {
        if (x == digit[i])
        {
            return true;
            break;
        }
    }
    return false;
}

bool is_letter(char x) {
    for (int i = 65; i <= 90; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    return false;
}

bool is_punctuation(char x) {
    for (int i = 32; i <= 47; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    for (int i = 58; i <= 64; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    for (int i = 91; i <= 95; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    for (int i = 123; i <= 127; i++)
    {
        if (i == (int)(x))
        {
            return true;
            break;
        }
    }
    return false;
}
int get_ascii_code(char first, char second, char third) {
    int ans[3] = {0,0,0};
    int ascii_first = first;
    int ascii_second = second;
    int ascii_third = third;

    ans[0] = ascii_first;
    ans[1] = ascii_second;
    ans[2] = ascii_third;
    return ans[0]*1000000 + ans[1]*1000 + ans[2];
}

