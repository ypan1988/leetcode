#include <cmath>
#include <string>

using namespace std;

class Solution {
 public:
  string dayOfTheWeek(int day, int month, int year) {
    tm *time_input = new tm{0, 0, 0, day, month - 1, year - 1900};
    time_t time_tmp = mktime(time_input);
    tm *time_output = localtime(&time_tmp);

    string days[7] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                      "Thursday", "Friday", "Saturday"};
    return days[time_output->tm_wday];
  }
};