#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[20] = "Good";
    char s2[10] = "Morning";

    strcat(s1,s2);
    cout<<"From strcat Method : "<<s1<<endl;

    for(int i=4; i<10; i++)
    {
        s1[i] = NULL;
    }

    strncat(s1,s2, 3);
    cout<<"From strncat Method : "<<s1;

    return 0;
}