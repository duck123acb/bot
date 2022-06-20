#include <iostream>
#include <vector>
std::vector<std::string> ls = {"ok", "who asked", "no", "yes", "fortnite sussy amon gus is the one to ask!!!", "are you high bro?", "wtf", "ummmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm...", "... any real problems?", "*steals your skin*", "*reaches into your eye socket and pulls out gun*", "meow", "oh helllll naw", "i lied :D", "im not lying :(", "look in the mirror", "your heart knows the answer", "sussy balls", "im in your walls", "there is a skeleton hiding inside you!!11!!!!!! :o", "*pulls out knife, and cuts your finger off*, yes? go on.", "I have eaten your kids", "your social credit has dropped below zero", "... you didnt tell anyone else, right?", "aesludgfilshdkgfjulvishdfo uifcpdfy8ufhujhbnajdgciwegdiulyhfi OK, WTF IS GOING ON"};
std::string a;
int main()
{
	srand(time(0));
	std::cout << "welcom to teh caht obt!!!!11 tell me ur porblmons!!!!@@1!1!1\n";
	while (1)
	{
	std::cin >> a;
	std::cout << ls[rand() % ls.size()] << "\n";
}
	return 0;
}
