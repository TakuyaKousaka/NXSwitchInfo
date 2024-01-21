#pragma once

#include <borealis.hpp>

class ClockSpeedReference:public brls::List {
    public:
        ClockSpeedReference();

        void customSpacing(brls::View* current, brls::View* next, int* spacing) override;

        View* getDefaultFocus() override
        {
            return nullptr;
        }
};
