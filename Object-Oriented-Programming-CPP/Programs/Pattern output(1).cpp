// 16. Convert Pattern to Required Format
//      a2b3->aabbb
//      a3b2d4e->aaabbddde
#include <iostream>
#include <string>
#include <cstring>
    using namespace std;
int main()
{
    char name[100];
    int a[50], i, j;
    cout << "Enter pattern input" << endl;
    cin >> name;
    for (i = 0, j = 0; i < (strlen(name)); i++, j++)
    {
        if (isalpha(name[i]))
        {
            if (isdigit(name[i + 1]))
            {
                a[j] = name[i + 1] - 48;
                continue;
            }
            else
            {
                a[j] = 1;
                continue;
            }
        }
        else if (isdigit(name[i]))
        {
            continue;
        }
        else
        {
            continue;
        }
    }
    for (i = 0, j = 0; i < (strlen(name)); i++, j++)
    {
        if (isdigit(name[i]))
        {
            continue;
        }
        while (a[j] > 0)
        {
            cout << name[i];
            a[j]--;
        }
    }
    cout << endl;
    return 0;
}