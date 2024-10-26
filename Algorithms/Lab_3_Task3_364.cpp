#include <bits/stdc++.h>
using namespace std;
struct Activity
{   int start;
    int finish;
};
bool activityCompare(Activity s1, Activity s2)
{
    return (s1.finish < s2.finish);
}
void printMaxActivities(vector<Activity> &activities)
{
    sort(activities.begin(), activities.end(), activityCompare);
    cout << "Selected activities are: " << endl;
    int i = 0;
    cout << "(" << activities[i].start << ", "
    << activities[i].finish << ")" << endl;

    for (size_t j = 1; j < activities.size(); j++)
    {
        if (activities[j].start >= activities[i].finish)
        {
            cout << "(" << activities[j].start << ", "
            << activities[j].finish << ")" << endl;
            i = j;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;

    vector<Activity> activities(n);
    cout << "Enter the start and finish times of the activities:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> activities[i].start >> activities[i].finish;
    }

    printMaxActivities(activities);

    return 0;
}
