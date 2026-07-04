#include <iostream>
#include <string>
#include <cstdlib>

#include "headers/remove_spaces_extremes.hpp"
#include "headers/format_valid.hpp"
#include "headers/date_valid.hpp"
#include "headers/day_mon_yr_extractor.hpp"
#include "headers/life_graph.hpp"

using namespace std;

int main()
{
    string DOB;
    int day = 0, month = 0, year = 0;

    bool valid = false;

    // Allow the user up to 3 attempts
    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout << "Enter your Date of Birth (DD/MM/YYYY): ";
        getline(cin, DOB);

        // Remove leading and trailing spaces
        DOB = trim(DOB);

        // Check format
        if (!validate_format(DOB))
        {
            cout << "\nInvalid Date Format!\n";

            if (attempt != 3)
            {
                cout << "Please try again.\n\n";
            }

            continue;
        }

        // Extract day, month and year
        day = ext_num(DOB, 1);
        month = ext_num(DOB, 2);
        year = ext_num(DOB, 3);

        // Validate the extracted date
        if (!validate_date(day, month, year))
        {
            cout << "\nInvalid Date!\n";

            if (attempt != 3)
            {
                cout << "Please try again.\n\n";
            }

            continue;
        }

        valid = true;
        break;
    }

    if (!valid)
    {
        cout << "\nYou have exceeded the maximum number of attempts.\n";
        return 0;
    }

    cout << "\n=================================\n";
    cout << "        VALID DATE OF BIRTH\n";
    cout << "=================================\n";

    cout << "Day   : " << day << endl;
    cout << "Month : " << month << endl;
    cout << "Year  : " << year << endl;

    // Generate graph data and calculate the Life Graph value
    long long graphValue = life_graph_func(day, month, year);

    cout << "\nLife Graph Value : " << graphValue << endl;

    cout << "\nGenerating graph...\n";

#ifdef _WIN32
    int status = system("py plot\\graph.py");
#else
    int status = system("python3 plot/graph.py");
#endif

    if (status != 0)
    {
        cout << "\nUnable to launch the graph.\n";
        cout << "Please make sure Python and matplotlib are installed.\n";
    }

    return 0;
}