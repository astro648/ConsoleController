#define _WIN32_WINNT 0x0500
#pragma comment(linker, "/SUBSYSTEM:WINDOWS")
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
	string input1;
	string input1sub1;
	string sysshutdownyn;
	string sysrestartyn;
	string websitelinkinput;
	for( ; ; ){
		cout<<">> ";
		cin>>input1;
		if(input1=="sys-pre-ins-exe"){
			cout<<"sys-pre-ins-exe >> ";
			cin>>input1sub1;
			if(input1sub1=="notepad"){
				system("notepad.exe");
				cout<<"Notepad has been opened."<<endl;
			}
			else if(input1sub1=="ms-edge"){
				system("MicrosoftEdge.exe");
				cout<<"Microsoft has been opened."<<endl;
			}
			else if(input1sub1=="taskmgr"){
				system("taskmgr.exe");
				cout<<"Task Manager has been opened."<<endl;
			}
			else if(input1sub1=="ctrl-panel"){
				system("control.exe");
				cout<<"Control Panel has been opened."<<endl;
			}
			else if(input1sub1=="msconfig"){
				system("msconfig.exe");
				cout<<"System Configuration has been opened."<<endl;
			}
			else if(input1sub1=="resmon"){
				system("resmon.exe");
				cout<<"Resource Monitor has been opened."<<endl;
			}
			else if(input1sub1=="msinfo32"){
				system("msinfo32.exe");
				cout<<"System Information has been opened."<<endl;
			}
			else if(input1sub1=="run-exe"){
				system("run.exe");
				cout<<"Run has been opened."<<endl;
			}
			else{
				cout<<"The application name abbreviation you entered was not recognized. If you would like to, you can try again."<<endl;
			}
		}
		else if(input1=="sys.shutdown.30s"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				cout<<"Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
    			return 0;
    		}
    		if(sysshutdownyn=="Y"){
				cout<<"Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
    			return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"30s shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"30s shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="sys.shutdown.quick"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				cout<<"Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
    			return 0;
    		}
    		if(sysshutdownyn=="Y"){
				cout<<"Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
    			return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"Immediate shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"Immediate shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="sys.shutdown.custom-seconds-amount"){
			cout<<"Are you sure you want to shut down? [y/n]: ";
			cin>>sysshutdownyn;
			if(sysshutdownyn=="y"){
				int sec, i;
			    string strOne, strTwo;
			    char str_One[50], str_Two[10];
			    ostringstream intToStr;
			    cout<<"Enter Number of Seconds to Shutdown: ";
			    cin>>sec;
			    intToStr<<sec;
			    strOne = "C:\\Windows\\System32\\shutdown /s /t ";
			    strTwo = intToStr.str();
			    i=0;
			    while(strOne[i])
			    {
			        str_One[i] = strOne[i];
			        i++;
			    }
			    str_One[i] = '\0';
			    i=0;
			    while(strTwo[i])
			    {
			        str_Two[i] = strTwo[i];
			        i++;
			    }
			    str_Two[i] = '\0';
			    strcat(str_One, str_Two);
			    system(str_One);
			    return 0;
    		}
    		if(sysshutdownyn=="Y"){
				int sec, i;
			    string strOne, strTwo;
			    char str_One[50], str_Two[10];
			    ostringstream intToStr;
			    cout<<"Enter Number of Seconds to Shutdown: ";
			    cin>>sec;
			    intToStr<<sec;
			    strOne = "C:\\Windows\\System32\\shutdown /s /t ";
			    strTwo = intToStr.str();
			    i=0;
			    while(strOne[i])
			    {
			        str_One[i] = strOne[i];
			        i++;
			    }
			    str_One[i] = '\0';
			    i=0;
			    while(strTwo[i])
			    {
			        str_Two[i] = strTwo[i];
			        i++;
			    }
			    str_Two[i] = '\0';
			    strcat(str_One, str_Two);
			    system(str_One);
			    return 0;
    		}
    		if(sysshutdownyn=="n"){
				cout<<"Custom time shut-down command aborted."<<endl;
    		}
    		if(sysshutdownyn=="N"){
				cout<<"Custom time shut-down command aborted."<<endl;
    		}
		}
		else if(input1=="easteregg"){
			cout<<"Hello there, this is Easter Egg, a decoy for the real easter eggs hidden in this app. good luck finding the real easter eggs"<<endl;
		}
		else if(input1=="clock-date-time.show"){
			time_t timetoday;
   			time (&timetoday);
   			cout<<"Calendar date and time is: "<< asctime(localtime(&timetoday));
		}
		else if(input1=="console.close"){
			break;
		}
		else if(input1=="github-repo.open"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="chrome://dino"){
			cout<<"Remember to do it in Chrome next time but here's something for you since you found an easter egg..."<<endl;
			cout<<"                                ############# "<<endl;
			cout<<"        #                      ######## ######"<<endl;
			cout<<"        ###                    ###############"<<endl;
			cout<<"         ###                   ######         "<<endl;
			cout<<"          ###                   ##############"<<endl;
			cout<<"            ######################            "<<endl;
			cout<<"           ########################           "<<endl;
			cout<<"           ########################           "<<endl;
			cout<<"            #######################            "<<endl;
			cout<<"               ################# #####        "<<endl;
			cout<<"                ####    ####       #          "<<endl;
			cout<<"                ####    ####                  "<<endl;
			cout<<"                ####    ####                  "<<endl;
			cout<<"                ####    ####                  "<<endl;
			cout<<"                ####    ####                  "<<endl;
			cout<<"               ####### #######                "<<endl;
			cout<<"                #####   #####                "<<endl;
			
		}
		else if(input1=="github-repo.wiki.open"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="github-repo.projects.open"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/projects"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="github-repo.issues.open"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/issues"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="console.help"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="suicidal.help"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="suicide.help"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="suicidal-thoughts.help"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="commands.list"){
			HWND hWnd = GetConsoleWindow();
			ShowWindow( hWnd, SW_HIDE );
			ShellExecute(NULL,TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki/Full-Command-List"), TEXT(""),NULL,SW_HIDE);
			break;
			exit(0);
		}
		else if(input1=="undo.nedry.sabotage"){
			cout<<"Ah ah ah! You didn't say the magic word!"<<endl;
		}
		else{
			cout<<"The command you entered was not recognized. If you would like to, you can try again."<<endl;
		}
	}
}
