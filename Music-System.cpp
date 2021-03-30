// MusicSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;

int main() {

    int op;
    do {
        cout << "0.To exit " << endl;
        cout << "1. Find Music : " << endl;
        cout << "2. Top 10 Songs  " << endl;
        cout << "3. Punjabi Songs " << endl;
        cout << "4. English Songs " << endl;
        cout << "5. Play Random " << endl;
        cin >> op;


        switch (op)
        {
        case 0:
            break;

        case 1:
            // find music

            break;
        case 2:
            ifstream fin;
            fin.open("Top10.txt", ios::in);
            char ch;
            while (fin.eof() == 0) {
                fin.get(ch);
                cout << ch;
            }
            fin.close();
            char cho;
            cout << "Want to play the song(y/n) :" << endl;
            cin >> cho;
            if (cho == 'y') {
                cout << "Song Number: ";
                int i;
                cin >> i;
                if (i == 1) {
                    bool played = PlaySound(TEXT("1.wav"), NULL, SND_SYNC);
                    cout << "hi: " << played << endl;
                    // PlaySound("1.wav",NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
                    // bool played = PlaySound("1.wav", NULL, SND_FILENAME);
                }

            }
            else {
                break;
            }

            break;


        }


    } while (op != 0);




    return 0;
}