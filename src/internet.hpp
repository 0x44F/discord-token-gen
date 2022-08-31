#pragma once
#include <ccurl>

void init_internet()
{
    ccurl.init(true, true, false, true);
    ccurl.init_ai();
    
    return;
}
