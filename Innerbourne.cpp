//Title: final.cpp
//Author: Joshua Ketcham & Vageesha Dharmadasa
//Description: A text based adventure game
//may 12 2015
#include <iostream>
#include <math.h> //for more math functions
#include <stdlib.h> // for waiting
#include <cstdlib> // for RNG
#include <string> // for string
#include <unistd.h> //for sleep on mac
#include <time.h> // for null
#include <stdio.h> //for time
#include <fstream> //for art
using namespace std;


int main() 
{ 	//player stats
	int health = 100;//player health
	int mana = 5;//player mana
	
	
	
	
	//interaction
	string i1 = "0";//first interaction
	string choice = "0";//variable for choices
	string i2 = "0";//second interaction
	string i3 = "0";//third
	string i4 = "0";//fourth


	//sword identifiers
	int s1 = 1;//dagger
	int s2 = 0;//long sword
	int s3 = 0;//claymore
	int s4 = 0;//excalibur 

	
	//enemy health
	int h1 = 10;//slime
	int h2 = 25;//goblin
	int h3 = 10;//skeleton
	int h4 = 30;//giant slime
	int h5 = 25;//goblin chief
	int h6 = 50;//troll
	

cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(turn on your sound)\n" << endl;
sleep(3);
cout << "  ██▓ ███▄    █  ███▄    █ ▓█████  ██▀███     	   ▄▄▄▄    ▒█████   ██▀███   █    ██  ███▄    █ ▓█████ " << endl;
cout << " ▓██▒ ██ ▀█   █  ██ ▀█   █ ▓█   ▀ ▓██ ▒ ██	▒▓█████▄ ▒██▒  ██▒▓██ ▒ ██▒ ██  ▓██▒ ██ ▀█   █ ▓█   ▀ " << endl;
cout << " ▒██▒▓██  ▀█ ██▒▓██  ▀█ ██▒▒███   ▓██ ░▄█ 	▒▒██▒ ▄██▒██░  ██▒▓██ ░▄█ ▒▓██  ▒██░▓██  ▀█ ██▒▒███   " << endl;
cout << " ░██░▓██▒  ▐▌██▒▓██▒  ▐▌██▒▒▓█  ▄ ▒██▀▀█▄ 	 ▒██░█▀  ▒██   ██░▒██▀▀█▄  ▓▓█  ░██░▓██▒  ▐▌██▒▒▓█  ▄ " << endl;
cout << " ░██░▒██░   ▓██░▒██░   ▓██░░▒████▒░██▓ ▒██	▒░▓█  ▀█▓░ ████▓▒░░██▓ ▒██▒▒▒█████▓ ▒██░   ▓██░░▒████▒" << endl;
cout << " ░▓  ░ ▒░   ▒ ▒ ░ ▒░   ▒ ▒ ░░ ▒░ ░░ ▒▓ ░▒▓	░░▒▓███▀▒░ ▒░▒░▒░ ░ ▒▓ ░▒▓░░▒▓▒ ▒ ▒ ░ ▒░   ▒ ▒ ░░ ▒░ ░" << endl;
cout << "  ▒ ░░ ░░   ░ ▒░░ ░░   ░ ▒░ ░ ░  ░  ░▒ ░ ▒	░▒░▒   ░   ░ ▒ ▒░   ░▒ ░ ▒░░░▒░ ░ ░ ░ ░░   ░ ▒░ ░ ░  ░" << endl;
cout << "  ▒ ░   ░   ░ ░    ░   ░ ░    ░     ░░   ░ 	   ░    ░ ░ ░ ░ ▒    ░░   ░  ░░░ ░ ░    ░   ░ ░  ░" << endl;  
cout << "  ░           ░          ░    ░  ░   ░            ░    ░ ░     ░        ░              ░    ░  ░ " << endl;
cout << "                                                   ░                                             " << endl;
sleep(3);
cout << "\nYou enter a cold, damp crypt." << endl;
sleep(2);
cout << "You take out your steel dagger from its scabbard." << endl;
sleep(1);
cout << "You scan the dimly lit ground, there seems to be a piece of paper lying there." << endl;
sleep(2);
cout << "You look over at the paper" << endl;
sleep(2);
cout << "It seems to be a note." << endl;
sleep(2);

if (health >= 1){//makes sure it ends when you die

cout << "Read it up(y/n)?" << endl;
cin >> i1;
	if (i1 == "y" || i1 == "yes" || i1 == "Yes" || i1 == "Y" ) {
	cout << "You read the note." << endl;
	sleep(2);
	cout << "It's a story, a few parts are missing" << endl;
	sleep(2);
	cout << "\"Long ago, there was a place called Ro’calin, the biggest of the three great kingdoms.\"" << endl;
	sleep(2);
	cout << "\"These once vast and majestic empires were locked in an eternal war with \ndemon queen Liana\"" << endl;
	sleep(2);
	cout << "\"For years the battle raged on, neither side could overtake the other.\"" << endl;
	sleep(2);
	cout << "\"Tired of this, Liana summoned the three heirs to the realm of the dead;\"" << endl;
	sleep(2);
	cout << "\"Azazel, Abaddon, and Astaroth:\"" << endl;
	sleep(2);
	cout << "\"The Demonic Trinity.\"" << endl;
	cout << "\"Seeing this, the celestial trine; the defenders of the heavens; \nsent their newborn down from the clouds to slay the demonic trinity.\"" << endl;
	sleep(2);
	cout << "\"They were known as\"" << endl;
	sleep(5);
	cout << "\"Innerbourne\"" << endl;
	sleep(2);
	cout << "The rest is illegible." << endl; 
    	}//note interaction
	else {
	cout << "\"Must be nothing.\"" << endl;    
    	}
	sleep(2);

cout << "You get up and look around to find a path illuminated by torches." << endl;
sleep(2);
cout << "\"Hopefully this will lead me out.\"\n\n" << endl;
sleep(2);
cout << "As you head down the path you come across a slimy beast!" << endl;
sleep(2);

//Slime battle   
  while (h1 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h1 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//rng base thst gets added to weapon
	//enemy damage
	srand(time(NULL));
	int d1 = rand() %2 + 1;//Slime(1)
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h1 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h1 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h1 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >=1) {
  			cout << "You used Divine Infusion!" << endl;
  			h1 -= 7;
  			h1 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h1 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			mana -= 1;
  			}
  			
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d1 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d1;
  		
  	sleep(2);
  	}//end fight
  
cout << "You managed to slay the slime!\n" << endl;
sleep(2);
cout << "You rest for a moment and gain 1 mana back" <<endl;
mana += 1;
sleep(2);
cout << "As you travel down the tunnel the path splits." << endl;
sleep(2);
cout << "Would you like to go left or right(l/r)?" << endl;
cin >> choice;

	//start tunnel split
	//left
	if (choice == "left" || choice == "l" || choice == "Left" || choice == "left." || choice == "Left."){
	//Goblin battle   
	cout << "A goblin pounces out at you!" << endl;
	sleep(2);
  	while (h2 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h2 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d2 = rand() %3 + 1;//goblin
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h2 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h2 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h2 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h2 -= 7;
  			h2 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h2 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			mana -= 1;
  			}
  			
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d2 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d2;
  		
  	sleep(2);
  	}//end fight


	}//left tunnel ends  

	//right tunnel starts
	//Skeleton battle 
	else {  
 	cout << "A skeleton charges at you!" << endl;
 	sleep(2);
 	 while (h3 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h3 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d3 = rand() %5 + 2;//goblin
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h3 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h3 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h3 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h3 -= 7;
  			h3 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h3 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			mana -= 1;
  			}
  			
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  			sleep(1);
  			}//end special attack
  		
  		cout << "You take " << d3 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d3;
  		
  		sleep(2);
  		}//end fight
	}//ends right
	
	
	
	
	
//start second tunnel
cout << "You go down the tunnel, it seems like the two paths converge into one anyways" << endl;
sleep(1);
cout << "Theres a map on the ground, pick it up? (y/n)" << endl;
cin >> i2;
	if (i2 == "y" || i2 == "yes" || i2 == "Yes" || i2 == "Y" ) {//Map
		cout << "+------------+   +------------------------+" << endl;
		cout << "|            |   |                        |" << endl;
		cout << "|            |   |        +---------+     |" << endl;
		cout << "|            |   |        |         |     |" << endl;
		cout << "|       +----+   +-----   |    X    |     |" << endl;
		cout << "|       |             |   |         |     |" << endl;
		cout << "|       |   +-----+   |   +-+  +----+     |" << endl;
		cout << "|       |   |     |   |     |  |          |" << endl;
		cout << "|       |   +-----+   |     |  |          |" << endl;
		cout << "|       |             |     |  |          |" << endl;
		cout << "|       +----+   +----+     |  |          |" << endl;
		cout << "+----+       |   |          |  |          |" << endl;
		cout << "     |       | v |          |  |          |" << endl;
		cout << "+-+  |       |   |          |  |          |" << endl;
		cout << "| |  |       |   |          |  |          |" << endl;
		cout << "| |  +-------+   +----------+  |          |" << endl;
		cout << "| |                            |          |" << endl;
		cout << "| +----------------------------+          |" << endl;
		cout << "+-----------------------------------------+" << endl;
		sleep(6);
		cout << "\"It seems to be a map of the crypt..\"" << endl;
		}//map interaction
	else {
		cout << "You shuffle along the pathway" << endl;
		}
cout << "As you walk along, the tunnel splits into 2 paths" << endl;
sleep(1);
cout << "Which one will you take?(l/r)" << endl;
cin >> choice;
	if (choice == "left" || choice == "l" || choice == "Left" || choice == "left." || choice == "Left."){
		cout << "You turn left and walk into the darkness." << endl;
		sleep(2);
		cout << "You walk into what appears to be a large room" << endl;
		sleep(3);
		cout << "\"There's something on the wall....\"" << endl;
		sleep(2);
		cout << "You realize too late, the walls are covered in slime!" << endl;
		sleep(2);
		cout << "You try and escape but the slime blocks the exit" << endl;
		sleep(2);
		cout << "You pull out your dagger...." << endl;
		}
			while (h4 >= 1) {//giant slime battle
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h4 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				srand(time(NULL));//so RNG does not repeat the same number 
				int basedmg = rand() %5 + 1;//first weapon
				//enemy damage
				srand(time(NULL));
				int d4 = rand() %15 + 2;//giant slime
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  				sleep(1);
  				cout << "You chose attack!" << endl;
  				sleep(1);
  				cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  				h4 -= basedmg;//subtract health from enemy
  				sleep(1);
  				}//end attack
  	
  				//start special attack
  				else {
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h4 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  				cout << "You used Critical Smite!" << endl;
  				h4 -= (basedmg * 2);
  				sleep(1);
  				cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  				cout << "You used Divine Infusion!" << endl;
  				h4 -= 7;
  				h4 -= basedmg;
  				sleep(1);
  				cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  				mana -= 1;
  				}
  				
  				//Vitalic Drain saps 5 hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h4 -= 5;
  				health += 5;
  				sleep(1);
  				cout << "You sapped 5 health!" << endl;
  				mana -= 1;
  				}
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d4 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d4;
  		
  				sleep(2);
  			} // end giant slime fight
		cout << "The giant slime disintegrates, leaving behind a sword, probably from \none of it's past victims" << endl;
		sleep(2);
		cout << "Pick it up?(y/n)" << endl; 
		cin >> i3;
			if (i3 == "y" || i3 == "yes" || i3 == "Yes" || i3 == "Y" ) {	
				s2++ ;
				s1-- ;
				cout << "You pick it up." << endl;
				sleep(2);
				cout << "The blade makes you feel more powerful" << endl;
				sleep(1);
				cout << "*damage has been increased!*\n*special damage increased!*" << endl;
				
				sleep(2);
				}
			else {
				cout << "\"I think i'll stick with my trusty steel dagger for now.\"\n" << endl;
				sleep(2);
			}
		cout << "You walk back to the place where the tunnel splits" << endl;
		sleep(2);
	if (choice == "right" || choice == "Right" || choice == "r" || choice == "Right." || choice == "right.") {
		cout << "You take a right" << endl;
		sleep(2);
		}
	cout << "A stairway appears into your view" << endl;
	sleep(2);
	cout << "You're almost there..." << endl;
	sleep(2);
	cout << "You see a figure out of the corner of your eye" << endl;
	sleep(1);
	cout << "It's a goblin chief!" << endl;
	sleep(2);
		if (s2 == 1) {
			cout << "You take out your newfound sword, its time to fight!\n" << endl;
			}
		else {
			cout << "You take out your dagger, ready for an attack.\n" << endl;
			}
sleep(2);
while (h5 >= 1) {//goblin chief attack
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h5 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int basedmg = rand() %5 + 1;//first weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d5 = rand() %15 + 8;//goblin chief
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h5 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s1 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  						h5 -= basedmg;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h5 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s1 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h5 -= (basedmg * 2);
  						sleep(1);
  						cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h5 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s1 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h5 -= 7;
  						h5 -= basedmg;
  						sleep(1);
  						cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h5 -= 7;
  						h5 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 7 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps 5 hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h5 -= 5;
  				health += 5;
  				sleep(1);
  				cout << "You sapped 5 health!" << endl;
  				mana -= 1;
  				}
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d5 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d5;
  		
  				sleep(2);
  			}//end goblin chief attack
cout << "The goblin falls, dropping a health potion" << endl;
sleep(2); 
cout << "You drink the potion, it makes you feel better" << endl;
health += 50;
mana += 5;
sleep(2);
cout << "Down the staircase you go, as the air gets more musky and humid" << endl;
sleep(2);
cout << "You start to walk and you stumble on some bones" << endl;
sleep(2);
cout << "Its a skeleton of a past warrior, with its hand gripping a claymore" << endl;
sleep(2);
	if (s2 == 1) {
		cout << "Do want to take the claymore instead of your longsword?(y/n)" << endl;
		cin >> i4;
			if (i4 == "y" || i4 == "yes" || i4 == "Yes" || i4 == "Y" ) {
				s2-- ;
				s3++ ;
				cout << "You take the giant sword with your two hands, its power is reflected by its size" << endl;
				sleep(1);
				cout << "*increased damage*\n*decreased special damage*" << endl;
				sleep(2);
				}
			else {
				cout << "\"The sword I have gives me a little more mobility, I'll stick with it instead.\"" << endl;
				sleep(2);
				}
	}
	if (s1 == 1) {
		cout << "You pick it up, its better than a dagger after all" << endl;
		sleep(1);
		cout << "*damage increased!*" <<  endl;
		s1-- ;
		s3++ ;
		sleep(2);
	}
cout << "The ground starts to rumble...." << endl;
sleep(2);
cout << "A giant troll appears!!" << endl;
sleep(2);
if (s2 == 1) {
	cout << "You pull out your longsword, ready to fight" << endl;
	sleep(2);
	}
if (s3 == 1) {
	cout << "You pull out your claymore, ready to fight" << endl;
	sleep(2);
	}
while (h6 >= 1) {//giant troll attack
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h6 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int claymore = rand() %30 + 10;//third weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d6 = rand() %25 + 8;//giant troll
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h6 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s3 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << claymore << " damage!" << endl;//damage dealt statement
  						h6 -= claymore;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {			
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h6 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h6 -= (claymore + 7);
  						sleep(1);
  						cout << "You dealt " << claymore + 7 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h6 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h6 -= 4;
  						h6 -= claymore;
  						sleep(1);
  						cout << "You dealt " << claymore + 4 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h6 -= 10;
  						h6 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 10 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps 5 hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h6 -= 5;
  				health += 5;
  				sleep(1);
  				cout << "You sapped 5 health!" << endl;
  				mana -= 1;
  				}
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You don't have enough mana!" << endl;
  				}
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d6 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d6;
  		
  				sleep(2);
  			}//end giant troll attack
	
cout << "You thrust your blade into the troll's chest, spewing blood everywhere." << endl;
cout << "Blinded with blood in your eyes; you spin around hacking the beast's grotesque head off." << endl;		
cout << "It hits the ground with a *thump*" << endl;
		
		


}//ends life statement
else {//starts death statement
cout << " ▄▀▀▀▀▄    ▄▀▀█▄   ▄▀▀▄ ▄▀▄  ▄▀▀█▄▄▄▄      ▄▀▀▀▀▄   ▄▀▀▄ ▄▀▀▄  ▄▀▀█▄▄▄▄  ▄▀▀▄▀▀▀▄ " << endl;
cout << "█         ▐ ▄▀ ▀▄ █  █ ▀  █ ▐  ▄▀   ▐     █      █ █   █    █ ▐  ▄▀   ▐ █   █   █ " << endl;
cout << "█    ▀▄▄    █▄▄▄█ ▐  █    █   █▄▄▄▄▄      █      █ ▐  █    █    █▄▄▄▄▄  ▐  █▀▀█▀ " << endl;
cout << "█     █ █  ▄▀   █   █    █    █    ▌      ▀▄    ▄▀    █   ▄▀    █    ▌   ▄▀    █ " << endl;
cout << "▐▀▄▄▄▄▀ ▐ █   ▄▀  ▄▀   ▄▀    ▄▀▄▄▄▄         ▀▀▀▀       ▀▄▀     ▄▀▄▄▄▄   █     █  " << endl;
cout << "▐         ▐   ▐   █    █     █    ▐                            █    ▐   ▐     ▐  " << endl;
cout << "                  ▐    ▐     ▐                                 ▐                 " << endl;
}//ends death statement
return 0;            
}
