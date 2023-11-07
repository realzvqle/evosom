#include "evosom.h"








BOOL checker() {
	FILE* checker;

	checker = fopen("C:\\ProgramData\\APHostClient.dll", "r");

	if (!checker) {
		return FALSE;
	}


	return TRUE;
}


BOOL isAdmin() {
    BOOL isAdmin;
    SID_IDENTIFIER_AUTHORITY NTA = SECURITY_NT_AUTHORITY;
    PSID AdminGroup;
    AllocateAndInitializeSid(&NTA, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &AdminGroup);
    CheckTokenMembership(NULL, AdminGroup, &isAdmin);
    FreeSid(AdminGroup);
    return isAdmin;
}