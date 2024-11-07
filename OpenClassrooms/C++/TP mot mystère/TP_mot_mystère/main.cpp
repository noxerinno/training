#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string shuffle(string baseWord){
    string shuffledWord("");
    int nbAlea(0);

    while(baseWord.size() > 1){
        nbAlea = rand() % baseWord.size();

        shuffledWord += baseWord[nbAlea];
        baseWord.erase(nbAlea, 1);
    }
    shuffledWord += baseWord[0];

    return shuffledWord;
}

void guess(string baseWord, string shuffledWord){
    //Display suffledWord and ask the user to type a word while this word is different from baseWord

    string guess("");
    int attempt(0), limit(15);

    do{
        cout << "\nQuel est ce mot ? " << shuffledWord << endl;
        cin >> guess;

        if(guess == baseWord){
            cout << "Bravo !" << endl;
        }
        else{
            cout << "Ce n'est pas le mot !" << endl;
        }

        attempt++;
    }while(guess != baseWord || attempt <= limit);

    if(attempt > limit){
        cout << "Vous n'avez plus d'essais"
    }
}

int main()
{
    srand(time(0));
    string baseWord(""), answer("");
    int counter(0);

    do{
        counter++;
        cout << "====== Partie n°" << counter << " ======" << endl;

        cout << "Saisissez un mot" << endl;
        cin >> baseWord;

        string shuffledWord = shuffle(baseWord);
        guess(baseWord, shuffledWord);

        cout << "\nVoulez-vous refaire une partie ? (o/n)" << endl;
        cin >> answer;
        cout << "\n\n\n\n";
    }while(answer[0] == 'o');

    return 0;
}

