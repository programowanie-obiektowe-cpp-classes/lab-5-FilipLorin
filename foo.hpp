#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> output;

    for(auto it = people.rbegin(); it != people.rend(); it++) {
        it->birthday();
        if(it->isMonster())
            output.push_back('n');
        else
            output.push_back('y');
    }
    return output;
}
