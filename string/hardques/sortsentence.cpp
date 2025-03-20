#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int count = 0, index = 0;

        // Parsing each word
        while (index < s.size()) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0'; // Get position from last character
                temp.pop_back(); // Remove position digit from the word
                ans[pos] = temp; // Place the word in the correct position
                temp.clear(); // Clear temp for the next word
                count++; // Increment word count
            } else {
                temp += s[index]; // Build the word
            }
            index++; // Move to the next character
        }

        // Handle the last word (since there is no space after the last word)
        int pos = temp[temp.size() - 1] - '0'; // Get position of the last word
        temp.pop_back(); // Remove position digit
        ans[pos] = temp; // Place the last word
        count++; // Increment word count

        // Construct the final sorted sentence
        temp.clear();
        for (int i = 1; i <= count; i++) {
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back(); // Remove trailing space

        return temp; // Return the final sorted sentence
    }
};

int main() {
    Solution sol;
    string input;

    // Taking input from the user
    cout << "Enter a shuffled sentence with words ending in positions (e.g., 'is2 sentence4 This1 a3'): ";
    getline(cin, input); // Allows spaces in input

    string result = sol.sortSentence(input);
    cout << "The sorted sentence is: " << result << endl;

    return 0;
}
