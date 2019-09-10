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

    vector<people> p;
    while(!inputFile.eof()) {
        people temp;

        inputFile >> temp.name;
        inputFile >> temp.score;

        p.push_back(temp);
    }
    inputFile.close();
    sort(p.begin(), p.end(), acompare);

    int position = 1;
    for(people s : p) {
        cout << "Position #" << position++;
        cout << " is for " << s.name << " ---> " << s.score << endl;
        if(position==4) {
          break;
        }
    }
    return 0;
}
