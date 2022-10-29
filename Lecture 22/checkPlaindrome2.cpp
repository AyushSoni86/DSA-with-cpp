#include <iostream>
using namespace std;

bool isPalindrome(char ch[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if ((ch[i] != ch[j])
         || (ch[i] + 32 != ch[j])
         || (ch[i] != ch[j] + 32))
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char ch[] = "abcbA ";
    bool ans = isPalindrome(ch, 5);
    if (ans)
    {
        cout << "Palindrome char" << endl;
    }
    else
    {
        cout << "not a palindrome string " << endl;
    }
}