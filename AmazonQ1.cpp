/**
Input 4 6 -6 6 -6 
Output 1 0 1 0
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include<map>
using namespace std;

vector<int> getMaxCopiesAfterUpdates(const vector<int>& portalUpdates) {
    vector<int> result; // Vector to store maximum copies after each update
    map<int, int> inventory; // Using a map to track book IDs and their counts
    int maxCopies = 0;

    for (int update : portalUpdates) {
        if (update >= 0) {
            // Positive update: Add book to inventory
            int bookID = update;
				++inventory[bookID];
            maxCopies = max(maxCopies, inventory[bookID]);
        } else {
            // Negative update: Remove book from inventory
            int bookID = update;
            if (inventory.find(bookID) != inventory.end() && inventory[bookID] > 0) {
                --inventory[bookID];
            }
            maxCopies = max(maxCopies, inventory[bookID]);
        }

        result.push_back(maxCopies); // Store the maximum copies after each update
    }

    return result;
}

int main() {
    int n; // Number of portal updates
    cin >> n;

    vector<int> portalUpdates(n);
    for (int i = 0; i < n; i++) {
        cin >> portalUpdates[i];
    }

    vector<int> maxCopies = getMaxCopiesAfterUpdates(portalUpdates);

    for (int copies : maxCopies) {
        cout << copies << endl; // Print the maximum copies after each update
    }

    return 0;
}