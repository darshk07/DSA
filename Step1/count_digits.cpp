// CPP program to illustrate
// Implementation of [] operator
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int temp = N;
        vector<int> myvector;
        int sum = 0;
        while (temp > 0)
        {
            myvector.push_back(temp % 10);
            temp = temp / 10;
        }
        for (int it = myvector.size()-1; it >= 0; it--)
        {   
            if (myvector[it]==0){
                continue;
            }
            else if (N%myvector[it] == 0)
                sum += 1;
            else
                continue;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends