#define CURL_STATICLIB
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include "curl/curl.h"
#ifdef _DEBUG
#pragma comment (lib, "curl/libcurl_a_debug.lib")
#else
#pragma comment (lib, "curl/libcurl_a.lib")
#endif
 
using namespace std;

int main()
{
    char link[128] = "https://api.stackexchange.com/docs/search#order=desc&sort=activity&intitle=beautiful&filter=default&site=stackoverflow&run=true";
    cout << "Enter link address" << endl;
    //cin >> link;
    cout << "Starting parsing..." << endl;
    cout << "Complite parsing..." << endl;
}