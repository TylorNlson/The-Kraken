#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <limits>
using namespace std;

string CLS = "\033[2J\033[1;1H";
string Red = "\033[31;1m";
string Yellow = "\033[33;1m";
string Blue = "\033[34;1m";
string Purple = "\033[35;1m";
string Cyan = "\033[36;1m";
string White = "\033[37;1m";
string WhiteOnRed = "\033[41;1m";
string Default = "\033[0m"; // default gray color & reset background to black

void Pause() {
    cout << "Press Enter to continue...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void IntroScreen()
{
    cout << endl;
    cout << " .___  ___. ____    ____  _______.___________. __    ______      \n";
    cout << " |   \\/   | \\   \\  /   / /       |           ||  |  /  __  \\     \n";
    cout << " |  \\  /  |  \\   \\/   / |   (----`---|  |----`|  | |  |  |  |    \n";
    cout << " |  |\\/|  |   \\_    _/   \\   \\       |  |     |  | |  |  |  |    \n";
    cout << " |  |  |  |     |  | .----)   |      |  |     |  | |  `--'  '--. \n";
    cout << " |__|  |__|     |__| |_______/       |__|     |__|  \\_____\\_____\\\n";
    Pause();
}

void WinningScreen()
{
    cout << endl;
    cout << " ____    ____  ______    __    __     ____    __    ____  ______   .__   __.  __\n";
    cout << " \\   \\  /   / /  __  \\  |  |  |  |    \\   \\  /  \\  /   / /  __  \\  |  \\ |  | |  |\n";
    cout << "  \\   \\/   / |  |  |  | |  |  |  |     \\   \\/    \\/   / |  |  |  | |   \\|  | |  |\n";
    cout << "   \\_    _/  |  |  |  | |  |  |  |      \\            /  |  |  |  | |  . `  | |  |\n";
    cout << "     |  |    |  `--'  | |  `--'  |       \\    /\\    /   |  `--'  | |  |\\   | |__|\n";
    cout << "     |__|     \\______/   \\______/         \\__/  \\__/     \\______/  |__| \\__| (__)\n";
    Pause();
}

void LosingScreen()
{
    cout << endl;
    cout << "____    ____  ______    __    __      __        ______        _______.___________. __ \n";
    cout << "\\   \\  /   / /  __  \\  |  |  |  |    |  |      /  __  \\      /       |           ||  | \n";
    cout << " \\   \\/   / |  |  |  | |  |  |  |    |  |     |  |  |  |    |   (----`---|  |----`|  | \n";
    cout << "  \\_    _/  |  |  |  | |  |  |  |    |  |     |  |  |  |     \\   \\       |  |     |  | \n";
    cout << "    |  |    |  `--'  | |  `--'  |    |  `----.|  `--'  | .----)   |      |  |     |__| \n";
    cout << "    |__|     \\______/   \\______/     |_______| \\______/  |_______/       |__|     (__) \n";
    Pause();
}

int main()
{
    srand(time(NULL));

    // Step 1 - Intro screen
    IntroScreen();
    cout << "\nSave the world from the planet-eating kraken...\n";

    // Step 2 - Select random phrase
    string Phrases[5] = {"to thyself be true", "fit as a fiddle", "good guys always win", "just drink more coffee", "cat in a hat"};
    string SecretPhrase = Phrases[rand() % 5];

    // Step 3 - Create GuessPhrase
    string GuessPhrase = SecretPhrase;
    for (int i = 0; i < (int)SecretPhrase.size(); i++)
    {
        if (SecretPhrase[i] != ' ')
            GuessPhrase[i] = '.';
    }

    // Step 4 - Declare some vars
    int BadGuesses = 0;
    string Letter;
    string LettersRemaining = "abcdefghijklmnopqrstuvwxyz";
    size_t Location;

    // Step 5 - Start game loop
    while (BadGuesses < 6 && GuessPhrase != SecretPhrase)
    {
        cout << CLS;

        // Show BadGuesses and LettersRemaining
        cout << "Hitpoints: " << WhiteOnRed << 60 - BadGuesses * 10 << "/60" << Default << endl;
        cout << "Letters Remaining: " << Cyan << LettersRemaining << Default << endl;

        // GuessPhrase
        cout << "Phrase to guess: " << GuessPhrase << endl;

        // Input letter
        cout << "Enter a letter: ";
        cin >> Letter;

        // Convert input to lowercase to match LettersRemaining
        if (!Letter.empty() && isupper(Letter[0]))
        {
            Letter[0] = tolower(Letter[0]);
        }

        Location = LettersRemaining.find(Letter[0]);
        if (Location != string::npos)
            LettersRemaining.replace(Location, 1, " ");

        Location = SecretPhrase.find(Letter[0]);
        if (Location == string::npos)
            BadGuesses++;
        else
            while (Location != string::npos)
            {
                GuessPhrase.replace(Location, 1, Letter);
                Location = SecretPhrase.find(Letter[0], Location + 1);
            }

        // Debugging output to track game state
        cout << "Debug: BadGuesses = " << BadGuesses << ", GuessPhrase = " << GuessPhrase
             << ", SecretPhrase = " << SecretPhrase << ", LettersRemaining = " << LettersRemaining << endl;

        // Exit loop if conditions are met
        if (BadGuesses >= 6 || GuessPhrase == SecretPhrase)
            break;
    }

    // Step 11 - Display winning and losing screens
    cout << CLS;
    if (GuessPhrase == SecretPhrase)
    {
        cout << "Congratulations... You saved the world.\n";
        cout << endl;
        WinningScreen();
    }
    else
    {
        cout << "We're doomed. You were Humanity's last hope...\n";
        cout << endl;
        LosingScreen();
    }

    return 0;
}
