/* 
	HEADER FILE
*/

#ifndef ENGINE_H
	#define ENGINE_H
	
	#include <iostream>
	#include <cstdlib>
	#include <string>
	#include <ctime>
	using namespace std;

	class Engine
	{
		private:
			std::string WORDS[10];
		
		public:
			int setup() const;
			int quit(bool) const;
			std::string run() const;
			std::string Sprite(int) const;
		
		protected:
			int genRandom() const;
	};

#endif // ENGINE_H