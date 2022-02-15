#include "segregation.h"
#include <string>
#include <vector>

void segregation::rm_all_mixed()
{
    mixed.clear();
    current_mixed = 0;
}

void segregation::rm_all_plastics()
{
    plastics.clear();
    current_mixed = 0;
}

void segregation::add_mixed(std::string trash)
{
    if(max_mixed == current_mixed) return;
    mixed.push_back(trash);
    ++ current_mixed;
}

void segregation::add_plastics(std::string trash)
{
    if(max_plastic == current_plastics) return;
    plastics.push_back(trash);
    ++ current_plastics;
}

bool segregation::mixed_is_full()
{
    if(max_mixed == current_mixed) return true;
    return false;
}


bool segregation::plastics_is_full()
{
    if(max_plastic == current_plastics) return true;
    return false;
}