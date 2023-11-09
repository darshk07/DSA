#include <iostream>

using namespace std;

float *doSomething(char s[])
{
    float *q = new float[4];
    int k = 0;
    int length = 0;
    while (s[k] != '\0')
    {
        length++;
        k++;
    }
    int i = 0;
    int upperCaseLetters = 0;
    int lowerCaseLetters = 0;
    int symbols = 0;
    int digits = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowerCaseLetters++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upperCaseLetters++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digits++;
        }
        else
        {
            symbols++;
        }
        i++;
    }
    q[0] = (upperCaseLetters / (float)length) * 100;
    q[1] = (lowerCaseLetters / (float)length) * 100;
    q[2] = (digits / (float)length) * 100;
    q[3] = (symbols / (float)length) * 100;
    return q;
}

int main()
{
    char s[100];
    cin >> s;
    float *p = doSomething(s);
    printf("%.3f%% ", p[0]);
    printf("%.3f%% ", p[1]);
    printf("%.3f%% ", p[2]);
    printf("%.3f%% ", p[3]);

    return 0;
}
