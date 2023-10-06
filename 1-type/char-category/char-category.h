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
    char letter[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k','K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
    for (int i = 0; i < 52; i++)
    {
        if (x == letter[i])
        {
            return true;
            break;
        }
    }
    return false;
}

bool is_punctuation(char x) {
    char punctuation[30] = {'!', '"', '#', '$', '%', '&', '(', ')', '*', '+', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~'};
    for (int i = 0; i < 30; i++)
    {
        if (x == punctuation[i])
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

