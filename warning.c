#include "evosom.h"



BOOL warning() {
	if (MessageBoxW(NULL, L"WARNING:\nTHIS MALWARE IS DANGROUS, DO YOU WANT TO CONTINUE?", L"you ruined my life, and i will get my revenge", MB_YESNO | MB_ICONSTOP) == IDYES) {
		if (MessageBoxW(NULL, L"WARNING:\nAGAIN: THIS MALWARE IS DANGROUS, DO YOU WANT TO CONTINUE?", L"you broke my heart, killed me, destroyed me and my work", MB_YESNO | MB_ICONSTOP) == IDYES) {
			return TRUE;
		}
		else return FALSE;
	}
	else return FALSE;
}