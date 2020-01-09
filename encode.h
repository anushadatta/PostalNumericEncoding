#include <string.h>
#include <iostream>

using namespace std;

// takes zip code, postal, & returns full bar code as string (incl. frame bars)
string barcode(int postal);

// encodes zip code digit into string with 5 chars acc. to encoding table
string code(int digit);

// returns sum of all five digits of the zip code
int digitsum(int postal);
