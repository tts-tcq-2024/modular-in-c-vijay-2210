#include <stdio.h>
#include "color_codes.h"
#include "number_to_pair_tests.h"
#include "pair_to_number_tests.h"

int main() { 
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
