#include <iostream>
#include <Windows.h>

int main(){
	SetConsoleTitle("Ink Raider!");
	int userDecision = 0;
	// Premise
	std::cout << "Premise:\n\nYou live in InkTink -- A wonderful and colorful island known for its rainbow streets and bright-colored houses.\n\n";
	std::cout << "You live the life of a ordinary soldier whose destiny is to protect InkTink against the evil, the so called 'Shadow Demons' are creatures which devore humans to feed themselves, or any other alive creature.\n\n";
	
	std::cout << "While walking around the streets a shadow-looking strange creature appears and tries to attack you, you use your magical blast to destroy it... After examinating the creature you see it wasn't very strong, but... That thing triggered something inside you... You think to yourself 'What if they decide to attack in a larger scale?'.\n\n";
	Sleep(1000);

	std::cout << "Your grand adventure begins here! It's time to stop hiding behind the island's big walls and go outside, explore and kill all evil your encounter in your journey, your name is... KANZEVOR, THE GREAT SOLDIER!\n";
	// Premise
	Sleep(2000);
	std::cout << "\nWhat you wanna do now?\n\n";
	std::cout << "1) Go back to InkTink.\n";
	std::cout << "2) Go to Blackist Forest.\n";
	std::cout << "Enter the number: ";
	std::cin >> userDecision;
	
	while(userDecision != 1 && userDecision != 2){
		system("cls");
		std::cout << "\nWhat you wanna do now?\n\n";
		std::cout << "1) Go back to InkTink.\n";
		std::cout << "2) Go to Blackist Forest.\n";
		std::cout << "You entered a invalid number for the path you wanna follow. Please re-enter again: ";

		std::cin >> userDecision;
	}
	if(userDecision == 1){
		system("cls");
		std::cout << "You feel ashamed of yourself and go back to your ordinary life patroulling InkTink. GAME OVER!\n\n";
		userDecision = 0;
		return 0;
	} else if(userDecision == 2){
		system("cls");
		std::cout << "You start your journey by going to the Blackist Forest, a forest home to the worst of the worst, the scum of society.\n";
		Sleep(1000);
		std::cout << "It's almost night, you hear the owl's gathering around the trees to sleep, you setup your campfire and lay in the improvised bed\n\n";
		userDecision = 0;
	}

	std::cout << "\nThe sun is going down, what you want to do?\n\n";
	std::cout << "1) Sleep.\n";
	std::cout << "2) Stay up all night protecting your camp.\n";
	std::cout << "Enter the number: ";
	std::cin >> userDecision;

	while(userDecision != 1 && userDecision != 2){
		system("cls");
		std::cout << "You feel tired, the sun is going down, what you want to do?\n\n";
		std::cout << "1) Sleep.\n";
		std::cout << "2) Stay up all night protecting your camp.\n";
		std::cout << "Invalid number, Please choose one of the valid paths: ";
		std::cin >> userDecision;
	}

	if(userDecision == 1){
		system("cls");
		std::cout << "You look around and see nothing suspicious, you close your eyes and fall asleep...\n\n";
		userDecision = 0;
	} else if(userDecision == 2){
		system("cls");
		std::cout << "Even tho you're tired, you don't wanna risk going to sleep and stay up all night...";
		std::cout << "You climb into a tree and hide yourself behind the tree leafs... After approximately 4 hours protecting the camp you see 3 strange figures in black approximating your camp, as they get closer you see it's three bandits, they're wearing some sort of uniform, a black hoodie and a mask with the symbol of 3 swords in the cheek, they carefully get closer and closer to your camp, but don't notice you, as they get closer you start hearing they voices:\n\n";
		std::cout << "Bandit 1: Hey, are you guys ok with what our boss has been demanding from us? these types of quests are going to end up with us dead in some random hill at some point.\n";
		Sleep(5000);
		std::cout << "Bandit 2: I think they are too risky too, that motherfucker always send us to the dangerous quests, while him and his friends are in the base eating and talking shit all the time.\n";
		Sleep(5000);
		std::cout << "Bandit 3: Yeah, we should finish him and take the throne for ourselves, that chubby rabbit-looking asshole can't fight with the three of us at the same time!.\n";
		Sleep(5000);
		std::cout << "Bandit 2: Yeah!, we can kill him and his friends easily if we gather together.\n";
		Sleep(5000);
		std::cout << "Bandit 1: That's a good plan, but let's focus on the present yes?\n";
		Sleep(5000);
		std::cout << "Bandit 3: Relax brother, this camp looks abandoned, theres no one here, just the owl's and us... I think.\n";
		userDecision = 0;
	}



	return 0;
}
