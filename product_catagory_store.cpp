#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_multimap<string, string> productStore;

    productStore.insert({"Electronics", "Laptop"});
    productStore.insert({"Electronics", "Mobile"});
    productStore.insert({"Electronics", "Tablet"});
    productStore.insert({"Clothing", "T-Shirt"});
    productStore.insert({"Clothing", "Jeans"});
    productStore.insert({"Food", "Rice"});
    productStore.insert({"Food", "Oil"});
    productStore.insert({"Food", "Sugar"});

    string category;

    cout << "Enter category: ";
    cin >> category;

    auto range = productStore.equal_range(category);

    cout << "\nProducts in " << category << ":\n";

    for(auto it = range.first; it != range.second; ++it){
        cout << "-> " << it->second << endl;
    }

    return 0;
}
