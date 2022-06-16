#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;


//PROTOTYPE
void paperArt();

int life = 3;

int maze(string m)
{
	const int WIDTH = 21; // Height is 11
	int pos[] = { 11, 6 };
	string map;
	auto atPos = [&](int offset) {return ((pos[1] - 1) * WIDTH) + pos[0] + pos[1] + offset - 2; };

	m.erase(0, 1);

	while (true)
	{
		system("cls");

		map = m;

		map[atPos(0)] = 'O';

		cout << map;

		switch (_getch())
		{
		case 'W': case 'w':
			if (atPos(-WIDTH) > 0)
				if (map[atPos(-(WIDTH + 1))] != '#')
					pos[1] -= 1;
			break;
		case 'A': case 'a':
			if (map[atPos(-1)] != '#' && pos[0] != 1)
				pos[0] -= 1;
			break;
		case 'S': case 's':
			if (atPos(WIDTH) < 240)
				if (map[atPos(WIDTH + 1)] != '#')
					pos[1] += 1;
			break;
		case 'D': case 'd':
			if (map[atPos(1)] != '#' && pos[0] != WIDTH)
				pos[0] += 1;
			break;
		default:
			break;
		}

		for (int i = 1; i <= 4; i++)
		{
			if (map[atPos(0)] == i + '0')
			{
				system("cls");
				return i;
			}
		}
	}
}

class DialogueData
{
public:

	string* dialogue = new string[30];
	string name;

	void constructDialogue()
	{
		dialogue = new string[30];
	}

}narratorData, toturialNPCData, playerData, judgeData, prosecutorData, detectiveData, bilalData;


void createDialogueArray()
{
	narratorData.constructDialogue();
	toturialNPCData.constructDialogue();
	playerData.constructDialogue();
	judgeData.constructDialogue();
	prosecutorData.constructDialogue();
	detectiveData.constructDialogue();
	bilalData.constructDialogue();
}

void clearDialogueArray()
{
	delete[] narratorData.dialogue;
	delete[] toturialNPCData.dialogue;
	delete[] playerData.dialogue;
	delete[] judgeData.dialogue;
	delete[] prosecutorData.dialogue;
	delete[] detectiveData.dialogue;
	delete[] bilalData.dialogue;

	createDialogueArray();
}

void setName(std::string name)
{
	//SET NAME
	toturialNPCData.name = "NPC";
	playerData.name = name;
	detectiveData.name = "DETECTIVE";
	judgeData.name = "JUDGE";
	prosecutorData.name = "PROSECUTOR";
	bilalData.name = "BILAL";
}

void setName()
{
	//SET NAME
	toturialNPCData.name = "NPC";
	playerData.name = "PLACEHOLDER";
	detectiveData.name = "DETECTIVE";
	judgeData.name = "JUDGE";
	prosecutorData.name = "PROSECUTOR";
	bilalData.name = "BILAL";
}

void setDialogueIntro()
{
	//TOTU NPC DATA
	toturialNPCData.dialogue[0] = "Some quick grubs like sushi and breads";
	toturialNPCData.dialogue[1] = "1. I met the victim for a quick lunch at 2PM.";


	//NARRATOR
	narratorData.dialogue[0] = "Are you ready to defend justice and serve the greater good?";
	narratorData.dialogue[1] = "Then, the trial of Bilal VS Imam is in session. You will embark on a journey to defend the innocent and bring the truth.";
	narratorData.dialogue[2] = "First, let's bring you the basic controls of this game.";
	narratorData.dialogue[3] = "This is very straightforward, even a baby could do it. So, don't screw up. High stakes going on here HAHAHAHAH.Kidding.It's just a game no one is hurt during the production of this game or during the gameplay";
	narratorData.dialogue[4] = "There are 2 basic controls. 'Press' and 'Objection'.";
	narratorData.dialogue[5] = "'Press' is when you push the witness to tell the truth when there is no evidence to show";
	narratorData.dialogue[6] = "'Objection' is used when you have a strong evidence or a contradiction in a statement";
	narratorData.dialogue[7] = "okay, let's try it out";
	narratorData.dialogue[8] = "Here's an example of statement: \n  1. I was at the mall to grab some food \n try 'PRESS";
	narratorData.dialogue[10] = "Easy, right?";
	narratorData.dialogue[11] = "For 'Objection', you will need to look out for a contradiction of statement.";
	narratorData.dialogue[12] = "here's an example, try 'Objection'";
	narratorData.dialogue[14] = "Easy, right? \n But be warned. You are given 5 tries. Fail to solve the case, the defendant will be guilty and sentenced to death. \n No pressure. It's just a game.";
	narratorData.dialogue[16] = "Are you up for the case, young attorney?";
	narratorData.dialogue[17] = "Alright, here's the info you need. You might need it for defending your client.";
	narratorData.dialogue[18] = "Name of Defendant: Bilal bin Rabah (yeah, like the first muadzin in Islam) \n Age: 29 \n In custody because: Framed to be a murderer  ";
	narratorData.dialogue[19] = "So far so good?";
	narratorData.dialogue[20] = "Great. I wish you the best of luck on this case and enjoy the journey.";
	narratorData.dialogue[21] = "What is your name?";

	
	//PLAYER
	playerData.dialogue[0] = "HOLD IT!!! What particular food are you buying?";
	playerData.dialogue[1] = "OBJECTION!!!!! There's a contradiction in the witness statement, Your Honour. The witness met victim for a quick lunch and the report from the detective clearly state there were poison in his food";


	//DETECTIVE'S DIALOGUE
	detectiveData.dialogue[0] = "1. The body is supposedly dead 2 hours, around 2PM before we arrived. the report says he was poisoned from a substance in his asophogus, indicating he is eating a meal";
}

void setDialogueFirst()
{
	//NARRATOR
	narratorData.dialogue[0] = "*the next day*";
	narratorData.dialogue[1] = "*sound of hammer pound*";
	narratorData.dialogue[2] = "*the court is in shocked*";


	//PLAYER
	playerData.dialogue[0] = "Calm Down, bilal. I'm doing all i can to prove you innocent. You gotta stay chill";
	playerData.dialogue[1] = "okay, I will do my best to defend you.";
	playerData.dialogue[2] = "*What if I can't prove him right? Maybe he should be guilty....*";
	playerData.dialogue[3] = "*YEET!!!! I lost my focus just now* Uhhhh, the defendant is ready your honor";
	playerData.dialogue[4] = "*YEEET!!!! This detective has no idea he is about to give a statement. ";
	playerData.dialogue[5] = "*Gulp. We're gonna die*";
	playerData.dialogue[6] = "*We're gonna die, for sure*";
	playerData.dialogue[7] = "*Yeet. BILAL. We're gonna die for sure*";
	playerData.dialogue[8] = "*okay, I need to find the contradiction in bilal's statement. Remember, 'press' for further info or 'objection' for proving a statement is contradicting.";
	//Press and Objection
	playerData.dialogue[9] = "HOLD IT. So you came right before anyone else did?";
	playerData.dialogue[10] = "That's right. he is the bilal after all. ";

	playerData.dialogue[11] = "OBJECTION. I may have found the first contradiction in this statement, your honor.";//correct Objection
	playerData.dialogue[12] = "Bilal arrived at 5:30 PM. Remember the statement by the detective that the victim is dead 4:40 in the morning?";
	playerData.dialogue[13] = "*Slams the table* \n Bilal could have not killed him while he is not at the crime scene";
	playerData.dialogue[14] = "*YEEEEEETTTTTT. He's right. I didn't thought of that. I'm screwed*";

	playerData.dialogue[15] = "HOLD IT. How do you recognise him in?";
	playerData.dialogue[16] = "So, that's how a scientist works. Even after work, they don't shower \n *Yeet, i think i smell. I better get my shower when this case is done*";

	playerData.dialogue[17] = "OBJECTION. There's a contradiction in this statement, your honor."; //wrong objection
	playerData.dialogue[18] = "He's...Umm...";
	playerData.dialogue[19] = "Shoot! I need to be careful with that one";

	playerData.dialogue[20] = "HOLD IT! So you tried everything you could to wake him up?";
	playerData.dialogue[21] = "If I were him, I would do the same action.";
	playerData.dialogue[22] = "HOLD IT. There are cases where best friend stabs their back";
	playerData.dialogue[23] = "*Jeez, bilal don't get all emotional on me*";
	playerData.dialogue[24] = "I gotta find some contradictions in this statement."; //Before repeat


	//PROSECUTOR
	prosecutorData.dialogue[0] = "The prosecution is ready, your honor.";
	prosecutorData.dialogue[1] = "Thank you, your honor.";
	prosecutorData.dialogue[2] = "As we know, the professor known as Fikri was killed right before Dawn at Masjid MITC.";
	prosecutorData.dialogue[3] = "He was seen lying cold on the doorstep of masjid by my client, Imam.";
	prosecutorData.dialogue[4] = "He believed the professor was killed by the bilal as he is the first person to reach at the masjid";
	prosecutorData.dialogue[5] = "Imam noticed that azan subuh is not hearing ";
	prosecutorData.dialogue[6] = "He also believed the professor is killed because of vengeance";
	prosecutorData.dialogue[7] = "OBJECTION. How can he confirm that he arrived 5:30 in the morning?";


	//JUDGE
	judgeData.dialogue[0] = "The case of bilal vs Imam is now in session.";
	judgeData.dialogue[1] = playerData.name + ", is there something bothering you ? We're in session now";
	judgeData.dialogue[2] = "Then, the prosecution may do your opening statement.";
	judgeData.dialogue[3] = "Thank you, prosecution. We will hear the statement from the Head of Police Department, Detective Jemahat.";
	judgeData.dialogue[4] = "Detective, behave. this is a place of justice. ";
	judgeData.dialogue[5] = "Very Well, then. The court invites the defendant, bilal to give his statement.";
	judgeData.dialogue[6] = " Bilal, you may give your opening statement. ";

	judgeData.dialogue[7] = "HMMM??? What do you mean by that?"; //correct Objection
	judgeData.dialogue[8] = "ORDER! ORDER! There is a contradiction there, good job.";
	judgeData.dialogue[9] = "Okay, bilal. let's start the hearing";

	judgeData.dialogue[10] = "Hmmmmm, let's hear it"; //wrong objection
	judgeData.dialogue[11] = "I can't accept this objection";

	judgeData.dialogue[12] = "";
	judgeData.dialogue[13] = "";


	//DETECTIVE
	detectiveData.dialogue[0] = "WAITTTTTT!!!!! Why am I here?";
	detectiveData.dialogue[1] = "Apologize for my behaviour, your honor.";
	detectiveData.dialogue[2] = "From the report, we can come up with few possibilities.";
	detectiveData.dialogue[3] = "1. The victim has died about two hours before we arrived, approximately 4:40 in the morning the victim is already dead ";
	detectiveData.dialogue[4] = "2. There's a murder weapon located right next to body which is a bloody fish line";
	detectiveData.dialogue[5] = "3. The cause of death is loss of blood due to strangling on the neck by the fish line";
	detectiveData.dialogue[6] = "4. We also can conclude that bilal is the possible murderer as he is the first person to come to masjid";


	//BILAL's DIALOGUE
	bilalData.dialogue[0] = playerData.name + ", YOU GOTTA HELP ME.I'M INNOCENT";
	bilalData.dialogue[1] = "I didn't kill the Professor. I was accused. I couldn't kill my best buddy.";
	bilalData.dialogue[2] = "*stares at the audience*";
	bilalData.dialogue[3] = "I.AM.INNOCENTTTTTT!!!!!";
	bilalData.dialogue[4] = "Here's what I remember from the incident";

	//GIVING 1st STATEMENT
	bilalData.dialogue[5] = "1. I came 5:30, to open the masjid and the call of prayer for subuh.";
	bilalData.dialogue[6] = "2. As i arrived, I saw a body lying on the doorstep of. the body is identified as professor Fikri.";
	bilalData.dialogue[7] = "3. I tried waking him up, but no response.";
	bilalData.dialogue[8] = "4. i did not kill my own friend. He is my best bud since high school";

	//STATEMENT 1 EXPLANATION AND OBJECTION RESPONSE
	bilalData.dialogue[9] = "Well, duh. I am the bilal and I am assigned to call for prayer.";
	bilalData.dialogue[10] = "HOLD IT. I can give a better statement, for enlighting it"; //correct Objection
	bilalData.dialogue[11] = "He always wear a labcoat, even outside of his work station";
	bilalData.dialogue[12] = "Yes. I even do a CPR on him, but he shows no response.";
	bilalData.dialogue[13] = "YOU WATCH YOUR MOUTH, " + playerData.name + ".I AM HIS BEST FRIEND";
}

class DialogueBox
{

public:

	void textBox(DialogueData data, int textNum)
	{
		cout << "=====================================" << endl;
		cout << data.name << endl;
		cout << "-------------------------------------" << endl;
		cout << endl;
		cout << data.dialogue[textNum] << endl;
		cout << endl;
		cout << "=====================================" << endl;

		do
		{
			cout << '\n' << "Press 'ENTER' to continue...";
		} while (cin.get() != '\n');
		system("CLS");

	}

	void detailBox(DialogueData data, int textNum, int textNum2, int textNum3, int textNum4)
	{
		cout << "=====================================" << endl;
		cout << "CASE DETAILS" << endl;
		cout << "=====================================" << endl;
		cout << endl;
		cout << data.dialogue[textNum] << endl;
		cout << data.dialogue[textNum2] << endl;
		cout << data.dialogue[textNum3] << endl;
		cout << data.dialogue[textNum4] << endl;
		cout << "=====================================" << endl;
	}

	int statementBox(DialogueData data, int textNum)
	{
		cout << "=====================================" << endl;
		cout << data.name << endl;
		cout << "-------------------------------------" << endl;
		cout << endl;
		cout << data.dialogue[textNum] << endl;
		cout << endl;
		cout << "=====================================" << endl;
		cout << "E - PRESS" << endl;
		cout << "F - OBJECTION" << endl;
		cout << "ENTER - CONTINUE" << endl;

		bool isChosen = false;
		char key;
		do
		{
			key = _getch();

			if ((key == 'F') || (key == 'f'))
			{
				system("CLS");
				isChosen = true;
				return 2;
			}
			else if ((key == 'E') || (key == 'e'))
			{
				system("CLS");
				isChosen = true;
				return 1;
			}
			else
			{
				system("CLS");
				isChosen = true;
				return 0;
			}

		} while (!isChosen);



		// 0 - Continue
		// 1 - Press
		// 2 - Objection
	}
};

void pressEnter()
{
	do
	{
		cout << '\n' << "Press 'ENTER' to continue...";
	} while (cin.get() != '\n');
	system("CLS");

}

void wrongObjection()
{
	DialogueBox DB;

	DB.textBox(playerData, 17);
	DB.textBox(judgeData, 10);
	DB.textBox(playerData, 18);
	DB.textBox(judgeData, 11);
	cout << "LIFE LEFT: " << life << endl << endl;
	DB.textBox(playerData, 19);
}

void intro()
{
	DialogueBox DB;
	bool proceed = false;


	DB.textBox(narratorData, 21);

	std::string name;
	std::cout << "NAME: ";
	std::getline(cin, name);
	setName(name);
	system("CLS");

	DB.textBox(narratorData, 0);
	DB.textBox(narratorData, 1);
	DB.textBox(narratorData, 2);
	DB.textBox(narratorData, 3);
	DB.textBox(narratorData, 4);
	DB.textBox(narratorData, 5);
	DB.textBox(narratorData, 6);
	DB.textBox(narratorData, 7);


	while (!proceed)
	{
		if (DB.statementBox(narratorData, 8) == 1)
		{
			proceed = true;
			DB.textBox(playerData, 0);
		}
	}

	DB.textBox(toturialNPCData, 0);
	DB.textBox(narratorData, 10);
	DB.textBox(narratorData, 11);
	DB.textBox(narratorData, 12);

	DB.textBox(detectiveData, 0);

	proceed = false;
	while (!proceed)
	{
		DB.detailBox(detectiveData, 0, 1, 2, 3);
		if (DB.statementBox(toturialNPCData, 1) == 2)
		{
			proceed = true;
			DB.textBox(playerData, 1);
		}
	}

	DB.textBox(narratorData, 14);
	DB.textBox(narratorData, 16);
	DB.textBox(narratorData, 17);
	DB.textBox(narratorData, 18);
	DB.textBox(narratorData, 19);
	DB.textBox(narratorData, 20);
}

void firstChapter()
{
	DialogueBox DB;

	DB.textBox(bilalData, 0);
	DB.textBox(playerData, 0);
	DB.textBox(bilalData, 1);
	DB.textBox(playerData, 1);

	DB.textBox(narratorData, 0);
	DB.textBox(narratorData, 1);

	DB.textBox(judgeData, 0);
	DB.textBox(prosecutorData, 0);
	DB.textBox(playerData, 2);
	DB.textBox(judgeData, 1);
	DB.textBox(playerData, 3);
	DB.textBox(judgeData, 2);

	//Prosecutor give Case Details
	DB.textBox(prosecutorData, 1);
	DB.textBox(prosecutorData, 2);
	DB.textBox(prosecutorData, 3);
	DB.textBox(prosecutorData, 4);
	DB.textBox(prosecutorData, 5);
	DB.textBox(prosecutorData, 6);

	DB.textBox(judgeData, 3);
	DB.textBox(detectiveData, 0);

	DB.textBox(playerData, 4);
	DB.textBox(playerData, 5);

	DB.textBox(judgeData, 4);

	DB.textBox(detectiveData, 1);
	DB.textBox(playerData, 6);

	//Detective give Case Details
	DB.textBox(detectiveData, 2);
	DB.textBox(detectiveData, 3);
	DB.textBox(detectiveData, 4);
	DB.textBox(detectiveData, 5);
	DB.textBox(detectiveData, 6);

	DB.textBox(judgeData, 5);

	DB.textBox(bilalData, 2);
	DB.textBox(bilalData, 3);
	DB.textBox(bilalData, 4);

	
	//Bilal give testimony
	bool proceed = false;
	int option = 0;


	while (!proceed)
	{
		//LOSE
		if (life <= 0)
		{
			cout << "=====================================" << endl;
			cout << "CASE DETAILS" << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "YOU LOST THE CASE!" << endl;
			cout << "=====================================" << endl;
			return;
		}
		else
		{
			//1 
			if (!proceed)
			{
				DB.detailBox(detectiveData, 3, 4, 5, 6);
				option = DB.statementBox(bilalData, 5);


				if (option == 1)
				{
					DB.textBox(playerData, 9);
					DB.textBox(bilalData, 9);
					DB.textBox(playerData, 10);
				}
			}
			//2
			if (!proceed && option != 2)
			{
				DB.detailBox(detectiveData, 3, 4, 5, 6);
				option = DB.statementBox(bilalData, 6);
				if (option == 1)
				{
					DB.textBox(playerData, 15);
					DB.textBox(bilalData, 11);
					DB.textBox(playerData, 16);
				}
				
			}
			//3
			if (!proceed && option != 2)
			{
				DB.detailBox(detectiveData, 3, 4, 5, 6);
				option = DB.statementBox(bilalData, 7);
				if (option == 1)
				{
					DB.textBox(playerData, 20);
					DB.textBox(bilalData, 12);
					DB.textBox(playerData, 21);
				}
				
			}
			//4
			if (!proceed && option != 2)
			{
				DB.detailBox(detectiveData, 3, 4, 5, 6);
				option = DB.statementBox(bilalData, 8);
				if (option == 1)
				{
					DB.textBox(playerData, 22);
					DB.textBox(bilalData, 13);
					DB.textBox(playerData, 23);
				}
				
			}

			if (!proceed)
			{
				//IF OBJECTION
				cout << "                      CHOOSE THE CONTRADICTION                        " << endl;
				cout << "======================================================================" << endl;
				cout << "Go to the positions of the numbers (1, 2, 3, 4) to select your answer." << endl;
				cout << "Control : W, A, S, D." << endl;
				pressEnter();

				if (option == 2)
				{		
					proceed = (maze(R"(
#### ### ##### ######
####      1### ######
####### ###### ######
#     #            ##
# ### ####  #########
#4### ####  ###### 2#
##### ####     ### ##
#####      ### ### ##
#     ########     ##
# ####    3##########
#      ##############)") == 1);

					if (!proceed)
					{
						--life;
						wrongObjection();
						continue;

						option = 0;

					}
				}
				
			}
			
			//REPEAT
			if (!proceed)
			{
				DB.textBox(playerData, 24);
			}
		}
	}

	DB.textBox(playerData, 11);
	DB.textBox(judgeData, 10);
	DB.textBox(playerData, 12);
	DB.textBox(playerData, 13);

	DB.textBox(narratorData, 2);

	DB.textBox(judgeData, 8);

	DB.textBox(prosecutorData, 7);
	DB.textBox(playerData, 14);

	DB.textBox(bilalData, 10);


	DB.textBox(judgeData, 9);

}


int main()
{
	
	setDialogueIntro();
	intro();
	clearDialogueArray();
	
	setDialogueFirst();
	firstChapter();
	clearDialogueArray();

	if (life > 0)
	{
		cout << "3 Hours Later..." << endl;
		pressEnter();

		paperArt();

		pressEnter();

		cout << "=========================================================" << endl;
		cout << "Thanks for completing the journey, the trial is now over." << endl;
		cout << "Stay tune for more inciting cases!" << endl;
		cout << "=========================================================" << endl;

		pressEnter();
	}
	
	return 0;
}

void paperArt()
{
	std::cout <<
		R"(
         _____  _    _  ____  ______ _   _ _______   __    ____  _    _ _      _      ______ _______ _____ _   _ 
        |  __ \| |  | |/ __ \|  ____| \ | |_   _\ \ / /   |  _ \| |  | | |    | |    |  ____|__   __|_   _| \ | |
        | |__) | |__| | |  | | |__  |  \| | | |  \ V /    | |_) | |  | | |    | |    | |__     | |    | | |  \| |
        |  ___/|  __  | |  | |  __| | . ` | | |   > <     |  _ <| |  | | |    | |    |  __|    | |    | | | . ` |
        | |    | |  | | |__| | |____| |\  |_| |_ / . \    | |_) | |__| | |____| |____| |____   | |   _| |_| |\  |
        |_|    |_|  |_|\____/|______|_| \_|_____/_/ \_\   |____/ \____/|______|______|______|  |_|  |_____|_| \_|
                                                                                                                  
       ___________________________________________________________________________________________________________
                                                                                                                 
        AKHBARI BINTI SUHRAT                                                                       MAY 18, 2020
       ___________________________________________________________________________________________________________
                                                                                                                  
        __________________________________________________                                                        
       |A Lawyer victoriously defended Bilal on trial of  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |the century "Bilal Vs Imam" as (Player) proves the|   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |innocence of Bilal with cold-heart evidence and   |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |proves the witness testimony to be guilty and     |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |fishy. Bilal, who is accused of killing Professor |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |found not guilty because Imam who is the witness  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |of this case found guilty by killing Professor    |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |with a fishline.                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |Imam is said to be sentenced to death this coming |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |Friday and will be held at Murky Water Max Prison.|   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |He will receive a death penalty under the act of  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |accusing an innocent people and killing.          |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |__________________________________________________|   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
                                                                                                                  
                                                               __________________________________________________ 
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |                                                  |
       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   |__________________________________________________|
)" << std::endl;
}