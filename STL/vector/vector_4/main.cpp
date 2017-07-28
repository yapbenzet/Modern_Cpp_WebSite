#include <iostream>
#include <vector>

using namespace std;

vector<double> between(vector<double> values,
                       double low, double high)
{
    vector<double> result;
    for (int i = 0; i < values.size(); i++)
        if (low <= values[i] && values[i] <= high)
            result.push_back(values[i]);
    return result;
}

int main()
{
    vector<double> salaries(5);
    salaries[0] = 35000.0;
    salaries[1] = 63000.0;
    salaries[2] = 48000.0;
    salaries[3] = 78000.0;
    salaries[4] = 51500.0;

    vector<double> midrange_salaries = between(salaries, 45000.0, 65000.0);

    for (int i = 0; i < midrange_salaries.size(); i++)
        cout << midrange_salaries[i] << "\n";

    return 0;
}
