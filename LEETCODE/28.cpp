#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        if (pos == std::string::npos)
            return -1;
        return pos;
    }
};