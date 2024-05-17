#include <iostream>
#include <time.h>
#include <stdlib.h>
//#include <windows.h>
//#include <mmsystem.h>
using namespace std;
string CLS = "\033[2J\033[1;1H";
string Red = "\033[31;1m";
string Green = "\033[32;1m";
string Yellow = "\033[33;1m";
string Blue = "\033[34;1m";
string Purple = "\033[35;1m";
string Cyan = "\033[36;1m";
string White = "\033[37;1m";
string WhiteOnRed = "\033[41;1m";
string Default = "\033[0m"; // default gray color & reset background to black
 void IntroScreen()
 {

cout<<endl;
cout<<" .___________. __    __   _______     __  ___ .______          ___       __  ___  _______ .__   __.\n";
cout<<" |           ||  |  |  | |   ____|   |  |/  / |   _  \\        /   \\     |  |/  / |   ____||  \\ |  | \n";
cout<<" `---|  |----`|  |__|  | |  |__      |  '  /  |  |_)  |      /  ^  \\    |  '  /  |  |__   |   \\|  | \n";
cout<<"     |  |     |   __   | |   __|     |    <   |      /      /  /_\\  \\   |    <   |   __|  |  . `  | \n";
cout<<"     |  |     |  |  |  | |  |____    |  .  \\  |  |\\  \\----./  _____  \\  |  .  \\  |  |____ |  |\\   | \n";
cout<<"     |__|     |__|  |__| |_______|   |__|\\__\\ | _| `._____/__/     \\__\\ |__|\\__\\ |_______||__| \\__| \n";





system("pause");
 }
 void WinningScreen()
 {
cout<<endl;
cout<<" ____    ____  ______    __    __     ____    __    ____  ______   .__   __.  __\n";
cout<<" \\   \\  /   / /  __  \\  |  |  |  |    \\   \\  /  \\  /   / /  __  \\  |  \\ |  | |  |\n";
cout<<"  \\   \\/   / |  |  |  | |  |  |  |     \\   \\/    \\/   / |  |  |  | |   \\|  | |  |\n";
cout<<"   \\_    _/  |  |  |  | |  |  |  |      \\            /  |  |  |  | |  . `  | |  |\n";
cout<<"     |  |    |  `--'  | |  `--'  |       \\    /\\    /   |  `--'  | |  |\\   | |__|\n";
cout<<"     |__|     \\______/   \\______/         \\__/  \\__/     \\______/  |__| \\__| (__)\n";

 cout<<"                                                            *                                        *                                 .       .          *\n";
 cout<<"         |                                                                                                     o                                  .      .       o\n";
 cout<<"         -0-        .           .                                                                   .                .\n";
 cout<<"     o    |                                o                            o              .                        .\n";
 cout<<"                        _____                                                                                                        .\n";
 cout<<"                    ,-:` \\;',`'-,                                           .                                                                 .\n";
 cout<<"         o        .'-;_,;  ':-;_,'.                  |                                                  .                      |                     .\n";
 cout<<"                 /;   '/    ,  _`.-\\                -o-                                           ,                           -O-             .\n";
 cout<<"       .        | '`. (`     /` ` \\`|                |                  *                                        `             |          .\n";
 cout<<"                |:.  `\\`-.   \\_   / |                                                                                                       .\n";
 cout<<"                |     (   `,  .`\\ ;'|                                   .                                                                              o  *\n";
 cout<<"        .        \\     | .'     `-'/                                              o                            .\n";
 cout<<"                  `.   ;/        .'                         .                                 .                                     .             .\n";
 cout<<"                    `'-._____.-'`                                      ,                      ,     o                  .\n";
 cout<<"   o                                        .                                                                                                               .\n";
 cout<<"                                                                o                 *                                        *\n";
 cout<<"      .          .             .             |                             .                          .       o                          o    .      .\n";
 cout<<"                        *                   -o-                                                                                                           `\n";
 cout<<"        *                            o       |         .                                                         .               .\n";
 cout<<"                                                                                                                                               .\n";
 cout<<"                                                                                                                                                      \n";
cout<<" ____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___\n";
cout<<"    /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^\n";
cout<<"          --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -\n";
cout<<"    --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __\n";







system("pause");
 }
void LoosingScreen()
{
cout<<endl;
cout<<"____    ____  ______    __    __      __        ______        _______.___________. __ \n";
cout<<"\\   \\  /   / /  __  \\  |  |  |  |    |  |      /  __  \\      /       |           ||  | \n";
cout<<" \\   \\/   / |  |  |  | |  |  |  |    |  |     |  |  |  |    |   (----`---|  |----`|  | \n";
cout<<"  \\_    _/  |  |  |  | |  |  |  |    |  |     |  |  |  |     \\   \\       |  |     |  | \n";
cout<<"    |  |    |  `--'  | |  `--'  |    |  `----.|  `--'  | .----)   |      |  |     |__| \n";
cout<<"    |__|     \\______/   \\______/     |_______| \\______/  |_______/       |__|     (__) \n";

 cout<<"         |                                                                                                          *                                   .       o   \n";
 cout<<"        -0-        .           .              ___                                                                         .\n";
 cout<<"    o    |                                 .-'   `'.                .\n";
 cout<<"                       _____              /         \\            .        .                                |\n";
 cout<<"                   ,-:` \\;',`'-,  .       |         ;                              o                      -o-                              *\n";
 cout<<"        o        .'-;_,;  ':-;_,'         |--    -- |           ___.--,         *                          |\n";
 cout<<"                /;   '/    ,  _ _.._      |0) ~ (0) |    _.---'`__.-( (_.           .     *\n";
 cout<<"      .        | '`. (`/  __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`                                            *          *\n";
 cout<<"               |:.  `\\ \\ ( ,.--'`   ',__ /./;   ;, '.__.'`    __               .                    .\n";
 cout<<"               |     (   _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_            .                       .\n";
 cout<<"       .        \\     | `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'                                                           *            *\n";
 cout<<"                 `.   ;/      | |  .' _.-' |  |  \\  \\  '.               `~---`            .      .\n";
 cout<<"                   `'-._____.  \\ \\/ .'     \\  \\   '. '-._)          .          ``\n";
 cout<<"  o                             \\/ /        \\  \\    `=.__`~-.                .           .              .            .              |\n";
 cout<<"                           .    / /\\         `) )    / / `\"\".`\\            o                                                        -0-\n";
 cout<<"     .          .      .  , _.-'.'\\ \\        / /    ( (     / /         .`                                                           |\n";
 cout<<"                           `--~`   ) )    .-'.'      '.'.  | (                       o       `.\n";
 cout<<"                                  (/`    ( (`          ) )  '-;                                                  ,\n";
 cout<<"                                   `      '-;     .   (-'                                                   ~\n";
cout<<"                                                                                                                                                    .\n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___\n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
cout<<"         --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
cout<<"   --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";



system("pause");
}




int main()
{

    srand(time(NULL));
   // mciSendString("open TheLimitsOfTheCosmos.wav alias MY_SND3", NULL, 0, NULL);
    //mciSendString("play MY_SND3", NULL, 0, NULL);
    //step 1 - intro screen
    IntroScreen();
    cout<<"\nSave the world from the planet eating kraken...\n";
    // step 2 - select random phrase
    string Phrases[5] = {"to thyself be true", "fit as a fiddle", "good guys always win", "just drink more coffee", "cat in a hat"};
    string SecretPhrase = Phrases[rand()%5];
    // step 3 - create GuessPhrase
    string GuessPhrase = SecretPhrase;
    for(int i=0; i<SecretPhrase.size(); i++)
    {
        if (SecretPhrase[i] != ' ')

            GuessPhrase[i] = '.';
    }

    //step 4 - declare some vars
    int BadGuesses = 0;
    string Letter;
    string LettersRemaining = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    int Location;
    // step 5 - start game loop
    while(BadGuesses < 6 && GuessPhrase != SecretPhrase)
  {
      cout<<CLS;
     // step 6 - Ascii Art

    if(BadGuesses==0)
    {

 cout<<"                                                            *                                        *                                 .       .          *\n";
 cout<<"         |                                                                                                     o                                  .      .       o\n";
 cout<<"         -0-        .           .                                                                   .                .\n";
 cout<<"     o    |                                o                            o              .                        .\n";
 cout<<"                        _____                                                                                                        .\n";
 cout<<"                    ,-:` \\;',`'-,                                           .                                                                 .\n";
 cout<<"         o        .'-;_,;  ':-;_,'.                  |                                                  .                      |                     .\n";
 cout<<"                 /;   '/    ,  _`.-\\                -o-                                           ,                           -O-             .\n";
 cout<<"       .        | '`. (`     /` ` \\`|                |                  *                                        `             |          .\n";
 cout<<"                |:.  `\\`-.   \\_   / |                                                                                                       .\n";
 cout<<"                |     (   `,  .`\\ ;'|                                   .                                                                              o  *\n";
 cout<<"        .        \\     | .'     `-'/                                              o                            .\n";
 cout<<"                  `.   ;/        .'                         .                                 .                                     .             .\n";
 cout<<"                    `'-._____.-'`                                      ,                      ,     o                  .\n";
 cout<<"   o                                        .                                                                                                               .\n";
 cout<<"                                                                o                 *                                        *\n";
 cout<<"      .          .             .             |                             .                          .       o                          o    .      .\n";
 cout<<"                        *                   -o-                                                                                                           `\n";
 cout<<"        *                            o       |         .                                                         .               .\n";
 cout<<"                                                                                                                                               .\n";
 cout<<"                                                                                                                                                      \n";
cout<<" ____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___\n";
cout<<"    /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^\n";
cout<<"          --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -\n";
cout<<"    --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __\n";
    }

    if(BadGuesses==1 && BadGuesses <6)

    {

cout<<"                                                                                                                                  .       .          *                                         \n";
cout<<"          |                                                                                                                                             .       o                           *\n";
cout<<"         -0-        .           .                                                                   .                .                 ___ \n";
cout<<"     o    |                                o                            o              .                        .                   .-'   `'. \n";
cout<<"                        _____                                                                                                      /         \\            .        .\n";
cout<<"                    ,-:` \\;',`'-,                                           .                                                      |         ;\n";
cout<<"         o        .'-;_,;  ':-;_,'.                  |                                                  .                          |--    -- |           ___.--,\n";
cout<<"                 /;   '/    ,  _`.-\\                -o-                                           ,                      _.._      |0) ~ (0) |    _.---'`__.-( (_.\n";
cout<<"       .        | '`. (`     /` ` \\`|                |                  *                                          __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`\n";
cout<<"                |:.  `\\`-.   \\_   / |                                                                             ( ,.--'`   ',__ /./;   ;, '.__.'`    __\n";
cout<<"                |     (   `,  .`\\ ;'|                                   .                                         _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_\n";
cout<<"        .        \\     | .'     `-'/                                              o                              `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'\n";
cout<<"                  `.   ;/        .'                         .                                 .                        | |  .' _.-' |  |  \\  \\  '.               `~---`\n";
cout<<"                    `'-._____.-'`                                      ,                      ,     o                   \\ \\/ .'     \\  \\   '. '-._)\n";
cout<<"   o                                        .                                                                            \\/ /        \\  \\    `=.__`~-.\n";
cout<<"                                                                                 *                                       / /\\         `) )    / / `\"\".`\\            o\n";
cout<<"      .          .             .             |                             .                          .            , _.-'.'\\ \\        / /    ( (     / /         .\n";
cout<<"                        *                   -o-                                                                     `--~`   ) )    .-'.'      '.'.  | (\n";
cout<<"                                     o       |         .                                                         .         (/`    ( (`          ) )  '-;\n";
cout<<"                                                                                                                            `      '-;         (-'\n";
cout<<"                                                                                                                                                                                                          \n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___   \n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
cout<<"         --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
cout<<"   --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";
    }

    if(BadGuesses==2 & BadGuesses<6)
    {
 cout<<"         |                                                                                                                                             .       o \n";
 cout<<"        -0-        .           .                        .                                          .      .                 ___                      .  \n";
 cout<<"    o    |                                o                            o              .                                  .-'   `'.                .\n";
 cout<<"                       _____                                                                                            /         \\            .        . \n";
 cout<<"                   ,-:` \\;',`'-,                                           .                                            |         ;                   .\n";
 cout<<"        o        .'-;_,;  ':-;_,'.                  |                                        .                          |--    -- |           ___.--,       .\n";
 cout<<"                /;   '/    ,  _`.-\\                -o-                                 ,                      _.._      |0) ~ (0) |    _.---'`__.-( (_.       o\n";
 cout<<"      .        | '`. (`     /` ` \\`|                |                  *                                __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`     .\n";
 cout<<"               |:.  `\\`-.   \\_   / |                                                                   ( ,.--'`   ',__ /./;   ;, '.__.'`    __                   .\n";
 cout<<"               |     (   `,  .`\\ ;'|                                   .                               _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_       .\n";
 cout<<"       .        \\     | .'     `-'/                                    o                              `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'        .\n";
 cout<<"                 `.   ;/        .'                         .                       .                        | |  .' _.-' |  |  \\  \\  '.               `~---`     .\n";
 cout<<"                   `'-._____.-'`                                      ,            ,     o                   \\ \\/ .'     \\  \\   '. '-._)                   .\n";
 cout<<"  o                                        .                                                       o          \\/ /        \\  \\    `=.__`~-.             .\n";
 cout<<"                                                                                *                             / /\\         `) )    / / `\"\".`\\            o\n";
 cout<<"     .          .             .             |                  .          .                .            , _.-'.'\\ \\        / /    ( (     / /         .\n";
 cout<<"                       *                   -o-                                                           `--~`   ) )    .-'.'      '.'.  | (                          .\n";
 cout<<"                                    o       |         .                                               .         (/`    ( (`          ) )  '-;                                      .\n";
 cout<<"                                                                                                                 `      '-;         (-'                                          .\n";
 cout<<"                                                                                                                                                                                        \n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___   \n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
cout<<"         --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
cout<<"   --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";

    }

    if(BadGuesses==3 & BadGuesses<6)
    {
 cout<<"                .                                                           .                                    .                         .       .\n";
 cout<<"         |                                                                                                                                             .       o \n";
 cout<<"        -0-        .           .                                         .      .                  ___                              .\n";
 cout<<"    o    |                                o                            o              .         .-'   `'.                                    .\n";
 cout<<"                       _____                                                                   /         \\            .        .             |      .\n";
 cout<<"                   ,-:` \\;',`'-,                                           .                   |         ;                                  -O-              .\n";
 cout<<"        o        .'-;_,;  ':-;_,'.                  |               .                          |--    -- |           ___.--,                 |            .\n";
 cout<<"                /;   '/    ,  _`.-\\                -o-        ,                      _.._      |0) ~ (0) |    _.---'`__.-( (_.                        .\n";
 cout<<"      .        | '`. (`     /` ` \\`|                |                  *       __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`                 o\n";
 cout<<"               |:.  `\\`-.   \\_   / |                                          ( ,.--'`   ',__ /./;   ;, '.__.'`    __                       .       \n";
 cout<<"               |     (   `,  .`\\ ;'|                                   .      _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_            .\n";
 cout<<"       .        \\     | .'     `-'/                                   o      `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'              .\n";
 cout<<"                 `.   ;/        .'                         .                       | |  .' _.-' |  |  \\  \\  '.               `~---`          .\n";
 cout<<"                   `'-._____.-'`             ,            ,     o                   \\ \\/ .'     \\  \\   '. '-._)         ,                              ,\n";
 cout<<"  o                                        .                                         \\/ /        \\  \\    `=.__`~-.                  `\n";
 cout<<"                                                      *                              / /\\         `) )    / / `\"\".`\\            o             .    o\n";
 cout<<"     .          .             .             |    .                .            , _.-'.'\\ \\        / /    ( (     / /         .           `\n";
 cout<<"                       *                   -o-                                  `--~`   ) )    .-'.'      '.'.  | (                            `         `\n";
 cout<<"                                    o       |         .                      .         (/`    ( (`          ) )  '-;      `            .        `\n";
 cout<<"                                                                                       `       '-;         (-'                                           .\n";
 cout<<"                                                                                                                                                          \n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___   \n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
cout<<"         --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
 cout<<"  --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";

    }

    if(BadGuesses==4 & BadGuesses<6)
    {
  cout<<"                                                                                                                                                               \n";
  cout<<"        |                                                                                                          *                                   .       o                           *\n";
  cout<<"       -0-        .           .                       .      .           ___                                                                    .\n";
  cout<<"   o    |                                o          o       .         .-'   `'.                .                                                          .\n";
  cout<<"                      _____                                          /         \\            .        .                                |                                         .\n";
  cout<<"                  ,-:` \\;',`'-,                         .            |         ;                              o                      -o-                              *\n";
  cout<<"       o        .'-;_,;  ':-;_,'.        |            .              |--    -- |           ___.--,         *                          |                 .\n";
  cout<<"               /;   '/    ,  _`.-\\   .  -o-        ,       _.._      |0) ~ (0) |    _.---'`__.-( (_.           .     *                                            .\n";
  cout<<"     .        | '`. (`     /` ` \\`|      |   *       __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`                                            *          *\n";
  cout<<"              |:.  `\\`-.   \\_   / |     .           ( ,.--'`   ',__ /./;   ;, '.__.'`    __               .                    .              .\n";
  cout<<"              |     (   `,  .`\\ ;'|          .      _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_            .                       .\n";
  cout<<"      .        \\     | .'     `-'/          o      `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'                                                           *            *\n";
  cout<<"                `.   ;/        .'     .                  | |  .' _.-' |  |  \\  \\  '.               `~---`            .      .\n";
  cout<<"                  `'-._____.-'`   ,       ,     o         \\ \\/ .'     \\  \\   '. '-._)          .          ``                              .\n";
  cout<<" o                                     .                   \\/ /        \\  \\    `=.__`~-.                .           .              .            .               |          *\n";
  cout<<"                          .       *                        / /\\         `) )    / / `\"\".`\\            o                                                        -0-         .\n";
  cout<<"    .          .      .          |    .       .      , _.-'.'\\ \\        / /    ( (     / /         .`                                                           |                     .\n";
  cout<<"                      *         -o-                   `--~`   ) )    .-'.'      '.'.  | (                       o       `.                    *\n";
  cout<<"                         o       |         .        .        (/`    ( (`          ) )  '-;                                                                     .\n";
  cout<<"                                                             `       '-;         (-'                                                   ~\n";
  cout<<"                                                                                                                                                                                            \n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___   \n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
 cout<<"        --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
 cout<<"  --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";

    }

    if(BadGuesses==5 & BadGuesses<6)
    {
 cout<<"         |                                                                                                          *                                   .       o                           *\n";
 cout<<"        -0-        .           .             .               ___                                                              .\n";
 cout<<"    o    |                                                .-'   `'.                .\n";
 cout<<"                       _____                             /         \\            .        .                                |                       .\n";
 cout<<"                   ,-:` \\;',`'-,  .                      |         ;                              o                      -o-                              *\n";
 cout<<"        o        .'-;_,;  ':-;_,'.                       |--    -- |           ___.--,         *                          |                                              .\n";
 cout<<"                /;   '/    ,  _`.-\\            _.._      |0) ~ (0) |    _.---'`__.-( (_.           .     *\n";
 cout<<"      .        | '`. (`     /` ` \\`|     __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `\"\"`                                            *          *\n";
 cout<<"               |:.  `\\`-.   \\_   / |    ( ,.--'`   ',__ /./;   ;, '.__.'`    __               .                    .\n";
 cout<<"               |     (   `,  .`\\ ;'|    _`) )  .---.__.' / |   |\\   \\__..--\"\"  \"\"\"--.,_            .                       .\n";
 cout<<"       .        \\     | .'     `-'/    `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.'                                                           *            *\n";
 cout<<"                 `.   ;/        .'           | |  .' _.-' |  |  \\  \\  '.               `~---`            .      .\n";
 cout<<"                   `'-._____.-'`   ,       o  \\ \\/ .'     \\  \\   '. '-._)          .          ``                                                      .\n";
 cout<<"  o                                      .     \\/ /        \\  \\    `=.__`~-.                .           .              .            .               |                 .\n";
 cout<<"                           .       *           / /\\         `) )    / / `\"\".`\\            o                                                        -0-         .\n";
 cout<<"     .          .      .          |      , _.-'.'\\ \\        / /    ( (     / /         .`                                                           |            .\n";
 cout<<"                       *         -o-      `--~`   ) )    .-'.'      '.'.  | (                       o       `.\n";
 cout<<"                          o       |    .         (/`    ( (`          ) )  '-;                                                      .\n";
 cout<<"                                                  `      '-;     .   (-'                                                   ~\n";
 cout<<"                                                                                                                                                                       \n";
cout<<"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____\\___   \n";
cout<<"   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---           /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---              /\\^   ^  ^    ^                  ^^\n";
 cout<<"        --           -            --  -      -         ---  __       ^             --           -            --  -      -         ---  __       ^                  --           -         --       -\n";
 cout<<"  --  __                      ___--  ^  ^                         --  __     --  __                      ___--  ^  ^                         --  __        --  __                      __           --\n";

    }

// step 7 - Show BadGuesses and LettersRemaining
     cout << "Hitpoints: " << WhiteOnRed << 60 - BadGuesses*10 << "/60" << Default << endl;
     cout << "Letters Remaining: " << Cyan << LettersRemaining << Default << endl;
// step 8 - GuessPhrase
     cout << "Phrase to guess: " << GuessPhrase << endl;
     // step 9 - input letter
    cout << "Enter a letter: ";
    cin >> Letter;
    Location = LettersRemaining.find(Letter,0);
    if (Location != -1)
    LettersRemaining.replace(Location,1," ");
    // Step 10 - search for letter and replace all occurrences
    Location = SecretPhrase.find(Letter,0);
    if(Location > SecretPhrase.size())
            BadGuesses++;
    else
            while(Location <= SecretPhrase.size())
        {
            GuessPhrase.replace(Location,1,Letter);
            Location = SecretPhrase.find(Letter, Location + 1);
        }

    if(GuessPhrase==SecretPhrase || BadGuesses==60)
    {
        system("pause");
    }
  } // end game loop

    // step 11 - display winning and loosing screens
    cout<<CLS;
    if(GuessPhrase == SecretPhrase)
    {
    cout << "Congratulations... You saved the world.\n";
    cout<<endl;
    WinningScreen();
    }
    else
    {
    cout << "We're doomed. You were Humanity's last hope...\n";
    cout<<endl;
    LoosingScreen();
    }

    return 0;

}   // ends main
