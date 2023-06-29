//solution leetcode q no. 186

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s)
{
    int s1 = 0, e = s.length() - 1;
    while (s1 <= e)
    {
        swap(s[s1++],s[e--]);
    }
    return s;
}

string reverseStr(string s)
{
    int i = 0, n = s.length();
    string temp="", finalStr = "";
    while (i <= n)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            temp.push_back(s[i]);
        }
        else
        {

            temp = reverseWord(temp);
            
            if (s[i] == ' ' && temp.empty()==0)
            {
                temp.push_back(' ');
            }
            int j = 0;
            while (j < temp.length())
            {
                finalStr.push_back(temp[j]);
                j++;
            }
            temp = "";
        }
        i++;
    }
    if(finalStr[finalStr.length()-1]==' '){
        finalStr.pop_back();
    }
    return finalStr;
}

int main()
{
    string str = " The sky is  blue  ";
    cout << str << endl;

    str = reverseStr(str);
    cout << str << endl;
    cout<< str.length();
    return 0;
}