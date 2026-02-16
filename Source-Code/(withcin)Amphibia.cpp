#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
int main()
{
    using namespace std;
int p;
//char menu;
int a, s, e, v, r, d, i, menu, o;
 SetConsoleTitleA("Amphibia Random Episode Picker - V1.0");
start:    
cout<<"Welcome to the Amphibia Random Episode Picker"<<endl<<endl;
cout<<"A tool created by Asep1582 (asep3192)"<<endl;
cout<<"                                        Main Menu"<<endl<<endl;
    cout<<"Options: "<<endl<<endl;
    cout<<"1. Start the Amphibia Random Episode Picker "<<endl;
    cout<<"2. Exit"<<endl;
    cout<<"3. Credits"<<endl;
cout<<"Additonal Instructions: Type '1' or any other key besides 2 on your keybaord (without pressing enter) to start the Amphibia Random Episode Picker"<<endl;
cout<<"Or type '2' to Exit"<<endl<<endl;
//cin>>menu;
//The Filename of this C++ File is misleading and for the best outcome of this Tool (Project or App) the cin was removed (commented out) (Adding the cin was also just a Test Intially )
	
do {
menu = _getch();
if (menu == '2')
{
    return 0;
}
else
if (menu =='3')
{
    cout<<"                 Credits"<<endl;
    cout<<"The Amphibia Random Episode picker was made by Asep1582 (asep3192)"<<endl;
    cout<<"Code peer reviewed by MrSciptDev "<<endl;
    cout<<" Disclaimers:"<<endl<<endl;
    cout<<"The Amphibia Random episode picker is a fan-made project that has no affiliation with Disney, DisneyTVA, or Mat Braly"<<endl<<endl;
    cout<<"Press any key to return to the main menu"<<endl;
    menu = _getch();
    goto start;
}
else
if (menu == '1')
    {
cout<<endl;
Start2:
cout<<"Press any key to start the Amphibia Random Episode Picker..."<<endl;
o = _getch();
//cin>>menu;

ifstream Amphibia_DataBase1("Amphibia_DataBase2.txt");
srand(time(0));
//After game is started
cout<<endl;
cout<<"Picking your episode now... Please wait"<<endl;
//cout<<"EP = Episode Title(2)*"<<endl<<endl;
a=rand()%58; //change 5 (number) to the amount of episodes set/configured
string AmphibiaEpisodeDetails;
for (int i = 0; i <= a; i++)
{
    getline(Amphibia_DataBase1, AmphibiaEpisodeDetails);
}
//cout<<"EP = Episode Title(1)*"<<endl<<endl;
cout<<endl;
cout<<"Your Episode has been choosen. "<<endl<<endl;
string episode_data;
for (int i=0; i < AmphibiaEpisodeDetails.size();i++)
{
    if (AmphibiaEpisodeDetails[i] == ';')
    {
        cout<<episode_data<<endl;
        episode_data="";
        
    }
    else
    {
        episode_data+=AmphibiaEpisodeDetails[i];
      
    }
}
cout<<endl<<"Press any key to return to the Main Menu"<<endl<<endl;
menu = _getch();
cout<<"Returning..."<<endl<<endl<<endl;
goto start;
    }
 } while (menu != '1' || menu != '2' || menu != '3');

 /*
    if (menu == '2')
{
    return 0;
}
    */
/*cout<<"Amphibia Episode: "<<e<<"(Episode Number Per season)";
cout<<"Season Number: "<<s<<endl;
cout<<"Episode description: "<<v<<endl<<endl;
cout<<"Episode Duration: "<<d<<endl<<endl;
cout<<"Episode Release Date: "<<r<<endl<<endl;
//cout<<v<<;*/
// Alternate for Episode Description, Synopis or what episode is about: 

/*
Amphibia Episode and Season DataBase 

Amphibia Season Numbers
1
2
3

Episodes (the word, for season 1)

Episode 1 
Episode 2
Episode 3  
 Episode 4  
 Episode 5  
 Episode 6  
 Episode 7
 Episode 8
 Episode 9
 Episode 10
 Episode 11 
 Episode 12 
 Episode 13 
 Episode 14 
 Episode 15 
 Episode 16 
 Episode 17 
 Episode 18 
 Episode 19 
 Episode 20

Season 1:
S1, Episode 1:  Anne or Beast? / Best Fronds 
S1, Episode 2:  Cane Crazy / Flood, Sweat & Tears
S1, Episode 3: Hop Luck / Stakeout
S1, Episode 4: The Domino Effect / Taking Charge
S1, Episode 5: Anne Theft Auto / Breakout Star
S1, Episode 6: Sprig Vs. Hop Pop / Girl Time
S1, Episode 7: Dating Season / Anne Vs. Wild
S1, Episode 8: Contagi-Anne / Family Shrub
S1, Episode 9: Lily Pad Thai / Plantar's Last Stand
S1, Episode 10: Toad Tax / Prison Break
S1, Episode 11: Grubhog Day / Hop Pop and Lock
S1, Episode 12: Civil Wart / Hop-Popular
S1, Episode 13: Croak and Punishment / Trip to the Archives
S1, Episode 14: Snow Day / Cracking Mrs. Croaker
S1, Episode 15: A Night at the Inn / Wally and Anne
S1, Episode 16: Family Fishing Trip / Bizarre Bazaar
S1, Episode 17: Cursed! / Fiddle Me This
S1, Episode 18: The Big Bugball Game/ Combat Camp
S1, Episode 19: Children of the Spore / Anne of the Year
S1, Episode 20: Reunion


Season 1 - episode durations:
S1, Episode 1:  25 Minutes
S1, Episode 2:  25 Minutes
S1, Episode 3:  25 Minutes
S1, Episode 4:  25 Minutes
S1, Episode 5:  25 Minutes
S1, Episode 6:  25 Minutes
S1, Episode 7:  26 Minutes
S1, Episode 8:  25 Minutes
S1, Episode 9:  26 Minutes
S1, Episode 10: 28 Minutes
S1, Episode 11: 26 Minutes
S1, Episode 12: 26 Minutes
S1, Episode 13: 26 Minutes
S1, Episode 14: 26 Minutes
S1, Episode 15: 25 Minutes
S1, Episode 16: 26 Minutes
S1, Episode 17: 26 Minutes
S1, Episode 18: 26 Minutes
S1, Episode 19: 26 Minutes
S1, Episode 20: 26 Minutes


Season 1 - Episode Synopis (The Descriptions Of Each Episode):
S1, Episode 1 Synopis: Anne arrives in Amphibia and is homesick
S1, Episode 2 Synopis: Anne breaks a cane. Anne and Sprig share a room.
S1, Episode 3 Synopis: Anne makes pizza. Anne and Hop Pop go on a stakeout
S1, Episode 4 Synopis: Anne gets a pet. The Plantars watch their first TV.
S1, Episode 5 Synopis: Anne and Sprig ride a snail. Anne gets pimples.
S1, Episode 6 Synopis: Sprig overthrows Hop Pop. Anne and Polly's girl time.
S1, Episode 7 Synopis: Sprig may like Ivy Sundew. Anne pretends to like camping, which goes dangerously overboard.
S1, Episode 8 Synopis: Anne's "sick" day. Sprig and Polly's family history.
S1, Episode 9 Synopis: Anne gets a job. Hop Pop sells potions.
S1, Episode 10 Synopis: Anne is put to the test. Sasha is captured by toads!
S1, Episode 11 Synopis: Wartwood has a carnival. Hop Pop learns to dance.
S1, Episode 12 Synopis: Wartwood watches a teen drama. Hop Pop runs for mayor.
S1, Episode 13 Synopis: Sprig is on the case. The family is trapped!.
S1, Episode 14 Synopis: The frogs of Wartwood freeze. Sprig wants to be liked.
S1, Episode 15 Synopis: The Plantars stay at an inn. Anne and Wally's quest.
S1, Episode 16 Synopis: A Plantar Fishing Trip. Anne's music box goes missing.
S1, Episode 17 Synopis: Anne and Sprig get cursed! Sprig enters a contest.
S1, Episode 18 Synopis: Anne plays frog sports. The kids learn combat.
S1, Episode 19 Synopis: A scary mushroom adventure. Anne is "Frog of the Year"
S1, Episode 20 Synopis: Anne reunites with Sasha. They both try to get home.

S1, Episode 1 Release Date: June 17, 2019
S1, Episode 2 Release Date: June 18, 2019
S1, Episode 3 Release Date: June 19, 2019
S1, Episode 4 Release Date: June 20, 2019
S1, Episode 5 Release Date: June 24, 2019
S1, Episode 6 Release Date: June 25, 2019
S1, Episode 7 Release Date: June 26, 2019
S1, Episode 8 Release Date: June 27, 2019 
S1, Episode 9 Release Date: June 28, 2019
S1, Episode 10 Release Date: July 2nd, 2019
S1, Episode 11 Release Date: July 3rd, 2019
S1, Episode 12 Release Date: July 4th, 2019
S1, Episode 13 Release Date: July 8, 2019
S1, Episode 14 Release Date: July 9, 2019
S1, Episode 15 Release Date: July 10, 2019
S1, Episode 16 Release Date: July 11, 2019
S1, Episode 17 Release Date: July 15, 2019
S1, Episode 18 Release Date: July 16, 2019
S1, Episode 19 Release Date: July 17, 2019
S1, Episode 20 Release Date: July 18, 2019


Amphibia Season 2:

Episodes (the word, for season 2)

Episode 1 
Episode 2
Episode 3  
Episode 4  
Episode 5  
Episode 6  
Episode 7
Episode 8
Episode 9
Episode 10
Episode 11 
Episode 12 
Episode 13 
Episode 14 
Episode 15 
Episode 16 
Episode 17 
Episode 18 
Episode 19 
Episode 20

Season 2 Episode Titles:
S2, Episode 1: Handy Anne / Fort in the Road
S2, Episode 2: The Ballad of the Hopediah Plantar / Anne Hunter
S2, Episode 3: Truck Stop Polly / A Caravan Named Desire
S2, Episode 4: Quarreler's Pass / Toadcatcher 
S2, Episode 5: Swamp and Sensibility / Wax Museum
S2, Episode 6: Marcy at the Gates
S2, Episode 7: Scavenger Hunt / The Plantars Check In
S2, Episode 8: Lost in Newtopia / Sprig Gets Schooled
S2, Episode 9: Little Frogtown / Hopping Mall
S2, Episode 10: Little Frogtown / Hopping Mall
S2, Episode 11: Night Drivers/ Return to Wartwood
S2, Episode 12: The Shut-In!
S2, Episode 13: Ivy on the Run / After the Rain
S2, Episode 14: The First Temple
S2, Episode 15: New Wartwood/ Friend or Frobo?
S2, Episode 16: Toad To Redemption / Maddie & Marcy
S2, Episode 17: The Second Temple/ Barrel's Warhammer
S2, Episode 18: Bessie And The Micro-Angelo/ The Third Temple
S2, Episode 19: The Dinner/ Battle of the Bands
S2, Episode 20 (Season Finale): True Colors




Season 2 - episode durations:
S2, Episode 1:  26 Minutes
S2, Episode 2:  26 Minutes
S2, Episode 3:  26 Minutes
S2, Episode 4:  27 Minutes
S2, Episode 5:  26 Minutes
S2, Episode 6:  26 Minutes
S2, Episode 7:  26 Minutes
S2, Episode 8:  26 Minutes
S2, Episode 9:  26 Minutes
S2, Episode 10: 27 Minutes
S2, Episode 11: 27 Minutes
S2, Episode 12: 26 Minutes
S2, Episode 13: 26 Minutes
S2, Episode 14: 25 Minutes
S2, Episode 15: 26 Minutes
S2, Episode 16: 25 Minutes
S2, Episode 17: 25 Minutes
S2, Episode 18: 25 Minutes
S2, Episode 19: 25 Minutes
S2, Episode 20: 28 Minutes


Season 2 - Episode Synopis (The Descriptions Of Each Episode):
S2, Episode 1 Synopis: Anne secures the farm. Hop Pop's rules ruin the fun.
S2, Episode 2 Synopis: Hop Pop tries to be a hero. Anne learns to hunt.
S2, Episode 3 Synopis: Polly is left at a truck stop. Hop Pop tries acting.
S2, Episode 4 Synopis: Sprig, Polly, Sasha and Grime try to get along.
S2, Episode 5 Synopis: A friend reappears. The family visits a mystery shack.
S2, Episode 6 Synopis: Anne and the Plantars arrive at Newtopia.
S2, Episode 7 Synopis: The gang goes on a mission! Sprig's spending spree.
S2, Episode 8 Synopis: Anne and Polly take in the city. Sprig, college bound!
S2, Episode 9 Synopis: Hop Pop investigates! The family goes shopping.
S2, Episode 10 Synopis: Anne and Marcy's sleepover. Aquarium visit!
S2, Episode 11 Synopis: Sprig and Polly's all-nighter. A Wartwood homecoming.
S2, Episode 12 Synopis: The family protects themselves with scary stories.
S2, Episode 13 Synopis: Hop Pop's secret is revealed. Ivy runs away.
S2, Episode 14 Synopis: The gang goes to a temple that may help them get home.
S2, Episode 15 Synopis: Marcy plans to improve the town. Polly's new friend.
S2, Episode 16 Synopis: Mayor Toadstool's job offer. Maddie and Marcy team up.
S2, Episode 17 Synopis: Anne and Marcy visit an icy temple. Legendary hammer!
S2, Episode 18 Synopis: Bessie babysits MicroAngelo. The final temple visit.
S2, Episode 19 Synopis: The Plantars play host. It's the battle of the bands!
S2, Episode 20 Synopis: The gang travels to Newtopia to say goodbye.

S2, Episode 1 Release Date: July 11, 2020
S2, Episode 2 Release Date: July 18, 2020
S2, Episode 3 Release Date: July 25, 2020
S2, Episode 4 Release Date: August 1, 2020
S2, Episode 5 Release Date: August 8, 2020
S2, Episode 6 Release Date: August 15, 2020
S2, Episode 7 Release Date: August 22, 2020
S2, Episode 8 Release Date: August 29, 2020
S2, Episode 9 Release Date: September 12, 2020
S2, Episode 10 Release Date: September 19, 2020
S2, Episode 11 Release Date: October 17, 2020
S2, Episode 12 Release Date: March 8, 2021
S2, Episode 13 Release Date: March 13, 2021
S2, Episode 14 Release Date: March 20, 2021
S2, Episode 15 Release Date: March 27, 2021
S2, Episode 16 Release Date: April 3, 2021
S2, Episode 17 Release Date: April 10, 2021
S2, Episode 18 Release Date: April 17, 2021
S2, Episode 19 Release Date: April 24, 2021



Amphibia Season 3:

Episodes (the word, for season 3)

Episode 1 
Episode 2
Episode 3  
Episode 4  
Episode 5  
Episode 6  
Episode 7
Episode 8
Episode 9
Episode 10
Episode 11 
Episode 12 
Episode 13 
Episode 14 
Episode 15 
Episode 16 
Episode 17 
Episode 18 

Season 3 Episode Titles:

S3, Episode 1: The New Normal
S3, Episode 2: Hop 'Til You Drop / Turning Point
S3, Episode 3: Thai Feud / Adventures in Catsitting
S3, Episode 4: Fight at the Museum / Temple Frogs
S3, Episode 5: Fixing Frobo / Anne-sterminator
S3, Episode 6: Mr. X / Sprig's Birthday
S3, Episode 7: Spider-Sprig / Olivia & Yunan
S3, Episode 8:  Hollywood Hop Pop / If You Give a Frog a Cookie
S3, Episode 9: Froggy Little Christmas
S3, Episode 10: Escape to Amphibia
S3, Episode 11: Anne leads the Resistance. Sprig and Ivy make a plan.
S3, Episode 12: Sasha's Angels / Olm Town Road
S3, Episode 13: Mother of Olms / Grime's Pupil
S3, Episode 14: The gang finds a strange town. Andrias faces his past.
S3, Episode 15: Anne confronts an old mentor. Anne rescues a friend.
S3, Episode 16: The Three Armies / The Beginning of the End
S3, Episode 17: All in
S3, Episode 18: The Hardest Thing


Season 3 - episode durations:
S3, Episode 1:  24 Minutes
S3, Episode 2:  25 Minutes
S3, Episode 3:  24 Minutes
S3, Episode 4:  25 Minutes
S3, Episode 5:  25 Minutes
S3, Episode 6:  25 Minutes
S3, Episode 7:  25 Minutes
S3, Episode 8:  25 Minutes
S3, Episode 9:  25 Minutes
S3, Episode 10: 25 Minutes
S3, Episode 11: 25 Minutes
S3, Episode 12: 25 Minutes
S3, Episode 13: 24 Minutes
S3, Episode 14: 25 Minutes
S3, Episode 15: 25 Minutes
S3, Episode 16: 25 Minutes
S3, Episode 17: 50 Minutes
S3, Episode 18 (Series Finale): 32 Minutes



Season 3 - Episode Synopsis (The Descriptions Of Each Episode):
S3, Episode 1 Synopsis: Anne and the Plantars have to adjust to life on Earth.
S3, Episode 2 Synopsis: The Plantars go to the mall. Sasha goes to Wartwood.
S3, Episode 3 Synopsis: Sprig wants to be a Boonchuy. Planters go to the vet.
S3, Episode 4 Synopsis: Anne finds a clue. The Plantars go to the Thai temple. 
S3, Episode 5 Synopsis: Frobo revived. An enemy finds Anne and the Plantars.
S3, Episode 6 Synopsis: Boonchuys vs. the government. It's Sprig's birthday!
S3, Episode 7 Synopsis: Sprig, superhero. Olivia & Yunan rescue Marcy.
S3, Episode 8 Synopsis: Hop Pop goes Hollywood. Anne trusts a shady scientist.
S3, Episode 9 Synopsis: Anne surprises her mom with a Christmas parade float.
S3, Episode 10 Synopsis: Anne and the Plantars fight to return to Amphibia.
S3, Episode 11 Synopsis: Anne leads the Resistance. Sprig and Ivy make a plan.
S3, Episode 12 Synopsis: Bandits capture rebels. The gang goes to Proteus.
S3, Episode 13 Synopsis: Mother Olm is consulted. Grime trains an apprentice.
S3, Episode 14 Synopsis: The gang finds a strange town. Andrias faces his past.
S3, Episode 15 Synopsis: Anne confronts an old mentor. Anne rescues a friend.
S3, Episode 16 Synopsis: Enemies try to work together. The battle begins.
S3, Episode 17 Synopsis: Our heroes fight to save their homeworlds.
S3, Episode 18 Synopsis: Anne’s journey comes to an end.

S3, Episode 2 Release Date (On Air): October 9, 2021
S3, Episode 3 Release Date (On Air): October 16, 2021
S3, Episode 4 Release Date (On Air): October 23, 2021
S3, Episode 5 Release Date (On Air): October 30, 2021
S3, Episode 6 Release Date (On Air): November 6, 2021, 
S3, Episode 7 Release Date (On Air): November 13, 2021
S3, Episode 8 Release Date (On Air): November 20, 2021
S3, Episode 9 Release Date (On Air): November 27, 2021
S3, Episode 10 Release Date (On Air): March 19, 2022
S3, Episode 11 Release Date (On Air): March 26, 2022
S3, Episode 12 Release Date (On Air): April 2, 2022
S3, Episode 13 Release Date (On Air): April 9, 2022
S3, Episode 14 Release Date (On Air): April 16, 2022
S3, Episode 15 Release Date (On Air): April 23, 2022
S3, Episode 16 Release Date (On Air): April 30, 2022
S3, Episode 17 Release Date (On Air): May 7, 2022
S3, Episode 18 Release Date (On Air): May 14, 2022





*/






}