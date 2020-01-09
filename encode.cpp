#include "encode.h"
#include <iostream>
#include <string>

using namespace std;

string barcode(int postal)
{
    // declaration of required variables
    string bar_code= "|";
    int sum, check_digit;

    // calculation of check digit
    sum= digitsum(postal);
    check_digit= 10 - (sum%10);

    // insertion of check digit encoding
    bar_code.insert(0, code(check_digit));
    bar_code.insert(0, " ");

    // insertion of zip code digits encoding
    while(postal>0)
    {
        bar_code.insert(0, code(postal%10));
        bar_code.insert(0, " ");

        postal= postal/10;
    }

    // removing the last " ", and inserting | to maintain encoding format
    bar_code.erase(0,1);
    bar_code.insert(0, "|");

    return bar_code;

}

string code(int digit)
{
    // array containing encoding information
    string encoding_table[] = { "11000", "00011", "00101", "00110", "01001", "01010", "01100", "10001", "10010", "10100" };

    string code = encoding_table[digit];

    return code;
}

int digitsum(int postal)
{
    int sum = 0;

    while(postal>0)
    {
        sum = sum + (postal % 10);
        postal= postal/10;
    }

    return sum;
}
