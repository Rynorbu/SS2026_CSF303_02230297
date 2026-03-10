#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {
    // vector named using student number
    vector<int> v02230297(6);

    // input values into the vector
    cout << "Enter 6 Values: ";
    for (int i = 0; i < 6; i++) {
        cin >> v02230297[i];
    }

    cout << "\n\n";

    // display original values
    cout << "Original Values: ";
    for (int x : v02230297) {
        cout << x << " ";
    }
    cout << "\n\n";

    // sort vector
    sort(v02230297.begin(), v02230297.end());
    // display sorted values
    cout << "Sorted Values: ";
    for (int x : v02230297) {
        cout << x << " ";
    }
    cout << "\n\n";

    // find minimum and maximum
    int minval;
    int maxval;
    minval = *min_element(v02230297.begin(), v02230297.end());
    maxval = *max_element(v02230297.begin(), v02230297.end());

    cout << "Minimum Value: " << minval << "\n\n";
    cout << "Maximum Value: " << maxval << "\n\n";

    // find sum
    int sum;
    sum = accumulate(v02230297.begin(), v02230297.end(), 0);
    cout << "Sum: " << sum << "\n\n";

    // calculate average
    double average;
    average = static_cast<double>(sum) / v02230297.size();

    cout << "Average: " << fixed << setprecision(2) << average << "\n\n";

    // remove below average values
    v02230297.erase
        (remove_if(v02230297.begin(), v02230297.end(),
        [average](int x) { return x < average; }), 
        v02230297.end()
    );

    // display final vector
    cout << "After removing below average: " << "\n";
    for (int x : v02230297) {
        cout << x << " ";
    }

    cout << "\n";


  return 0;
}