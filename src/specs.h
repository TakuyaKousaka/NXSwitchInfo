#pragma once

#include <borealis.hpp>

class specs:public brls::List {
    public:
        specs();

        void customSpacing(brls::View* current, brls::View* next, int* spacing) override;

        View* getDefaultFocus() override
        {
            return nullptr;
        }
};