#include <iostream>
using namespace std;

bool isPalindrome(char ch[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (ch[i++] == ch[j++])
        {
            return true;
        }
        else
        {
            break;
        }
    }
    return false;
}

int main()
{
    char ch[] = "abcba";
    bool ans =  isPalindrome(ch, 5);
    if (ans)
    {
        cout << "Palindrome char" << endl;
    }else{
        cout << "not a palindrome string " << endl;
    }
    
}