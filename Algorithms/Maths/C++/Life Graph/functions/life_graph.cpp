#include "../headers/life_graph.hpp"

#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

long long life_graph_func(int day, int month, int year)
{
    stringstream ss;

    ss << day
       << setw(2) << setfill('0') << month;

    long long dayMonth = stoll(ss.str());

    long long value = dayMonth * year;

    string digits = to_string(value);

    ofstream fout("data/graph_data.txt");

    int startAge = 17;

    // Plot until age 100
    for(int age = startAge; age <= 100; age++)
    {
        int digit = digits[(age - startAge) % digits.length()] - '0';

        fout << age << " " << digit << "\n";
    }

    fout.close();

    return value;
}