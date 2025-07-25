#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int deck[52];
    int i;
    string suitnames[4] = { "Sekop", "Wajik", "Keriting", "Hati" };
    string ranknames[13] = { "AS", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
      // create a new deck, with cards in order, but unique
    for (i = 0; i < 52; i++)
    {
        deck[i] = i;
    }
    // shuffle the deck:
    for (i = 0; i < 52; i++)
    {
    	 // generate a random index to swap with the card at index i.
        int j = rand() % 52;
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
    // print all the cards
    for (i = 0; i < 52; i++)
    {
        int suitnumber = deck[i] / 13; // 0 - 3
        int rank = deck[i] % 13;
        //cout << ranknames[rank] << " " << suitnames[suitnumber] << "\n";
    }
    // Check first 5 cards for an ace
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        int acerank = 0;
        int currentCardRank = deck[i] % 13;
        if (currentCardRank == acerank)
        {
            //cout << "Kartu anda AS!" << endl;
        }
    }
    // Get the rank of the first 5 cards
     int R[7]; // = {4, 7, 6, 3, 5}; // rank of the first 5 cards
    int S[7];
    for (i = 0; i < 7; i++)
    {
        R[i] = deck[i] % 13;
        S[i] = deck[i] / 13;
    }
    // Sort the R array
    bool swapped = false;
    do
    {
        // 1 pass of the bubble sort
        swapped = false;
        for (int i = 0; i < 4; i++)
         {
            if (R[i] > R[i + 1])
            {
                int temp = R[i];
                R[i] = R[i + 1];
                R[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped == true);
    // print the sorted ranks and suits
    cout << "Kartu anda:\n";
    for (i = 0; i < 7; i++)
     {
        cout << ranknames[R[i]] << " " << suitnames[S[i]] << "\n";
    }
    // Check for a straight:
    if (R[1] == R[0] + 1 && R[2] == R[1] + 1 && R[3] == R[2] + 1 && R[4] == R[3] + 1)
    {
        cout << "\nKartu anda Straight! (you must have cheated)" << endl;
    }
    else
    {
        cout << "\nTidak ada Straight" << endl;
          }
    // Check first 5 cards for any pair
    if (R[0] == R[1] || R[1] == R[2] || R[2] == R[3] || R[3] == R[4])
    {
        cout << "\nKartu anda Pair!" << endl;
    }
    else
    {
        cout << "\nTidak ada Pair" << endl;
    }
    // Check for a flush (all the same suit)
    if (S[0] == S[1] && S[1] == S[2] && S[2] == S[3] && S[3] == S[4])
    {
        cout << "\nKartu anda Flush!" << endl;
    }
    else
     {
        cout << "\nTidak ada flush" << endl;
    }
    // Check for straight 4flush
    // Check for 4 of a kind
    // Check for full house
    cout << "\n";
    system("pause");
    return 0;
}
