#include "../headers/remove_spaces_extremes.hpp"

string trim(const string& DOB)
{
    // Find the first non-space character
    size_t start = DOB.find_first_not_of(' ');

    // If the string contains only spaces, return an empty string
    if (start == string::npos)
    {
        return "";
    }

    // Find the last non-space character
    size_t end = DOB.find_last_not_of(' ');

    // Return the substring without leading/trailing spaces
    return DOB.substr(start, end - start + 1);
}