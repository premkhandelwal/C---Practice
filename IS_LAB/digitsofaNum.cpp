#include <iostream>

using namespace std;

int getFirstDigit1(int num)
{
    while (num > 0)
    {
        if (num / 10 != 0)
        {

            num = num / 10;
        }
        else
        {
            break;
        }

        cout << "num " << num << endl;
    }
    return num;
}


char getFirstDigit2(int num)
{
    
    string s = to_string(num);
    cout<< "s " << s  <<endl;
    // string s1 = "audi";
    // cout<< "s1 " << s1.at(0) <<endl;
//    int i = std::stoi(str);  s.at(0);

}

int main()
{
    int num = 2134;
    // cout<< (num/10) <<endl;
    cout << getFirstDigit2(num);

    return 0;
}