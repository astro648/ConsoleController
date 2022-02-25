#define _WIN32_WINNT 0x0500
#pragma comment(linker, "/SUBSYSTEM:WINDOWS")
#include <windows.h>
#include <sstream>
#include <ctime>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	cout << "ConsoleController Usefulness Update Snapshot 22v05a - Type in your command to get started." << endl;
	cout << "Type in \"console.help\" for help." << endl;
	cout << "This is an experimental build, so everything may be subject to change." << endl;
	cout << "Report any bugs to Github using the command \"github-repo.issues.open\"." << endl;
	string input1;
	string input1sub1;
	string sysshutdownyn;
	string sysrestartyn;
	string websitelinkinput;
	string searchengineopeninput;
	string socialmediaopeninput;
	string vidsocialmediaopeninput;
	string formalsocialmediaopeninput;
	string emailinput;
	for (;;)
	{
		cout << ">> ";
		cin >> input1;
		if (input1 == "sys-pre-ins-exe")
		{
			cout << "sys-pre-ins-exe >> ";
			cin >> input1sub1;
			if (input1sub1 == "notepad")
			{
				system("notepad.exe");
				cout << "Notepad has been opened." << endl;
			}
			else if (input1sub1 == "ms-edge")
			{
				system("MicrosoftEdge.exe");
				cout << "Microsoft has been opened." << endl;
			}
			else if (input1sub1 == "taskmgr")
			{
				system("taskmgr.exe");
				cout << "Task Manager has been opened." << endl;
			}
			else if (input1sub1 == "ctrl-panel")
			{
				system("control.exe");
				cout << "Control Panel has been opened." << endl;
			}
			else if (input1sub1 == "msconfig")
			{
				system("msconfig.exe");
				cout << "System Configuration has been opened." << endl;
			}
			else if (input1sub1 == "resmon")
			{
				system("resmon.exe");
				cout << "Resource Monitor has been opened." << endl;
			}
			else if (input1sub1 == "msinfo32")
			{
				system("msinfo32.exe");
				cout << "System Information has been opened." << endl;
			}
			else if (input1sub1 == "run-exe")
			{
				system("run.exe");
				cout << "Run has been opened." << endl;
			}
			else
			{
				cout << "The application name abbreviation command you entered was not recognized. If you would like to, you can try again." << endl;
			}
		}
		else if (input1 == "copyright")
		{
			cout << "ConsoleController - a program which helps you do many things in one place. See GitHub repo for more info. Copyright (C) 2022 Ayaan R | This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.  You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>." << endl;
		}
		else if (input1 == "copyright-info")
		{
			cout << "ConsoleController - a program which helps you do many things in one place. See GitHub repo for more info. Copyright (C) 2022 Ayaan R | This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.  You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>." << endl;
		}
		else if (input1 == "c")
		{
			cout << "ConsoleController - a program which helps you do many things in one place. See GitHub repo for more info. Copyright (C) 2022 Ayaan R | This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.  This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.  You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>." << endl;
		}
		else if (input1 == "sys.shutdown.30s")
		{
			cout << "Are you sure you want to shut down? [y/n]: ";
			cin >> sysshutdownyn;
			if (sysshutdownyn == "y")
			{
				cout << "Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
				return 0;
			}
			if (sysshutdownyn == "Y")
			{
				cout << "Shutting down in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /s");
				return 0;
			}
			if (sysshutdownyn == "n")
			{
				cout << "30s shut-down command aborted." << endl;
			}
			if (sysshutdownyn == "N")
			{
				cout << "30s shut-down command aborted." << endl;
			}
		}
		else if (input1 == "sys.shutdown.quick")
		{
			cout << "Are you sure you want to shut down? [y/n]: ";
			cin >> sysshutdownyn;
			if (sysshutdownyn == "y")
			{
				cout << "Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
				return 0;
			}
			if (sysshutdownyn == "Y")
			{
				cout << "Shutting down...";
				system("C:\\Windows\\System32\\shutdown /s /t 0");
				return 0;
			}
			if (sysshutdownyn == "n")
			{
				cout << "Immediate shut-down command aborted." << endl;
			}
			if (sysshutdownyn == "N")
			{
				cout << "Immediate shut-down command aborted." << endl;
			}
		}
		else if (input1 == "sys.shutdown.custom-seconds-amount")
		{
			cout << "Are you sure you want to shut down? [y/n]: ";
			cin >> sysshutdownyn;
			if (sysshutdownyn == "y")
			{
				int sec, i;
				string strOne, strTwo;
				char str_One[50], str_Two[10];
				ostringstream intToStr;
				cout << "Enter Number of Seconds to Shutdown: ";
				cin >> sec;
				intToStr << sec;
				strOne = "C:\\Windows\\System32\\shutdown /s /t ";
				strTwo = intToStr.str();
				i = 0;
				while (strOne[i])
				{
					str_One[i] = strOne[i];
					i++;
				}
				str_One[i] = '\0';
				i = 0;
				while (strTwo[i])
				{
					str_Two[i] = strTwo[i];
					i++;
				}
				str_Two[i] = '\0';
				strcat(str_One, str_Two);
				system(str_One);
				return 0;
			}
			if (sysshutdownyn == "Y")
			{
				int sec, i;
				string strOne, strTwo;
				char str_One[50], str_Two[10];
				ostringstream intToStr;
				cout << "Enter Number of Seconds to Shutdown: ";
				cin >> sec;
				intToStr << sec;
				strOne = "C:\\Windows\\System32\\shutdown /s /t ";
				strTwo = intToStr.str();
				i = 0;
				while (strOne[i])
				{
					str_One[i] = strOne[i];
					i++;
				}
				str_One[i] = '\0';
				i = 0;
				while (strTwo[i])
				{
					str_Two[i] = strTwo[i];
					i++;
				}
				str_Two[i] = '\0';
				strcat(str_One, str_Two);
				system(str_One);
				return 0;
			}
			if (sysshutdownyn == "n")
			{
				cout << "Custom time shut-down command aborted." << endl;
			}
			if (sysshutdownyn == "N")
			{
				cout << "Custom time shut-down command aborted." << endl;
			}
		}
		else if (input1 == "easteregg")
		{
			cout << "Hello there, this is Easter Egg, a decoy for the real easter eggs hidden in this app. good luck finding the real easter eggs" << endl;
		}
		else if (input1 == "clock-date-time.show")
		{
			time_t timetoday;
			time(&timetoday);
			cout << "Calendar date and time is: " << asctime(localtime(&timetoday));
		}
		else if (input1 == "console.close")
		{
			abort();
		}
		else if (input1 == "github-repo.open")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "github-repo.issues.open")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/issues"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "chrome://dino")
		{
			cout << "Remember to do it in Chrome next time but here's something for you since you found an easter egg..." << endl;
			cout << "                                ############# " << endl;
			cout << "        #                      ######## ######" << endl;
			cout << "        ###                    ###############" << endl;
			cout << "         ###                   ######         " << endl;
			cout << "          ###                   ##############" << endl;
			cout << "            ######################            " << endl;
			cout << "           ########################           " << endl;
			cout << "           ########################           " << endl;
			cout << "            #######################            " << endl;
			cout << "               ################# #####        " << endl;
			cout << "                ####    ####       #          " << endl;
			cout << "                ####    ####                  " << endl;
			cout << "                ####    ####                  " << endl;
			cout << "                ####    ####                  " << endl;
			cout << "                ####    ####                  " << endl;
			cout << "               ####### #######                " << endl;
			cout << "                #####   #####                " << endl;
		}
		else if (input1 == "github-repo.wiki.open")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "github-repo.projects.open")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/projects"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "github-repo.issues.open")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/issues"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "console.help")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "suicidal.help")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "suicide.help")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "suicidal-thoughts.help")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://samaritanshope.org/"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "commands.list")
		{
			HWND hWnd = GetConsoleWindow();
			ShowWindow(hWnd, SW_SHOW);
			ShellExecute(NULL, TEXT("open"), TEXT("https://github.com/astronomerayaan/ConsoleController/wiki/Full-Command-List"), TEXT(""), NULL, SW_SHOW);
		}
		else if (input1 == "undo.nedry.sabotage")
		{
			cout << "Ah ah ah! You didn't say the magic word!" << endl;
		}
		else if (input1 == "search-engine.open")
		{
			cout << "[Type 'n' or 'N' without the quotation marks to cancel] search-engine.open >> ";
			cin >> searchengineopeninput;
			if (searchengineopeninput == "n")
			{
				cout << "Command canceled." << endl;
			}
			else if (searchengineopeninput == "N")
			{
				cout << "Command canceled." << endl;
			}
			else
			{
				if (searchengineopeninput == "google.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://google.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "bing.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://bing.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "yahoo.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.yahoo.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "baidu.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.baidu.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "yandex.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://yandex.ru/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "duckduckgo.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://duckduckgo.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "askjeeves.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.ask.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "ask.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.ask.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "ecosia.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.ecosia.org/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "aol.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://www.aol.com/"), TEXT(""), NULL, SW_SHOW);
				}
				else if (searchengineopeninput == "archiveorg.open")
				{
					HWND hWnd = GetConsoleWindow();
					ShowWindow(hWnd, SW_SHOW);
					ShellExecute(NULL, TEXT("open"), TEXT("https://archive.org/"), TEXT(""), NULL, SW_SHOW);
				}
			}
		}
		else if (input1 == "crash")
		{
			abort();
		}
		else if (input1 == "abort")
		{
			abort();
		}
		else if (input1 == "console.crash")
		{
			abort();
		}
		else if (input1 == "console.abort")
		{
			abort();
		}
		else if (input1 == "sys.restart.30s")
		{
			cout << "Are you sure you want to restart? [y/n]: ";
			cin >> sysrestartyn;
			if (sysrestartyn == "y")
			{
				cout << "Restarting in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /r");
				return 0;
			}
			if (sysrestartyn == "Y")
			{
				cout << "Restarting in 30 seconds...";
				system("C:\\Windows\\System32\\shutdown /r");
				return 0;
			}
			if (sysrestartyn == "n")
			{
				cout << "30s restart command aborted." << endl;
			}
			if (sysrestartyn == "N")
			{
				cout << "30s restart command aborted." << endl;
			}
		}
		else if (input1 == "sys.restart.quick")
		{
			cout << "Are you sure you want to restart? [y/n]: ";
			cin >> sysrestartyn;
			if (sysrestartyn == "y")
			{
				cout << "Shutting down...";
				system("C:\\Windows\\System32\\shutdown /r /t 0");
				return 0;
			}
			if (sysrestartyn == "y")
			{
				cout << "Shutting down...";
				system("C:\\Windows\\System32\\shutdown /r /t 0");
				return 0;
			}
			if (sysrestartyn == "n")
			{
				cout << "Immediate shut-down command aborted." << endl;
			}
			if (sysrestartyn == "N")
			{
				cout << "Immediate shut-down command aborted." << endl;
			}
		}
		else if (input1 == "sys.restart.custom-seconds-amount")
		{
			cout << "Are you sure you want to restart? [y/n]: ";
			cin >> sysrestartyn;
			if (sysrestartyn == "y")
			{
				int sec, i;
				string strOne, strTwo;
				char str_One[50], str_Two[10];
				ostringstream intToStr;
				cout << "Enter Number of Seconds to Restart: ";
				cin >> sec;
				intToStr << sec;
				strOne = "C:\\Windows\\System32\\shutdown /r /t ";
				strTwo = intToStr.str();
				i = 0;
				while (strOne[i])
				{
					str_One[i] = strOne[i];
					i++;
				}
				str_One[i] = '\0';
				i = 0;
				while (strTwo[i])
				{
					str_Two[i] = strTwo[i];
					i++;
				}
				str_Two[i] = '\0';
				strcat(str_One, str_Two);
				system(str_One);
				return 0;
			}
			if (sysshutdownyn == "Y")
			{
				int sec, i;
				string strOne, strTwo;
				char str_One[50], str_Two[10];
				ostringstream intToStr;
				cout << "Enter Number of Seconds to Restart: ";
				cin >> sec;
				intToStr << sec;
				strOne = "C:\\Windows\\System32\\shutdown /r /t ";
				strTwo = intToStr.str();
				i = 0;
				while (strOne[i])
				{
					str_One[i] = strOne[i];
					i++;
				}
				str_One[i] = '\0';
				i = 0;
				while (strTwo[i])
				{
					str_Two[i] = strTwo[i];
					i++;
				}
				str_Two[i] = '\0';
				strcat(str_One, str_Two);
				system(str_One);
				return 0;
			}
			if (sysshutdownyn == "n")
			{
				cout << "Custom time restart command aborted." << endl;
			}
			if (sysshutdownyn == "N")
			{
				cout << "Custom time restart command aborted." << endl;
			}
		}
		else if (input1 == "socialmedia.open")
		{
			cout << "socialmedia.open >> ";
			cin >> socialmediaopeninput;
			if (socialmediaopeninput == "twtr")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://twitter.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (socialmediaopeninput == "reddit")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.reddit.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (socialmediaopeninput == "insta")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.instagram.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (socialmediaopeninput == "fb")
			{
				//I kind of dislike Facebook but if you use it then this is for you
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.facebook.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (socialmediaopeninput == "meta")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.facebook.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (socialmediaopeninput == "metafb")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.facebook.com/"), TEXT(""), NULL, SW_SHOW);
			}
		}
		else if (input1 == "email.open")
		{
			cout << "email.open >>";
			cin >> emailinput;
			if (emailinput == "proton")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://protonmail.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "protonmail")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://protonmail.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "gmail")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://mail.google.com/mail/u/0/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "outlook")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://outlook.live.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "yahoo")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://mail.yahoo.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "yahoomail")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://mail.yahoo.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (emailinput == "zoho")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.zoho.com/mail/"), TEXT(""), NULL, SW_SHOW);
			}
		}
		else if (input1 == "video.socialmedia.open")
		{
			cout << "video.socialmedia.open >> ";
			cin >> vidsocialmediaopeninput;
			if (vidsocialmediaopeninput == "yt")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://youtube.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (vidsocialmediaopeninput == "vimeo")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://vimeo.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (vidsocialmediaopeninput == "tiktok")
			{
				// WHYYYYY
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.tiktok.com/"), TEXT(""), NULL, SW_SHOW);
			}
		}
		else if (input1 == "formal.socialmedia.open")
		{
			cout << "formal.socialmedia.open >> ";
			cin >> formalsocialmediaopeninput;
			if (formalsocialmediaopeninput == "slack")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://slack.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (formalsocialmediaopeninput == "gclass")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://classroom.google.com/"), TEXT(""), NULL, SW_SHOW);
			}
			else if (formalsocialmediaopeninput == "mteams")
			{
				HWND hWnd = GetConsoleWindow();
				ShowWindow(hWnd, SW_SHOW);
				ShellExecute(NULL, TEXT("open"), TEXT("https://www.microsoft.com/en-us/microsoft-teams/group-chat-software"), TEXT(""), NULL, SW_SHOW);
			}
		}
		else
		{
			cout << "The command you entered was not recognized. If you would like to, you can try again." << endl;
		}
	}
}
