#pragma once

#include <borealis.hpp>

class About : public brls::List
{
    public:
        About();

        View* getDefaultFocus() override
        {
            return nullptr;
        }
};
