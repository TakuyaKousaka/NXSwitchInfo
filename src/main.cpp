#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <borealis.hpp>

#include "main_frame.h"
#include "logo.h"

int main(int argc, char* argv[])
{
    // Init the app
    if (!brls::Application::init(APP_TITLE))
    {
        brls::Logger::error("Unable to init Borealis application");
        return EXIT_FAILURE;
    }

    if (brls::Application::loadFont(LOGO_FONT_NAME, LOGO_FONT_PATH) < 0)
    {
        brls::Logger::error("failed to load logo font");
    }

    {
        brls::Application::setCommonFooter("1.0.0");
        // Create root view
        MainFrame *mainFrame = new MainFrame();

        // Add the root view to the stack
        brls::Application::pushView(mainFrame);
    }

    // Run the app
    while (brls::Application::mainLoop());

    return EXIT_SUCCESS;
}
