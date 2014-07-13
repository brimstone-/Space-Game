#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <limits> // Needed for that cin.ignore code.                     These comments are
#include <windows.h> // Huge Library for Window's apps/programs.           for my own benefit.
#include <string> // For things to do with strings.
#include <ctime>. // Time function.
#include <stddef.h> // Used for NULL.

using namespace std;

//Destruction of class object or something, not quite sure what this is but it makes the program loop.

class KeepRunning {
	public:
		~KeepRunning() {
			
			// Brunt of code.
			
			srand(static_cast<int>(time(0)));
			
			while (true) {
			    system ("CLS");
   				int Player_Health = 100,
 				Computer_Health = 100,
 				Counter = 0,
 				Weapon_Choice,
 				Computer_Weapon,
  				easy = 1,
 				hard = 2,
 				difficultyChoice,
 				Cannon = 1,
  				Missile = 2,
  				Laser = 3,
  				healthPack = 15,
  				totalCannon = 3,
 				totalMissile = 4,
 				totalHealthPack = 1,
				totalCannonComputer = 3,
				totalMissileComputer = 4,
				totalHealthPackComputer = 1;
    	
    			cout << "Random Encounter!\n" << endl;
   				cout << "Fight to the DEATH!!\n" << endl;
   				
   				/* Commented this out since it didn't fit the space theme, but leaving it since it looks nice :3
   				
				cout<<"#############################################################"<<endl;
				cout<<"#                    _                                      #"<<endl;  
				cout<<"#                  -=\\`\\                                    #"<<endl;  
				cout<<"#              |\\ ____\\_\\__                                 #"<<endl;  
				cout<<"#            -=\\c`\"\"\"\"\"\"\" \"`)                               #"<<endl;  
				cout<<"#               `~~~~~/ /~~`\                                #"<<endl;  
				cout<<"#                 -==/ /                                    #"<<endl;  
				cout<<"#                   '-'                                     #"<<endl;  
				cout<<"#                                             _             #"<<endl;  
				cout<<"#                                            (  )           #"<<endl;  
				cout<<"#             _ .                         ( `  ) . )        #"<<endl;  
				cout<<"#           (  _ )_                      (_, _(  ,_)_)      #"<<endl;  
				cout<<"#         (_  _(_ ,)                                        #"<<endl;  
				cout<<"#############################################################"<<endl;
				*/
				
				cout << "      .-.    _,  .-.  ,_    .-.    " << endl;
				cout << "     '-._'--'  \\_| |_/  '--'_.-'  " << endl;
				cout << "         '-._  \\ | | /  _.-'      " << endl;
				cout << "             `-.^| |^.-'           " << endl;
				cout << "                `\\=/`             " << endl;
				cout << "                  `                " << endl;
   				cout << "\nBear in mind that if you pick a weapon/item that you are out of, you forego your turn!\n" << endl;
   				cout << "Also note that you will be punished for bad input during the weapon choosing phase, so choose wisely!\n" << endl;
				cout << "\nChoose a difficulty.\n";
  				cout << "\nPlease select <1> Normal or <2> Impossible: ";
  				
 				cin >> difficultyChoice;
    			system ("cls");
    			
    			if (difficultyChoice == 1)
  				{
  	  	
  					do 
					{
        
       		 			if(Counter == 0) // Player Turn   
							{
         		   			cout << "\nPick a weapon. <1> <2> <3> or <4>:\n";
           		 			cout << "1. Cannon\n";
          		  			cout << "2. Missile\n";
           		 			cout << "3. Laser\n";
           		 			cout << "4. Health Pack\n";
           		 			cin >> Weapon_Choice;
            		
            				while (Weapon_Choice > 4 || Weapon_Choice < 0)
            				{
            					cout << "\nPlease enter a valid menu choice: ";
            					cin >> Weapon_Choice;
            					cout << endl;
            				}
            		
            		
            					if ( Weapon_Choice == NULL ) {
            						cout << "\nPlease enter a valid menu choice: ";
									cin.get();
									cin.clear();
									cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
            						cin >> Weapon_Choice;
            						cout << endl;
            					}
            
            
            					switch(Weapon_Choice)
            					{
                					case 1:
                
                						if (Weapon_Choice == 1) {
                
                						if (totalCannon <= 0) {
                							system ("cls");
                        					cout << "You are out of Cannons!" << endl;
                	    				}
                	    
                						else {
                							system ("cls");
                 							Cannon = (1 + (rand() % 10 + 15));
                   							cout << "\nYou chose a cannon"<< endl;
                    						Computer_Health = Computer_Health - Cannon;
                    						cout << "You inflicted " << Cannon << " points on your enemy." << endl;
                    						cout <<  "Your health is " << Player_Health << endl;
                    						cout << "The computer's health is " << Computer_Health << endl;
                    						totalCannon--;
                    					}
                					}
                    					break;
                     
                					case 2:
                						if (Weapon_Choice == 2){
                		
                							if (totalMissile <= 0) {
                								system ("cls");
                								cout << "You are out of missiles!" << endl;
                							}
                	
                							else {
                								system ("cls");
                  								Missile = (1 + (rand() % 7 + 12));
                  								cout << "\nYou chose a missile."<< endl;
                  								Computer_Health = Computer_Health - Missile;
                  								cout << "You inflicted " << Missile << " points on your enemy." << endl;
                  								cout <<  "Your health is " << Player_Health << endl;
                  								cout << "The computer's health is " << Computer_Health << endl;
                  								totalMissile--;
       	  									}
       		        					}
                    					break;
                    
                					case 3:
                						system ("cls");
                						Laser = 1 + rand() % 3 + 8;
                    					cout << "\nYou chose a Laser"<< endl;
                    					Computer_Health = Computer_Health - Laser;
                    					cout << "You inflicted " << Laser << " points on your enemy." << endl;
                    					cout <<  "Your health is " << Player_Health << endl;
                    					cout << "The computer's health is " << Computer_Health << endl;
                    					break;
                    			
                    				case 4:
                    					if (totalHealthPack > 0) {
                    						system ("cls");
                    						cout << "\nYou chose Health Pack" << endl;
                    						Player_Health += healthPack;
                    						cout << "Your health is " << Player_Health << endl;
                    						cout << "The computer's health is " << Computer_Health << endl;
                    						totalHealthPack--;
                    					}
                    					
                    					else {
                    						system ("cls");
                    						cout << "\nYou are out of Health Packs!" << endl;
                    					}
                    					break;
            					}
            
        					}
        
            			Counter == 1; // Computer Turn
        
            			Computer_Weapon = rand() % 4;    
            
            			switch(Computer_Weapon)
               		 	{
                			case 0:
                				
                				if (totalCannonComputer > 0) {
                    				Cannon = (1 + (rand() % 10 + 15));
                    				cout<<"\nYour opponent used a cannon and inflicted " << Cannon << " points on you." << endl;
                    				Player_Health = Player_Health - Cannon;
                    				cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    				totalCannonComputer--;
                    			}
                    		
                    			else {
                    				Laser = 1 + rand() % 3 + 8;
                					cout<<"\nYour opponent used a laser and inflicted " << Laser << " points on you." << endl;
                    				Player_Health = Player_Health - Laser;
                    				cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    			}
                    			break;
                    
                			case 1:
                				
                				if (totalMissileComputer > 0){
                    				Missile = (1 + (rand() % 7 + 12));
                    				cout<<"\nYour opponent used a missile and inflicted " << Missile << " points on you." << endl;
                    				Player_Health = Player_Health - Missile;
                    				cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    				totalMissileComputer--;
                    			}
                    		
                    			else {
                    				Laser = 1 + rand() % 3 + 8;
                					cout<<"\nYour opponent used a rifle and inflicted " << Laser << " points on you." << endl;
                    				Player_Health = Player_Health - Laser;
                    				cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    			}
                    			break;
                    
                			case 2:
                				
                    			Laser = 1 + rand() % 3 + 8;
                				cout<<"\nYour opponent used a laser and inflicted " << Laser << " points on you." << endl;
                    			Player_Health = Player_Health - Laser;
                    			cout << "Your health is " << Player_Health << endl;
                    			cout << "The computer's health is " << Computer_Health << endl;
                    			break;
                    
            				case 3:
            					
            					if (totalHealthPackComputer > 0){
            						cout << "\nYour opponent used a healthpack and gained " << healthPack << " points." << endl;
            						Computer_Health += healthPack;
            						cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    				totalHealthPackComputer--;
                    			}
                    		
                    			else {
                    				Laser = 1 + rand() % 3 + 8;
                					cout<<"\nYour opponent used a laser and inflicted " << Laser << " points on you." << endl;
                    				Player_Health = Player_Health - Laser;
                    				cout << "Your health is " << Player_Health << endl;
                    				cout << "The computer's health is " << Computer_Health << endl;
                    			}
                    			break;
       						}
        
        			} while(Player_Health > 0 && Computer_Health > 0);
        
    				if (Computer_Health <= 0 && Player_Health <= 0){
    					cout << "\nThe two of you fought to your deaths, it's a draw!\n\n";
    					cout << "Press ENTER to continue." << endl;
						cin.get();
						cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        				system ("CLS");
    				}

    				else if (Computer_Health <= 0) {
        				cout << "\n\nCongratulations! You won!\n\n" << endl;
        				cout << "Press ENTER to continue." << endl;
						cin.get();
						cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        				system ("CLS");
    				}
    
    				else if (Player_Health <= 0){
        				cout << "\n\nYOU HAVE DIED! GAME OVER!\n\n" << endl;
        				cout << "Press ENTER to continue." << endl;
						cin.get();
						cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        				system ("CLS");
					}
				
					else {
						cout << "\nThe Battle Rages On!\n" << endl;
					}
				  }

				else if (difficultyChoice == 2) {
					cout << "\n\nThe computer charges up its ultimate form and destroys you in a single blast of unparalleled firepower!  You are dead!\n\n" << endl;
					cout << "Press ENTER to continue." << endl;
					cin.get();
					cin.clear();
					cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
					cout << "\n\n";
		
				}
	
				else {
					cout << "\n\nPlease enter a valid difficulty choice.\n" << endl;
					cout << "Press ENTER to continue." << endl;
					cin.get();
					cin.clear();
					cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
					cout << "\n\n";
				}
			}
		}
};

int main()
{   
KeepRunning kr;
}
