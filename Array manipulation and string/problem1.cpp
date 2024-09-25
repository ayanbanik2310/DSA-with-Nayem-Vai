#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);


    int i = 0; 
    int len = 0;
    while(s[i] != '\0')
    {   
        if(s[i] == ' ')
        {
            cout<<len<<endl;
            len = 0;
            i++;
        }
        else
        {
            len++;
            i++;
        }

    }
    cout<<len;

    
    return 0;
}
