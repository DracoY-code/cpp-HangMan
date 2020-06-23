#include "engine.h"


std::string Engine::Sprite(int index) const
{
	std::string andy;
	std::string tab = "\t";
	std::string line = "\n";
	
	switch (index)
	{
		case 0:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (0) (0) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  zzzzz  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       | |       " + line
		 		 + tab + "?????????????????" + line
		 		 + tab + "|| !         ! ||" + line
		 		 + tab + "|| !         ! ||" + line
		 		 + tab + "11 !         ! 11" + line
		 		 + tab + "@@ !         ! @@" + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   ???????????   " + line
		 		 + tab + "     ||   ||     " + line
		 		 + tab + "     ||   ||     " + line
		 		 + tab + "     ||   ||     " + line
		 		 + tab + "     TT   TT     " + line;
			break;
		
		case 1:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (0) (0) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  -----  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       | |       " + line
		 		 + tab + "?????????????????" + line
		 		 + tab + "|| !         ! ||" + line
		 		 + tab + "|| !         ! ||" + line
		 		 + tab + "11 !         ! 11" + line
		 		 + tab + "@@ !         ! @@" + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   ???????????   " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          TT     " + line;
			break;
		
		case 2:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (0) (-) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  ^^^^^  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       | |       " + line
		 		 + tab + "???????????????  " + line
		 		 + tab + "|| !         !   " + line
		 		 + tab + "|| !         !   " + line
		 		 + tab + "11 !         !   " + line
		 		 + tab + "@@ !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   ???????????   " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          TT     " + line;
			break;
		
		case 3:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (=) (=) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  ^^^^^  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       | |       " + line
		 		 + tab + "  ?????????????  " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   ???????????   " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          ||     " + line
		 		 + tab + "          TT     " + line;
			break;
		
		case 4:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (+) (+) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  -----  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       | |       " + line
		 		 + tab + "  ?????????????  " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   !         !   " + line
		 		 + tab + "   ???????????   " + line
		 		 + tab + "                 " + line
		 		 + tab + "                 " + line
		 		 + tab + "                 " + line
		 		 + tab + "                 " + line;
			break;
		
		case 5:
			andy = tab + "   ___________   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   | (|) (|) |   " + line
		 		 + tab + "   |         |   " + line
		 		 + tab + "   |  -----  |   " + line
		 		 + tab + "   |_________|   " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "       RIP       " + line
		 		 + tab + "        ^        " + line
		 		 + tab + "                 " + line
		 		 + tab + "                 " + line
		 		 + tab + "                 " + line;
	}
	
	return andy;
}

int Engine::setup() const
{
	std::string intro, andy;
	
	andy = Sprite(0);
	
	intro = "\n-> Welcome to HangMan v1.0\n-> Author: DracoY\n-> Hope you enjoy!\n\n\t*** Meet Andy! ***\n\n" + andy + "\n\n\n\t*** >>RULES<< ***\n\n-- A random word is generated.\n-- You have 5 tries to guess the word.\n-- You can input letter guesses.\n-- If your guessed letter is wrong??\n-- We'll chop off Andy's one limb.\n-- Beware the Big Bad Wolf!\n\n\n> Let's start the game.\n> Your friend Handy's counting on you!\n\n";
	
	std::cout << intro;
	
	return 0;
}


int Engine::quit(bool result) const
{
	std::string outro;
	
	if (result)
	{
		outro = "\n\n^_^ Congratulations! You saved Andy.\n    He owes you now.\n    You are a good person\n    See you soon! Bye!\n";
	}
	
	else
	{
		outro = "\n???? Darn! You killed Andy.\n//// You are a horrible person.\n|||| You should be guillotined.\n---- Well, your mom should be proud!\n++++ Cya murderer!\n";
	}
	
	std::cout << outro;
	return 0;
}


int Engine::genRandom() const
{
	// Seed
	srand(time(NULL));
	
	int random = 0 + rand() % 9;
	return random;
}


std::string Engine::run() const
{
	// The words (if u touch this, yoi begone)
	std::string WORDS[10] = {
								"python",
								"brain",
								"rainbow",
								"blood",
								"school",
								"rude",
								"creed",
								"goal",
								"shawn",
								"doodle"
							 };
	
	return WORDS[genRandom()];
}
