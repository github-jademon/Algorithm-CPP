#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str;
    
    cin>>str;

    sort(str.begin(), str.end());
    cout << str << endl;
    
    sort(str.begin(), str.end(), std::greater<int>());
    cout << str << endl;
}
