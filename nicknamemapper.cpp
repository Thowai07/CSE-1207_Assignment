#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_multimap<string, string> nicknameMapper;

    nicknameMapper.insert({"Robert", "Rob"});
    nicknameMapper.insert({"Robert", "Bob"});
    nicknameMapper.insert({"Robert", "Bobby"});
    nicknameMapper.insert({"William", "Will"});
    nicknameMapper.insert({"William", "Bill"});
    nicknameMapper.insert({"William", "Billy"});

    string search;

    cout << "Enter a name: ";
    cin >> search;

    auto range = nicknameMapper.equal_range(search);

    if (range.first == range.second) {
        cout << "No nickname found!" << endl;
    }
    else {
        cout << "Nicknames for " << search << ":" << endl;

        for (auto it = range.first; it != range.second; ++it) {
            cout << " -> " << it->second << endl;
        }
    }

    return 0;
}
