#include "program.h"

HeartRate::HeartRate(string fname, string lname, int d, int m, int y)
{
    setFirstName(fname);
    setLastName(lname);
    setDay(d);
    setMonth(m);
    setYear(y);
}

void HeartRate::print()
{
    cout << "The user name is: " << last << ", " << first << endl
         << "Date of birth: " << getDay() << " / " << getMonth() << " / " << getYear() << endl
         << "His/Her age: " << getAge() << endl
         << "your maximum heart rate in beats per minute is: " << getMaximumHeartRate() << endl
         << "His/Her Target Heart Rate from " << getTargetHeartRateFrom()
         << " To " << getTargetHeartRateTo() << endl;
}

double HeartRate::getTargetHeartRateTo()
{
    return 0.85 * getMaximumHeartRate();
}

double HeartRate::getTargetHeartRateFrom()
{
    return 0.5 * getMaximumHeartRate();
}

int HeartRate::getMaximumHeartRate()
{
    return 220 - getAge();
}

int HeartRate::getAge()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int this_year = 1900 + ltm->tm_year;
    return this_year - year;
}

int HeartRate::getDay() { return day; }
int HeartRate::getYear() { return year; }
int HeartRate::getMonth() { return month; }

void HeartRate::setFirstName(string fname)
{
    first = fname;
}

void HeartRate::setLastName(string lname)
{
    last = lname;
}

void HeartRate::setDay(int d)
{
    day = d;
}
void HeartRate::setMonth(int m)
{
    month = m;
}
void HeartRate::setYear(int y)
{
    year = y;
}