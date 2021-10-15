/*A program to perform various operations on strings such as-
a) Length of string b) concatenation
c) reverse a string d) copy a string  */
#include <iostream>
using namespace std;
class str // str string class
{
    int count;
    int len, temp;

public:
    int stringlen(string);             // a)Function to find length of a string..
    string stringcat(string, string);  // b)Function to concatenate two strings..
    string stringrev(string);          // c)Function to reverse a string..
    void stringcopy(string &, string); // d)Function to copy second string into the first one..
};

int str::stringlen(string s) // a)
{
    count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}

string str::stringcat(string st1, string st2) // b)
{
    return (st1 + st2);
}

void str::stringcopy(string &st1, string st2) // d)
{
    st1 = st2;
}

string str::stringrev(string st) // c)
{
    len = stringlen(st);
    temp = 0;
    for (int i = 0; i < len / 2; i++)
    {
        temp = st[i];
        st[i] = st[len - i - 1];
        st[len - i - 1] = temp;
    }
    return (st);
}
int main()
{
    str s;
    cout << s.stringlen("No one Bad is ever truly Bad and no one Good is ever truly Good"); // returns length of the passed string.
    cout << endl;
    cout << s.stringcat("BatmanV", "superman"); // concatinates 2 given strings..
    string s1;
    string s2 = "Why so serious?";
    s.stringcopy(s1, s2); // copies s2 to s1;
    cout << endl
         << s1;
    cout << endl
         << s.stringrev(s1); // returns the reverse of the passed string..
    return 0;
}