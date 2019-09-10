#include <bits/stdc++.h>

using namespace std;

struct people {
    string name;
    int score;
};

bool acompare(people lhs, people rhs) { return lhs.score > rhs.score; }

int main() {
    fstream inputFile;
    inputFile.open("results.txt");

    vector<people> winners;
    while(!inputFile.eof()) {
        people temp;

        inputFile >> temp.name;
        inputFile >> temp.score;

        winners.push_back(temp);
    }
    inputFile.close();
    sort(winners.begin(), winners.end(), acompare);

    int position = 1;
    for(people counter : winners) {
        cout << "Position #" << position++;
        cout << " is for " << counter.name << " ---> " << counter.score << endl;
        if(position==4) {
          break;
        }
    }
    return 0;
}
