#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> i = {"one", "one", "two", "two"};
    sort(i.begin(), i.end());
    auto iter = unique(i.begin(), i.end());
    //cout<<iter;
    i.erase(iter, i.end());
    for (const auto &s : i){
        std::cout << s << " ";
    }
    cout << endl;

    return 0;
}