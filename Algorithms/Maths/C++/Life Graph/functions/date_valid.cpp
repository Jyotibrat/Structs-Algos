#include "../headers/date_valid.hpp"

bool is_leap_year(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) ||
            (year % 400 == 0));
}

bool validate_date(int day, int month, int year)
{
    // Validate year
    if (year <= 0)
        return false;

    // Validate month
    if (month < 1 || month > 12)
        return false;

    // Validate day
    if (day < 1)
        return false;

    int max_days;

    switch (month)
    {
        case 2:
            max_days = is_leap_year(year) ? 29 : 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            max_days = 30;
            break;

        default:
            max_days = 31;
            break;
    }

    return day <= max_days;
}