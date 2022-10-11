
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int operation = 0;
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        bool found = true;
        for(int seg = 2; seg<= n; seg<<=1)
        {
            //cout << "Segment : " << seg << endl;
            int half = seg/2;
            int till = (n/seg);
                for(int j = 0; j < n; j+=seg)
                {
                    //cout << "\t\t";
                    //cout << "Iterating : " << j << endl;

                    if(abs(v[j+half]-v[j])==half)
                    {
                        //ok
                        if(v[j]>v[j+half])
                        {
                            //cout << "\t\t\tChanging: " << v[j] << " " << v[j+half]<<endl;
                            operation++;
                            swap(v[j+half],v[j]);
                        }
                    }
                    else
                    {
                        //cout << "Breaking for index: " << j << " " << j+half << " values: " << v[j] << " " << v[j+half] << endl;
                        found = false;
                        break;
                    }
                }
            if(!found) break;
        }
        cout << (found ? operation : -1) << endl;
    }
}

