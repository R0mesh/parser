#pragma comment(lib,"curllib.lib")
#include <iostream>;
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <curl.h>

using namespace std;

int main()
{
    CURL* curl_handle = curl_easy_init();
    char link[128] = "https://api.stackexchange.com/docs/search#order=desc&sort=activity&intitle=beautiful&filter=default&site=stackoverflow&run=true";
    cout << "Enter link address" << endl;
    //cin >> link;
    cout << "Starting parsing..." << endl;
    if (curl_handle)
    {
        curl_easy_setopt(curl_handle, CURLOPT_URL, link);
        CURLcode res = curl_easy_perform(curl_handle);
        curl_easy_cleanup(curl_handle);
    }
    cout << "Complite parsing" << endl;
}

