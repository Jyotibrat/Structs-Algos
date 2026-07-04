#include "../headers/format_valid.hpp"

#include <cctype>

using namespace std;

bool validate_format(const string& DOB)
{
    // Valid formats have exactly 10 characters
    if (DOB.length() != 10)
        return false;

    // Check that the day contains exactly 2 digits
    if (!isdigit(DOB[0]) || !isdigit(DOB[1]))
        return false;

    // Check that the month contains exactly 2 digits
    if (!isdigit(DOB[3]) || !isdigit(DOB[4]))
        return false;

    // Check that the year contains exactly 4 digits
    if (!isdigit(DOB[6]) || !isdigit(DOB[7]) ||
        !isdigit(DOB[8]) || !isdigit(DOB[9]))
        return false;

    // Store the first separator
    char separator = DOB[2];

    // Check whether it is an allowed separator
    if (separator != '.' &&
        separator != '/' &&
        separator != '-' &&
        separator != ' ')
    {
        return false;
    }

    // Second separator must be the same
    if (DOB[5] != separator)
        return false;

    return true;
}