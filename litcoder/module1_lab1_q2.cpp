#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int checker(int a, int b, vector<int> arr)
{
    int numZero = 0;
    int numOne = 0;
    for (int i = a; i <= b; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }
        else
        {
            numOne++;
        }
    }
    if (numZero == numOne)
        return 2;
    else if (numZero > numOne)
        return 0;
    else
        return 1;
}

int main()
{
    vector<int> arr = {};
    string input;
    getline(cin, input); // Read the entire line as a string
    istringstream iss(input);
    int x;
    while (iss >> x)
    {
        arr.push_back(x);
    }

    int start = 0;
    int end = arr.size() - 1;
    int temp = 0;
    while (temp != 2)
    {
        temp = checker(start, end, arr);
        if (temp == 1)
        {
            if (arr[start] == 0)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        else if (temp == 0)
        {
            if (arr[start] == 0)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        else
        {
            break;
        }
    }
    cout << end - start + 1 << endl;
}
