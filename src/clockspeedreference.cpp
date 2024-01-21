#include "clockspeedreference.h"

#include <borealis.hpp>

ClockSpeedReference::ClockSpeedReference() {
    // CPU
    this->addView(new brls::Header("CPU Clocks"));
    brls::Table *cpuTable = new brls::Table();

    cpuTable->addRow(brls::TableRowType::BODY, "Maximum", "1785 MHz");
    cpuTable->addRow(brls::TableRowType::BODY, "Official Docked and Handheld", "1020 MHz");

    this->addView(cpuTable);

    // GPU
    this->addView(new brls::Header("GPU Clocks"));
    brls::Table *gpuTable = new brls::Table();

    gpuTable->addRow(brls::TableRowType::BODY, "Maximum", "921 MHz");
    gpuTable->addRow(brls::TableRowType::BODY, "Official Docked", "768 MHz");
    gpuTable->addRow(brls::TableRowType::BODY, "Maximum Mariko Handheld", "614 MHz");
    gpuTable->addRow(brls::TableRowType::BODY, "Maximum Erista Handheld", "460 MHz");
    gpuTable->addRow(brls::TableRowType::BODY, "Official Handheld", "384 MHz");

    this->addView(gpuTable);

    // MEM
    this->addView(new brls::Header("MEM Clocks"));
    brls::Table *memTable = new brls::Table();

    memTable->addRow(brls::TableRowType::BODY, "Maximum, Official Docked", "1600 MHz");
    memTable->addRow(brls::TableRowType::BODY, "Official Handheld", "1331 MHz");

    this->addView(memTable);
}

void ClockSpeedReference::customSpacing(brls::View* current, brls::View* next, int* spacing) {
    if (dynamic_cast<brls::Table*>(current))
        *spacing = 0;
    else
        List::customSpacing(current, next, spacing);
}
