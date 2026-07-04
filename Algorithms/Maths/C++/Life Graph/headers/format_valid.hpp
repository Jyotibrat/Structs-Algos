#pragma once

#include <string>

using namespace std;

// Checks whether the DOB is in one of the following formats:
// DD.MM.YYYY
// DD/MM/YYYY
// DD-MM-YYYY
// DD MM YYYY
bool validate_format(const string& DOB);