// MusicSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include<Windows.h>
#include <ctime>
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
            while (!fin.eof()) {
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
                    //open the audio file
                    mciSendString(TEXT("open \"1.mp3\" type mpegvideo alias mp3"), NULL, 0, NULL);


                    //play the audio file and specify start and end positions 

                    cout << "file playing....\n";
                    time_t t1 = time(0);
                    mciSendString(TEXT("play mp3 wait"), NULL, 0, NULL);
                    time_t t2 = time(0);
                    cout << "Duration of the play :" << t2 - t1 << " seconds." << endl;
                    //close the audio file
                    mciSendString(TEXT("close mp3"), NULL, 0, NULL);
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