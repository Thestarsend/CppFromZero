

#include <cstddef>
#include <windows.h>
#include <shellapi.h>
#include <string>
#include <direct.h>
#include <iostream>

using namespace std;

int main() {
    const char* s = getcwd(NULL,0);
    string path = s ;
    string jarPath ="/c " + path + "\\1.jar";
    cout<<jarPath;
    ShellExecute(NULL, "runas", "cmd", jarPath.c_str(), NULL, SW_HIDE);
    return 0;
}
