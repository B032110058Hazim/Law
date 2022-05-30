#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct DialogueData
{
	string dialogue[10][100];
	string name;
}narratorData, toturialNPCData, playerData, judgeData, prosecutorData, detectiveData, bilalData;


void setDialogueData()
{
	//SET NAME

	toturialNPCData.name = "NPC";
	playerData.name = "PLAYER";
	detectiveData.name = "DETECTIVE";
	judgeData.name = "JUDGE";
	prosecutorData.name = "PROSECUTOR";
	bilalData.name = "BILAL";



	//TOTU NPC DATA
	//INTRO

	toturialNPCData.dialogue[0][0] = "Some quick grubs like sushi and breads";
	toturialNPCData.dialogue[0][1] = "1. I met the victim for a quick lunch at 2PM.";


	//NARRATOR'S DIALOGUE
	//INTRO

	narratorData.dialogue[0][0] = "Are you ready to defend justice and serve the greater good?";
	narratorData.dialogue[0][1] = "Then, the trial of Bilal VS Imam is in session. You will embark on a journey to defend the innocent and bring the truth.";
	narratorData.dialogue[0][2] = "First, let's bring you the basic controls of this game.";
	narratorData.dialogue[0][3] = "This is very straightforward, even a baby could do it. So, don't screw up. High stakes going on here HAHAHAHAH.Kidding.It's just a game no one is hurt during the production of this game or during the gameplay";
	narratorData.dialogue[0][4] = "There are 2 basic controls. 'Press' and 'Objection'.";
	narratorData.dialogue[0][5] = "'Press' is when you push the witness to tell the truth when there is no evidence to show";
	narratorData.dialogue[0][6] = "'Objection' is used when you have a strong evidence or a contradiction in a statement";
	narratorData.dialogue[0][7] = "okay, let's try it out";
	narratorData.dialogue[0][8] = "Here's an example of statement: \n  1. I was at the mall to grab some food \n try 'PRESS";
	narratorData.dialogue[0][10] = "Easy, right?";
	narratorData.dialogue[0][11] = "For 'Objection', you will need to look out for a contradiction of statement.";
	narratorData.dialogue[0][12] = "here's an example, try 'Objection'";
	narratorData.dialogue[0][14] = "Easy, right? \n But be warned. You are given 5 tries. Fail to solve the case, the defendant will be guilty and sentenced to death. \n No pressure. It's just a game.";
	narratorData.dialogue[0][16] = "Are you up for the case, young attorney?";
	narratorData.dialogue[0][17] = "Alright, here's the info you need. You might need it for defending your client.";
	narratorData.dialogue[0][18] = "Name of Defendant: Bilal bin Rabah (yeah, like the first muadzin in Islam) \n Age: 29 \n In custody because: Framed to be a murderer  ";
	narratorData.dialogue[0][19] = "So far so good?";
	narratorData.dialogue[0][20] = "Great. I wish you the best of luck on this case and enjoy the journey.";


	//STATEMENT 1
	narratorData.dialogue[1][0] = "*the next day*";
	narratorData.dialogue[1][1] = "*sound of hammer pound*";
	narratorData.dialogue[1][2] = "*the court is in shocked*";


	//PLAYER'S DIALOGUE
	//INTRO

	playerData.dialogue[0][0] = "HOLD IT!!! What particular food are you buying?";
	playerData.dialogue[0][1] = "OBJECTION!!!!! There's a contradiction in the witness statement, Your Honour. The witness met victim for a quick lunch and the report from the detective clearly state there were poison in his food";

	//STATEMENT 1
	playerData.dialogue[1][0] = "Calm Down, bilal. I'm doing all i can to prove you innocent. You gotta stay chill";
	playerData.dialogue[1][1] = "okay, I will do my best to defend you.";
	playerData.dialogue[1][2] = "*What if I can't prove him right? Maybe he should be guilty....*";
	playerData.dialogue[1][3] = "*YEET!!!! I lost my focus just now* Uhhhh, the defendant is ready your honor";
	playerData.dialogue[1][4] = "*YEEET!!!! This detective has no idea he is about to give a statement. ";
	playerData.dialogue[1][5] = "*Gulp. We're gonna die*";
	playerData.dialogue[1][6] = "*We're gonna die, for sure*";
	playerData.dialogue[1][7] = "*Yeet. BILAL. We're gonna die for sure*";
	playerData.dialogue[1][8] = "*okay, I need to find the contradiction in bilal's statement. Remember, 'press' for further info or 'objection' for proving a statement is contradicting.";
	//Press and Objection
	playerData.dialogue[1][9] = "HOLD IT. So you came right before anyone else did?";
	playerData.dialogue[1][10] = "That's right. he is the bilal after all. ";

	playerData.dialogue[1][11] = "OBJECTION. I may have found the first contradiction in this statement, your honor.";//correct Objection
	playerData.dialogue[1][12] = "Bilal arrived at 5:30 PM. Remember the statement by the detective that the victim is dead 4:40 in the morning?";
	playerData.dialogue[1][13] = "*Slams the table* \n Bilal could have not killed him while he is not at the crime scene";
	playerData.dialogue[1][14] = "*YEEEEEETTTTTT. He's right. I didn't thought of that. I'm screwed*";

	playerData.dialogue[1][15] = "HOLD IT. How do you recognise him in?";
	playerData.dialogue[1][16] = "So, that's how a scientist works. Even after work, they don't shower \n *Yeet, i think i smell. I better get my shower when this case is done*";

	playerData.dialogue[1][17] = "OBJECTION. There's a contradiction in this statement, your honor."; //wrong objection
	playerData.dialogue[1][18] = "He's...Umm...";
	playerData.dialogue[1][19] = "Shoot! I need to be careful with that one";

	playerData.dialogue[1][20] = "HOLD IT! So you tried everything you could to wake him up?";
	playerData.dialogue[1][21] = "If I were him, I would do the same action.";
	playerData.dialogue[1][22] = "HOLD IT. There are cases where best friend stabs their back";
	playerData.dialogue[1][23] = "*Jeez, bilal don't get all emotional on me*";
	playerData.dialogue[1][24] = "I gotta find some contradictions in this statement."; //Before repeat


	//PROSECUTOR's DIALOGUE
	//STATEMENT 1
	prosecutorData.dialogue[1][0] = "The prosecution is ready, your honor.";
	prosecutorData.dialogue[1][1] = "Thank you, your honor.";
	prosecutorData.dialogue[1][2] = "As we know, the professor known as Fikri was killed right before Dawn at Masjid MITC.";
	prosecutorData.dialogue[1][3] = "He was seen lying cold on the doorstep of masjid by my client, Imam.";
	prosecutorData.dialogue[1][4] = "He believed the professor was killed by the bilal as he is the first person to reach at the masjid";
	prosecutorData.dialogue[1][5] = "Imam noticed that azan subuh is not hearing ";
	prosecutorData.dialogue[1][6] = "He also believed the professor is killed because of vengeance";
	prosecutorData.dialogue[1][7] = "OBJECTION. How can he confirm that he arrived 5:30 in the morning?";


	//JUDGE's DIALOGUE
	//STATEMENT 1
	judgeData.dialogue[1][0] = "The case of bilal vs Imam is now in session.";
	judgeData.dialogue[1][1] = playerData.name + ", is there something bothering you ? We're in session now";
	judgeData.dialogue[1][2] = "Then, the prosecution may do your opening statement.";
	judgeData.dialogue[1][3] = "Thank you, prosecution. We will hear the statement from the Head of Police Department, Detective Jemahat.";
	judgeData.dialogue[1][4] = "Detective, behave. this is a place of justice. ";
	judgeData.dialogue[1][5] = "Very Well, then. The court invites the defendant, bilal to give his statement.";
	judgeData.dialogue[1][6] = " Bilal, you may give your opening statement. ";

	judgeData.dialogue[1][7] = "HMMM??? What do you mean by that?"; //correct Objection
	judgeData.dialogue[1][8] = "ORDER! ORDER! There is a contradiction there, good job.";
	judgeData.dialogue[1][9] = "Okay, bilal. let's start the hearing";

	judgeData.dialogue[1][10] = "Hmmmmm, let's hear it"; //wrong objection
	judgeData.dialogue[1][11] = "I can't accept this objection (tolak lifeline)";

	judgeData.dialogue[1][12] = "";
	judgeData.dialogue[1][13] = "";


	//DETECTIVE'S DIALOGUE
	//INTRO

	detectiveData.dialogue[0][0] = "1. The body is supposedly dead 2 hours, around 2PM before we arrived. the report says he was poisoned from a substance in his asophogus, indicating he is eating a meal";

	//STATEMENT 1
	detectiveData.dialogue[1][0] = "WAITTTTTT!!!!! Why am I here?";
	detectiveData.dialogue[1][1] = "Apologize for my behaviour, your honor.";
	detectiveData.dialogue[1][2] = "From the report, we can come up with few possibilities.";
	detectiveData.dialogue[1][3] = "1. The victim has died about two hours before we arrived, approximately 4:40 in the morning the victim is already dead ";
	detectiveData.dialogue[1][4] = "2. There's a murder weapon located right next to body which is a bloody fish line";
	detectiveData.dialogue[1][5] = "3. The cause of death is loss of blood due to strangling on the neck by the fish line";
	detectiveData.dialogue[1][6] = "4. We also can conclude that bilal is the possible murderer as he is the first person to come to masjid";


	//BILAL's DIALOGUE
	//STATEMENT 1

	bilalData.dialogue[1][0] = playerData.name + ", YOU GOTTA HELP ME.I'M INNOCENT";
	bilalData.dialogue[1][1] = "I didn't kill the Professor. I was accused. I couldn't kill my best buddy.";
	bilalData.dialogue[1][2] = "*stares at the audience*";
	bilalData.dialogue[1][3] = "I.AM.INNOCENTTTTTT!!!!!";
	bilalData.dialogue[1][4] = "Here's what I remember from the incident";

	//GIVING 1st STATEMENT
	bilalData.dialogue[1][5] = "1. I came 5:30, to open the masjid and the call of prayer for subuh.";
	bilalData.dialogue[1][6] = "2. As i arrived, I saw a body lying on the doorstep of. the body is identified as professor Fikri.";
	bilalData.dialogue[1][7] = "3. I tried waking him up, but no response.";
	bilalData.dialogue[1][8] = "4. i did not kill my own friend. He is my best bud since high school";

	//STATEMENT 1 EXPLANATION AND OBJECTION RESPONSE
	bilalData.dialogue[1][9] = "Well, duh. I am the bilal and I am assigned to call for prayer.";
	bilalData.dialogue[1][10] = "HOLD IT. I can give a better statement, for enlighting it"; //correct Objection
	bilalData.dialogue[1][11] = "He always wear a labcoat, even outside of his work station";
	bilalData.dialogue[1][12] = "Yes. I even do a CPR on him, but he shows no response.";
	bilalData.dialogue[1][13] = "YOU WATCH YOUR MOUTH, " + playerData.name + ".I AM HIS BEST FRIEND";

}



class DialogueBox
{

public:

	void textBox(DialogueData data, int chapter, int textNum)
	{
		cout << "=====================================" << endl;
		cout << data.name << endl;
		cout << "-------------------------------------" << endl;
		cout << endl;
		cout << data.dialogue[chapter][textNum] << endl;
		cout << endl;
		cout << "=====================================" << endl;

		do
		{
			cout << '\n' << "Press 'ENTER' to continue...";
		} while (cin.get() != '\n');
		system("CLS");

	}

	void detailBox(DialogueData data, int chapter, int textNum, int textNum2, int textNum3, int textNum4)
	{
		cout << "=====================================" << endl;
		cout << "CASE DETAILS" << endl;
		cout << "=====================================" << endl;
		cout << endl;
		cout << data.dialogue[chapter][textNum] << endl;
		cout << data.dialogue[chapter][textNum2] << endl;
		cout << data.dialogue[chapter][textNum3] << endl;
		cout << data.dialogue[chapter][textNum4] << endl;
		cout << "=====================================" << endl;
	}

	int statementBox(DialogueData data, int chapter, int textNum)
	{
		cout << "=====================================" << endl;
		cout << data.name << endl;
		cout << "-------------------------------------" << endl;
		cout << endl;
		cout << data.dialogue[chapter][textNum] << endl;
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


	/*const int WIDTH;
	std::string lines[3];

public:
	DialogueBox()
		:
		//WIDTH(118),
		WIDTH(200),
		lines{}
	{};

	~DialogueBox() {};

	void say(std::string a)
	{
		try
		{
			if (a.length() > WIDTH)
			{
				throw(a);
			}

			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
			std::cout << "\n\n" << std::string(WIDTH / 2 - a.length() / 2 + 1, ' ') << a << "\n\n";
			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
		}
		catch (std::string e)
		{
			std::cout << "Too many characters: " << e.substr(0, 25) << "...\n";
		}
	}

	void say(std::string a, std::string b)
	{
		try
		{
			if (a.length() > WIDTH)
			{
				throw(a);
			}
			if (b.length() > WIDTH)
			{
				throw(b);
			}

			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
			std::cout << "\n" << std::string(WIDTH / 2 - a.length() / 2 + 1, ' ') << a << "\n";
			std::cout << std::string(WIDTH / 2 - b.length() / 2 + 1, ' ') << b << "\n\n";
			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
		}
		catch (std::string e)
		{
			std::cout << "Too many characters: " << e.substr(0, 25) << "...\n";
		}
	}

	void say(std::string a, std::string b, std::string c)
	{
		try
		{
			if (a.length() > WIDTH)
			{
				throw(a);
			}
			if (b.length() > WIDTH)
			{
				throw(b);
			}
			if (c.length() > WIDTH)
			{
				throw(c);
			}

			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
			std::cout << "\n" << std::string(WIDTH / 2 - a.length() / 2 + 1, ' ') << a << "\n";
			std::cout << std::string(WIDTH / 2 - b.length() / 2 + 1, ' ') << b << "\n";
			std::cout << std::string(WIDTH / 2 - c.length() / 2 + 1, ' ') << c << "\n";
			std::cout << ">----------------------------------------------------------------------------------------------------------------------<";
		}
		catch (std::string e)
		{
			std::cout << "Too many characters: " << e.substr(0, 25) << "...\n";
		}
	}
	*/
};


class pressTo
{
public:

	void pressE()
	{
		do
		{
			cout << '\n' << "Press 'E' to continue...";
		} while ((_getch() != 'E') && (_getch() != 'e'));
		system("CLS");

	}

	void pressF()
	{
		do
		{
			cout << '\n' << "Press 'F' to continue...";
		} while ((_getch() != 'F') && (_getch() != 'f'));
		system("CLS");

	}

	void pressEnter()
	{
		do
		{
			cout << '\n' << "Press 'ENTER' to continue...";
		} while (cin.get() != '\n');
		system("CLS");

	}

};


void wrongObjection()
{
	DialogueBox DB;

	DB.textBox(playerData, 1, 17);
	DB.textBox(judgeData, 1, 10);
	DB.textBox(playerData, 1, 18);
	DB.textBox(judgeData, 1, 11);
	DB.textBox(playerData, 1, 19);
}


void intro()
{
	DialogueBox DB;
	pressTo P;
	bool proceed = false;


	DB.textBox(narratorData, 0, 0);
	DB.textBox(narratorData, 0, 1);
	DB.textBox(narratorData, 0, 2);
	DB.textBox(narratorData, 0, 3);
	DB.textBox(narratorData, 0, 4);
	DB.textBox(narratorData, 0, 5);
	DB.textBox(narratorData, 0, 6);
	DB.textBox(narratorData, 0, 7);


	while (!proceed)
	{
		if (DB.statementBox(narratorData, 0, 8) == 1)
		{
			proceed = true;
			DB.textBox(playerData, 0, 0);
		}
	}

	DB.textBox(toturialNPCData, 0, 0);
	DB.textBox(narratorData, 0, 10);
	DB.textBox(narratorData, 0, 11);
	DB.textBox(narratorData, 0, 12);

	DB.textBox(detectiveData, 0, 0);

	proceed = false;
	while (!proceed)
	{
		DB.detailBox(detectiveData, 0, 0, 1, 2, 3);
		if (DB.statementBox(toturialNPCData, 0, 1) == 2)
		{
			proceed = true;
			DB.textBox(playerData, 0, 1);
		}
	}

	DB.textBox(narratorData, 0, 14);
	DB.textBox(narratorData, 0, 16);
	DB.textBox(narratorData, 0, 17);
	DB.textBox(narratorData, 0, 18);
	DB.textBox(narratorData, 0, 19);
	DB.textBox(narratorData, 0, 20);


}


void firstChapter()
{
	DialogueBox DB;

	DB.textBox(bilalData, 1, 0);
	DB.textBox(playerData, 1, 0);
	DB.textBox(bilalData, 1, 1);
	DB.textBox(playerData, 1, 1);

	DB.textBox(narratorData, 1, 0);
	DB.textBox(narratorData, 1, 1);

	DB.textBox(judgeData, 1, 0);
	DB.textBox(prosecutorData, 1, 0);
	DB.textBox(playerData, 1, 2);
	DB.textBox(judgeData, 1, 1);
	DB.textBox(playerData, 1, 3);
	DB.textBox(judgeData, 1, 2);

	//Prosecutor give Case Details
	DB.textBox(prosecutorData, 1, 1);
	DB.textBox(prosecutorData, 1, 2);
	DB.textBox(prosecutorData, 1, 3);
	DB.textBox(prosecutorData, 1, 4);
	DB.textBox(prosecutorData, 1, 5);
	DB.textBox(prosecutorData, 1, 6);

	DB.textBox(judgeData, 1, 3);
	DB.textBox(detectiveData, 1, 0);

	DB.textBox(playerData, 1, 4);
	DB.textBox(playerData, 1, 5);

	DB.textBox(judgeData, 1, 4);

	DB.textBox(detectiveData, 1, 1);
	DB.textBox(playerData, 1, 6);

	//Detective give Case Details
	DB.textBox(detectiveData, 1, 2);
	DB.textBox(detectiveData, 1, 3);
	DB.textBox(detectiveData, 1, 4);
	DB.textBox(detectiveData, 1, 5);
	DB.textBox(detectiveData, 1, 6);

	DB.textBox(judgeData, 1, 5);

	DB.textBox(bilalData, 1, 2);
	DB.textBox(bilalData, 1, 3);
	DB.textBox(bilalData, 1, 4);


	//Bilal give testimony
	bool proceed = false;
	int option = 0;

	while (!proceed)
	{

		//1 
		if (!proceed)
		{
			DB.detailBox(detectiveData, 1, 3, 4, 5, 6);
			option = DB.statementBox(bilalData, 1, 5);
			if (option == 1)
			{
				DB.textBox(playerData, 1, 9);
				DB.textBox(bilalData, 1, 9);
				DB.textBox(playerData, 1, 10);
			}
			else if (option == 2)
			{
				proceed = true; //CORRECT
			}
		}
		//2
		if (!proceed)
		{
			DB.detailBox(detectiveData, 1, 3, 4, 5, 6);
			option = DB.statementBox(bilalData, 1, 6);
			if (option == 1)
			{
				DB.textBox(playerData, 1, 15);
				DB.textBox(bilalData, 1, 11);
				DB.textBox(playerData, 1, 16);
			}
			else if (option == 2)
			{
				wrongObjection();
			}
		}
		//3
		if (!proceed)
		{
			DB.detailBox(detectiveData, 1, 3, 4, 5, 6);
			option = DB.statementBox(bilalData, 1, 7);
			if (option == 1)
			{
				DB.textBox(playerData, 1, 20);
				DB.textBox(bilalData, 1, 12);
				DB.textBox(playerData, 1, 21);
			}
			else if (option == 2)
			{
				wrongObjection();
			}
		}
		//4
		if (!proceed)
		{
			DB.detailBox(detectiveData, 1, 3, 4, 5, 6);
			option = DB.statementBox(bilalData, 1, 8);
			if (option == 1)
			{
				DB.textBox(playerData, 1, 22);
				DB.textBox(bilalData, 1, 13);
				DB.textBox(playerData, 1, 23);
			}
			else if (option == 2)
			{
				wrongObjection();
			}
		}

		//REPEAT
		if (!proceed)
		{
			DB.textBox(playerData, 1, 24);
		}
	}

	DB.textBox(playerData, 1, 11);
	DB.textBox(judgeData, 1, 10);
	DB.textBox(playerData, 1, 12);
	DB.textBox(playerData, 1, 13);

	DB.textBox(narratorData, 1, 2);

	DB.textBox(judgeData, 1, 8);

	DB.textBox(prosecutorData, 1, 7);
	DB.textBox(playerData, 1, 14);

	DB.textBox(bilalData, 1, 10);


	DB.textBox(judgeData, 1, 9);

}

int main()
{

	setDialogueData();
	intro();

	firstChapter();

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
                                                                                                                 
        TAYLOR SWIFT BINTI ABC                                                                       MAY 18, 2020
       ___________________________________________________________________________________________________________
                                                                                                                  
        __________________________________________________                                                        
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
       |                                                  |   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
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
)" << std::endl;;
}