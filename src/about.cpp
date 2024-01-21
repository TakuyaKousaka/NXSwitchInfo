#include "about.h"

#include "logo.h"
#include <borealis.hpp>

About::About() {
    this->addView(new Logo(LogoStyle::ABOUT));

    // Subtitle
    brls::Label *subTitle = new brls::Label(
        brls::LabelStyle::REGULAR,
        "Nintendo Switch system information, used for reminders of system limits and viewing of system specs", 
        true
    );
    subTitle->setHorizontalAlign(NVG_ALIGN_CENTER);
    this->addView(subTitle);

    // Links
    this->addView(new brls::Header("Links and Resources"));
    brls::Label *links = new brls::Label(
        brls::LabelStyle::SMALL,
        "Visit switchbrew.org for more detailed info about this Console!"
        "\nGithub: https://github.com/TakuyaKousaka/",
        true
    );
    this->addView(links);
}
