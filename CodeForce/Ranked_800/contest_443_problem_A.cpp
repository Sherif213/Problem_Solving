//
// Created by Shoul on 1/7/2025.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main() {
    string sentence;
    vector<char> duplicates;
    vector<int> freq (26,0);
    getline(cin, sentence);


    int count = 0;
    //cout << sentence.length();
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ' || sentence[i] == '{' || sentence[i] == ',') {
            continue;
        }
        else if (sentence[i] == '}') {
            break;
        }
        else {
            duplicates.push_back(sentence[i]);
        }

    }

    for (int i = 0; i < duplicates.size(); i++) {
        int position = duplicates[i] - 'a';
        if (freq[position] == 0) {
            freq[position]++;
        }
        else {
            count++;
        }
    }
    cout << duplicates.size() - count;


    return 0;
}


