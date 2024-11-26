#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int maxLength = 256;
int indexOf(const char s1[], const char s2[])
{
    int i = 0, k = -1,L1=0,L2=0,j=0,flag=0,s=0;
    for (i=0; s1[i] != '\0'; i++)
    {
    }
    L1 = i;
    for (i=0;s2[i] !='\0';i++)
    {
    }
    L2 = i;
    for (i = 0; i < L2; i++)
    {
        for (; k < L1;)
        {
            k++;
            if (s1[k] == s2[i])
            {
                j++;
                break;
            }
            else
            {
                flag = 1;
                j = 0;
                k = -1;
                if (flag == 1)
                {
                    s = i+1;
                }
                break;
            }
        }
        if (j == L1)
            return s;
    }
    return -1;
}
int main() {
    char s1[100]="\0";
    cin.get(s1,100);
    getchar();
    char s2[100]="\0";
    cin.get(s2,100);
    cout<<indexOf(s1, s2);
    return 0;
}
