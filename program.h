#include <bits/stdc++.h>
using namespace std;

class HeartRate
{
public:
    HeartRate(string, string, int, int, int);
    void setFirstName(string);
    void setLastName(string);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void print();
    int getDay();
    int getMonth();
    int getYear();
    int getAge();
    int getMaximumHeartRate();
    double getTargetHeartRateFrom();
    double getTargetHeartRateTo();
    //
private:
    string first, last;
    int day, month, year;
};
