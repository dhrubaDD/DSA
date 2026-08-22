#include<bits/stdc++.h>
using namespace std;

int main() {

    int width = 20;   // length of the flag
    int height = 20;  // total number of rows

    for(int i = 0; i < height; i++) {

        // SAFRON (top 1/3)
        if(i < height/3) {
            for(int j = 0; j < width; j++)
                cout << "\033[48;5;208m  \033[0m";  // orange block
        }

        // WHITE (middle 1/3)
        else if(i < 2*height/3) {
            for(int j = 0; j < width; j++) {
                if(j == width/2 - 1 && i == height/2 - 1)
                    cout << "\033[44m O \033[0m";    // blue chakra center
                else
                    cout << "\033[47m  \033[0m";     // white block
            }
        }

        // GREEN (bottom 1/3)
        else {
            for(int j = 0; j < width; j++)
                cout << "\033[42m  \033[0m";  // green block
        }

        cout << endl;
    }

    return 0;
}
