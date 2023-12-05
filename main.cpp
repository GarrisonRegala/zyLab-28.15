/*Garrison Regala*/
/* Partner: Fred Solis*/
/*Github: https://github.com/GarrisonRegala/zyLab-28.15*/ 

#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
   cout << endl << playlistTitle << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl << endl;

   cout << "Choose an option: ";
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   // Implement the menu options based on the provided steps
   // ...
   // Make sure to return the updated headNode at the end of the function
}

int main() {
   string plTitle;
   cout << "Enter playlist's title: ";
   getline(cin, plTitle);

   PlaylistNode* head = nullptr;  // Initialize head pointer to nullptr

   char choice;
   do {
      PrintMenu(plTitle);
      cin >> choice;
      cin.ignore(); // Flush newline

      head = ExecuteMenu(choice, plTitle, head);

   } while (choice != 'q' && choice != 'Q');

   return 0;
}


