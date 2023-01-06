#include <bits/stdc++.h>
// Name = Ram Patidar
// Enrollment No. = 0827CS201196

using namespace std;
struct process_struct
{
    int at;                          // Arrival Time
    int bt;                          // CPU Burst time
    int ct, wt, tat, rt, start_time; // Completion, waiting, turnaround, response time
} ps[100];                           // Array of structure to store the info of each process.

int main()
{
    int n;
    cout << "Enter total number of processes: ";
    cin >> n;
    float sum_tat = 0, sum_wt = 0, sum_rt = 0;

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Process " << i << " Arrival Time: ";
        cin >> ps[i].at;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Process " << i << " Burst Time: ";
        cin >> ps[i].bt;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ps[j].at > ps[j + 1].at)
            {
                int temp = ps[j].at;
                ps[j].at = ps[j + 1].at;
                ps[j + 1].at = temp;

                temp = ps[j].bt;
                ps[j].bt = ps[j + 1].bt;
                ps[j + 1].bt = temp;
            }
        }
    }

    // calculation
    for (int i = 0; i < n; i++)
    {
        ps[i].start_time = (i == 0) ? ps[i].at : max(ps[i].at, ps[i - 1].ct);
        ps[i].ct = ps[i].start_time + ps[i].bt;
        ps[i].tat = ps[i].ct - ps[i].at;
        ps[i].wt = ps[i].tat - ps[i].bt;
        ps[i].rt = ps[i].wt;

        sum_tat += ps[i].tat;
        sum_wt += ps[i].wt;
        sum_rt += ps[i].rt;
    }

    // Output
    cout << "\nProcess No.\tAT\tBurst Time\tCT\tTAT\tWT\tRT\n";
    for (int i = 0; i < n; i++)
        cout << i << "\t\t" << ps[i].at << "\t" << ps[i].bt << "\t\t" << ps[i].ct << "\t" << ps[i].tat << "\t" << ps[i].wt << "\t" << ps[i].rt << endl;
    cout << endl;

    cout << "\nAverage Turn Around time= " << sum_tat / n;
    cout << "\nAverage Waiting Time= " << sum_wt / n;
    cout << "\nAverage Response Time= " << sum_rt / n;

    return 0;
}
