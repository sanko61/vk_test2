#include <iostream>
#include <string.h>

#include <set>
using namespace std;

int main() {
    std::set<std::string> vocabulary;
    const char str_exit[] = "exit";

    string str;

    while (1) {
        getline(cin, str);
        if (str == "exit") {
            break;
        }

        if (false == vocabulary.insert(str).second) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
