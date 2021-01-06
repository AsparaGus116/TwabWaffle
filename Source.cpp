#include"Tools.cpp"
#include"Luke.h"
#include"Nick.h"
#include"Paul.h"

#define LUKE
#define PAUL
//#define NICK

namespace myFatCock
{
	int add(int x, int y)
	{
		return x + y;
	}
}

int main()
{
	//Code here!

/*
Output: std::cout << "Hello world!";

	int x;

Input: std::cin >> x;
*/

#ifdef LUKE
	std::cout << "Luke: \n";
	Luke::main();
	std::cout << "\n\n";
#endif

#ifdef PAUL
	std::cout << "Paul: \n";
	Paul::lo_mein();
	std::cout << "\n\n";
#endif

#ifdef NICK
	std::cout << "Nick: \n";
	Nick::main();
	std::cout << "\n\n";
#endif


}

//int dick();

//pawenthasees

/*
Istanbul. fuckin' hate that place.

We're no strangers to love
You know the rules and so do I
A full commitment's what I'm thinking of
You wouldn't get this from any other guy

[Pre-Chorus1]
I just wanna tell you how I'm feeling
Gottamakeyouunderstand

[Chorus]
Never gonna give you up
Never gonna let you down
Never gonna run around and desert you
Never gonna make you cry
Never gonna say goodbye
Never gonna tell a lie and hurt you
*/

/*
JE||REMY
||
*/