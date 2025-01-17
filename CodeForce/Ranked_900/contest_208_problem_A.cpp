//
// Created by Shoul on 1/17/2025.
//
#include <iostream>
#include<vector>

using namespace std;



int main() {

    string sentence;
    cin >> sentence;
    vector<char>song;

    for (int i = 0; i < sentence.length(); i++) {
        if (i + 2 < sentence.length() && sentence[i] == 'W' && sentence[i+1] == 'U' && sentence[i+2] == 'B') {
            if (!song.empty() && song.back() != ' ') {
                song.push_back(' ');
            }

            i += 2;
            continue;
        }
        else {
            song.push_back(sentence[i]);

        }

    }

    for (int i = 0; i < song.size(); i++) {
        cout << song[i];
    }
    return 0;
}


