#include <math.h>
int swap_Endians(int value)
{
    int leftmost_byte;
    int left_middle_byle;
    int right_middle_byte;
    int rightmost_byte;
    int result;
    leftmost_byte = (value & 0x000000FF) >> 0;
    left_middle_byle = (value & 0x0000FF00) >> 8;
    right_middle_byte = (value & 0x00FF0000) >> 16;
    rightmost_byte = (value & 0xFF000000) >> 24;
    leftmost_byte <<= 24;
    left_middle_byle <<= 16;
    right_middle_byte <<= 8;
    rightmost_byte <<= 0;
    result = (leftmost_byte | left_middle_byle | right_middle_byte | rightmost_byte);
    return result;
}
unsigned int little_big_convert(unsigned int input){ 
    int result;
    result = swap_Endians(input);
    return result;
}