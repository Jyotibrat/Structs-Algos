#include "../headers/day_mon_yr_extractor.hpp"

#include <string>

using namespace std;

int ext_num(const string& DOB, int which)
{
    switch (which)
    {
        case 1:
            return stoi(DOB.substr(0, 2));

        case 2:
            return stoi(DOB.substr(3, 2));

        case 3:
            return stoi(DOB.substr(6, 4));

        default:
            return -1;
    }
}