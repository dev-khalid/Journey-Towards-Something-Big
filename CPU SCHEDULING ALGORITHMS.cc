#include<bits/stdc++.h>
using namespace std;

class Algorithms
{
public:
    int n;
    int AT[50],BT[50],P[50],CT[50],TAT[50],WT[50],BT2[50];
    struct ProcessInformation
    {
        int pid,priority,arrival,burst;
    };

    ProcessInformation Data[50];
    void custom_swap(int x,int y)
    {
        ProcessInformation temp = Data[x];
        Data[x] = Data[y];
        Data[y] = temp;
    }
    void SortArrival(int n)
    {
        for(int i = 1; i < n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                if(Data[i].arrival > Data[j].arrival)
                {
                    custom_swap(i,j);
                }
            }
        }
    }
    void prioritySchedulingWithAT()
    {
        //Algorithm: Priority Scheduling Algorithm With Arrival Time
        //Criteria : Priority (Lower the number Higher the priority)  ; Mode: Preemptive
        //need a separate class to implement all of this





        cout << "Enter Number of processes: ";
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cout << "Enter Process " << i << "'s Arrival Time and Burst Time and Priority: ";
            cin >> AT[i] >> BT[i] >> P[i];
            BT2[i] = BT[i];
            Data[i].pid = i,Data[i].arrival = AT[i],Data[i].burst = BT[i];
        }
        SortArrival(n);
        int time, cnt = n;
        for(time = 0; cnt > 0; time++)
        {
            int job = FindJob(time,n);
            if(job == -1) continue;
            BT[job]--; //job will be executed by one unit of time
            if (BT[job]==0)
            {
                cnt--;
                CT[job] = time + 1; //why this time + 1?
            }
        }
        double Avwt = 0,Avtat ;
        for(int i = 1; i <= n; i++)
        {
            TAT[i] = CT[i] - AT[i];
            WT[i] = TAT[i] - BT2[i];
            Avwt += WT[i];
            Avtat += TAT[i];

        }
        Avwt /= n;
        Avtat /= n;
        cout << "Process\tArrival Time\tBurst Time\t Turnaround Time\tWating Time\n\n";
        for (int i = 1; i <= n; i++)
        {
            int id = Data[i].pid;
            cout << id << "\t"<< AT[id] <<"\t"<<BT2[id]<<"\t"<<TAT[id]<<"\t"<<WT[id]<<endl;
        }
        cout << "Average waiting time : " << Avwt << endl;
        cout << "Average turnaround time : " << Avtat << endl;
    }
    void firstFit()
    {
        //Algorithm : It finds the first space available in memory for allocation
        int n,i,j;
        int B[50],P[50];
        cout << "Enter the number of block: ";
        cin >> n;
        cout << "\nEnter size of all " << n << " blocks.\n";
        for(i = 1; i <= n; i++)
        {
            cin >> B[i];
        }
        int m;
        cout << "Enter the number of Process: ";
        cin >> m;
        for(i = 1; i <= m; i++)
        {
            cout << "Resource required for process " << i << " is : ";
            cin >> P[i];
        }

        for(i = 1; i <= m; i++)
        {
            //for each process check for the biggest space available in the memory
            int id = -1;
            for(j = 1; j <= n; j++)
            {
                if(B[j] >= P[i])
                {
                    id = j;
                    best = B[j];
                }
            }
            if(id!=-1)
            {
                cout << "Process " << i << " is allocated to block : " << id << endl;
                B[id] -= P[i]; //occupying the space
            }
            else
            {
                cout << "Process " << i << " has not been allocated . \n";
            }
        }


    }
    void bestFit()
    {
        //Algorithm : It finds the smallest space for memory allocation
        int n,i,j;
        int B[50],P[50];
        cout << "Enter the number of block: ";
        cin >> n;
        cout << "Enter size of all " << n << " blocks.";
        for(i = 1; i <= n; i++)
        {
            cin >> B[i];
        }
        int m;
        cout << "Enter the number of Process: ";
        cin >> m;
        for(i = 1; i <= m; i++)
        {
            cout << "Resource required for process " << i << " is : ";
            cin >> P[i];
        }

        for(i = 1; i <= m; i++)
        {
            //for each process check for the biggest space available in the memory
            int best = INT_MAX,id = -1;
            for(j = 1; j <= n; j++)
            {
                if(B[j] >= P[i] && B[j] < best)
                {
                    id = j;
                    best = B[j];
                }
            }
            if(id!=-1)
            {
                cout << "Process " << i << " is allocated to block : " << id << endl;
                B[id] -= P[i]; //occupying the space
            }
            else
            {
                cout << "Process " << i << " has not been allocated . \n";
            }
        }

    }
    void worstFit()
    {
        //Algorithm : It finds the biggest space for memory allocation
        int n,i,j;
        int B[50],P[50];
        cout << "Enter the number of block: ";
        cin >> n;
        cout << "Enter size of all " << n << " blocks.";
        for(i = 1; i <= n; i++)
        {
            cin >> B[i];
        }
        int m;
        cout << "Enter the number of Process: ";
        cin >> m;
        for(i = 1; i <= m; i++)
        {
            cout << "Resource required for process " << i << " is : ";
            cin >> P[i];
        }

        for(i = 1; i <= m; i++)
        {
            //for each process check for the biggest space available in the memory
            int best = -1,id = -1;
            for(j = 1; j <= n; j++)
            {
                if(B[j] >= P[i] && B[j] > best)
                {
                    id = j;
                    best = B[j];
                }
            }
            if(id!=-1)
            {
                cout << "Process " << i << " is allocated to block : " << id << endl;
                B[id] -= P[i]; //occupying the space
            }
            else
            {
                cout << "Process " << i << " has not been allocated . \n";
            }
        }



    }

};

int main()
{

    Algorithms algo;
    algo.bestFit();
}
