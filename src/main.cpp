#include "gen.hpp"
#include "internet.hpp"
#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "Discord Token Generator - 0x44F (DTG)\r\n";
    init_internet();
    std::cout << "Starting internet connection...\r\n";
    do 
    {
        cout << '\n' << "Please press enter to confirm you have completed at least 1 - 2 Discord Captchas within the last 24HRS...";
    } while (cin.get() != '\n');
    
    std::cout << "Please wait whilst we start the generation process!\r\n";
    
    while(true)
    {
        generate_account("random ass username","WEBHOOK HERE -----",true);    // generate_account(username: const char*, webhook: const char*, verify: bool);
        std::cout << "Created one account. Sending to webhook.\r\n";
    }
}
