#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "current-ranges.h"

TEST_CASE("converts two consecutive numbers into a csv row in the buffer supplied") {
    int currentAmps[] = {4, 5};
    char* rangeCSV = (char*)malloc(1024);
    detectRanges(currentAmps, sizeof(currentAmps) / sizeof(currentAmps[0]), rangeCSV);
    REQUIRE(strcmp(rangeCSV, "4-5, 2") == 0);
    free(rangeCSV);
}
