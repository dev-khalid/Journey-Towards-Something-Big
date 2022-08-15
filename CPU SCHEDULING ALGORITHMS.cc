#include<bits/stdc++.h>
using namespace std;

class Algorithms
{
public:
    void prioritySchedulingWithAT() {
        //Algorithm: Priority Scheduling Algorithm With Arrival Time
        //Criteria : Priority (Higher the number Higher the priority)  ; Mode: Preemptive

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
