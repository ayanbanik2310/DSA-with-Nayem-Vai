#include<bits/stdc++.h>
using namespace std;


void size_of_word(string s, int (&v)[51], int &mxheight)
{
    int i = 0; 
    int len = 0;
    while(s[i] != '\0')
    {   
        if(s[i] == ' ')
        {
            v[len-1] = len;
            if(mxheight < len) mxheight = len;
            len = 0;
            i++;
        }
        else
        {
            len++;
            i++;
        }
    }

    if(mxheight < len) mxheight = len;
    v[len-1] = len;
}


void print_histogram(int mxheight, int v[51])
{
    for(int height = mxheight; height>0; height--)
    {
        for(int j = 0; j<=50; j++)
        {
            if(v[j]==0)
            {
                cout<<"  ";
            }
            else if(height <= v[j])
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<=50; i++) cout<<i<<" ";
}


int main()
{
    string str;
    getline(cin, str);

    int v[51] = {0};
    int mxheight = 0;

    size_of_word(str, v, mxheight);

    print_histogram(mxheight, v);
    
    return 0;
}
