#pragma once

#include <string>

using namespace std;

// Extracts day, month or year from a valid DOB.
//
// which = 1 -> Day
// which = 2 -> Month
// which = 3 -> Year
//
// Returns:
// Day, Month or Year as an integer.
// Returns -1 if 'which' is invalid.
int ext_num(const string& DOB, int which);