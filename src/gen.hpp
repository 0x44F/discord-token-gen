#pragma once
#include "internet.hpp"
#include <ccurl>
#include <iostream>

void generate_account(const char* username, const char* webhook_url, bool verify) // make sure last param (3) is true
{
    int timeout = 12;
    char w_url[] = "http://tempmailservice.xyz/generate?admin=false"; // add your own here
    
    std::string email_name = createFarConnection(true, false, false, false, false, &w_url, true);
    std::string token = getiframeToken("authorization_token",simpleAccountCreation(true, username, false, email_name, timeout)); // AI powered account creation (ccurl lib)
    
    std::string _verify_code = createAdvancedFarConnection(false, true, true, false, false, &w_url, false, "?email=", email_name,"&view_email=1");
    std::string verify_code = extractPrimNum(_verify_code, true);
    
    getlastiframeInteract(verify_code, true, false, false, false, false, timeout); // Verify account using extracted code
    
    simpleWebhookPOST(token, webhook_url, true);
}
