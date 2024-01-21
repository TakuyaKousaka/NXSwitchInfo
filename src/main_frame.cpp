#include "main_frame.h"

#include "specs.h"
#include "clockspeedreference.h"
#include "about.h"
#include "logo.h"

MainFrame::MainFrame() : TabFrame()
{
    // Load UI
    this->setIcon(new Logo(LogoStyle::HEADER));

    this->addTab("Specifications", new specs());
    this->addTab("Clockspeed References", new ClockSpeedReference());
    this->addTab("About", new About());
}
