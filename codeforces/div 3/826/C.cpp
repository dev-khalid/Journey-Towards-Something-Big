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
        vector<int> prefix(n);
        int psum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            psum += v[i];
            prefix[i] = psum;
        }
        int thick = n;
        for(int x = 2; x <= n; x++)
        {
            if((psum/x)*x==psum)
            {
                //this type of division is not fractional
                int found_sum = 0;
                int sum = psum/x;
                int last = 0;
                int segment_thickness = INT_MIN;
                bool updated = false;
                for(int i = 0; i < n; i++)
                {

                    if(prefix[i]==sum)
                    {

                        found_sum++;
                        int dif = i-last;
                        if(!updated) {
                                dif+=1;
                        }
                        segment_thickness = max(segment_thickness,dif);
                        last = i;
                        sum += (psum/x);
                        updated = true;

                    }
                }
                if(found_sum==x)
                {
                    thick = min(thick,segment_thickness);
                }
            }
        }
        cout << thick << endl;
    }
}

