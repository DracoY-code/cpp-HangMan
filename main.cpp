#include "engine.h"


// Constants
#define MAX_TRIES 5

// Global variables
static std::string fills;

// Prototypes
int spaceFill(char letter, std::string word);
void print(std::string secret, int wrong_guesses, const Engine *game);


int main()
{	
	// game object and setup
	const Engine *game = new Engine();
	game->setup();

	// Secret word to guess	
	std::string secret = game->run();
	
	// Win condition
	bool win = false;
	
	// guesses; wrong && right
	char guess;
	int total_guesses = 0;
	int wrong_guesses = 0;
		
	int match = 0;
	
	while (wrong_guesses < MAX_TRIES)
	{
		print(secret, wrong_guesses, game);
			
		cout << "Enter your guess: ";
		
		try {
			cin >> guess;
			
			if (guess == '\0') throw guess;
			
			// Guesses increase
			total_guesses++;
			
			match = spaceFill(guess, secret);
			
			// Check for matches of guess			
			switch (match)
			{
				case 0:
					// Wrong ones, hehe
					wrong_guesses++;
					cout << "\nWrong guess!" << "\n" << endl;
					break;
				
				case -1:
					cout << "\nGuessed already!" << "\n" << endl;
					break;
				
				default:
					cout << "\nMatched " << match << " letters!" << "\n" << endl;
			}
			
			cin.ignore();
			
		} catch (...) {
			cout << "\nNo input received!\n";
			continue;
		}
		
		// Check win
		win = (secret == fills) ? true : false;
		
		if (win) break;
	}
	
	print(secret, wrong_guesses, game);
	
	// End the game
	game->quit(win);
	
	// memory cleanup
	cin.ignore();
	delete game;
	return 0;
}


/* Converts fills based on guesses. */
int spaceFill(char letter, std::string word)
{
	const int len = word.length();
	
	// Check the guess	
	int matches = 0;
	for (int i = 0; i < len; i++) {
		
		// If guess is repeated
		if (letter == fills[i])
			return -1;
		
		// Compare guess
		if (letter == word[i])
		{
			fills[i] = letter;
			matches++;
		}
	}
	
	return matches;
}


/* Prints the spaces and letters on stdout. */
void print(std::string secret, int wrong_guesses, const Engine *game)
{
	int len = secret.length();
	std::string andy;
	
	cout << "Press Enter to continue! ";
	cin.ignore();
	system("cls");
	
	// first run
	if (fills == "")
	{
		andy = game->Sprite(0);
		cout << andy;
		
		for (int i = 0; i < len; i++) fills += "_";
	}
	
	else 
	{
		andy = game->Sprite(wrong_guesses);
		cout << andy;
	}
	
	std::cout << "\n\n\tWORD: ";
	for (int i = 0; i < len; i++)
		std::cout << fills[i] << " ";
	std::cout << "\n\n";
}
