//acwing3370牛年
#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<string, int> id = {
    {"Ox", 0}, {"Tiger", 1}, {"Rabbit", 2},
    {"Dragon", 3}, {"Snake", 4}, {"Horse", 5}, 
    {"Goat", 6}, {"Monkey", 7}, {"Rooster", 8}, 
    {"Dog", 9}, {"Pig", 10}, {"Rat", 11}
};


int main()
{
    unordered_map<string, int> p;
    p["Bessie"] = 0;

    int n;
    cin >> n;
    while (n -- )
    {
        string s[8];
        for (int i = 0; i < 8; i ++ ) cin >> s[i];

        if (s[3] == "previous")
        {
            int x = p[s[7]], y = id[s[4]];
            int r = ((x - y) % 12 + 12) % 12;
            if (!r) r = 12;
            p[s[0]] = x - r;
        }
        else
        {
            int x = p[s[7]], y = id[s[4]];
            int r = ((y - x) % 12 + 12) % 12;
            if (!r) r = 12;
            p[s[0]] = x + r;
        }
    }

    cout << abs(p["Elsie"]) << endl;
    return 0;
}
