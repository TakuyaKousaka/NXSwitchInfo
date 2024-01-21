#include "specs.h"

#include <borealis.hpp>

specs::specs() {

    // Specs
    this->addView(new brls::Header("Main Specs"));
    brls::Table *specsTable = new brls::Table();

    specsTable->addRow(brls::TableRowType::BODY, "CPU:", "Tegra X1");
    specsTable->addRow(brls::TableRowType::BODY, "GPU:", "Tegra X1 Maxwell");
    specsTable->addRow(brls::TableRowType::BODY, "RAM:", "4096MB / 3221MB Available to games (Dynamic)");
    specsTable->addRow(brls::TableRowType::BODY, "EMMC:", "Switch / Switch Lite (32GB) / Switch OLED (64GB)");
    specsTable->addRow(brls::TableRowType::BODY, " ", " ");
    specsTable->addRow(brls::TableRowType::BODY, "Resolution:", "1280x720 Handheld / 1920x1080 Docked");
    specsTable->addRow(brls::TableRowType::BODY, "Wireless:", "WiFi 802.11AC / Bluetooth 4.1");
    specsTable->addRow(brls::TableRowType::BODY, "Ethernet:", "RTL8154B / AX8817X / AX88772 Chipsets USB Dongle");

    this->addView(specsTable);
}

void specs::customSpacing(brls::View* current, brls::View* next, int* spacing) {
    if (dynamic_cast<brls::Table*>(current))
        *spacing = 0;
    else
        List::customSpacing(current, next, spacing);
}
