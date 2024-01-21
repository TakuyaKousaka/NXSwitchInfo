#pragma once

#include <borealis.hpp>

#define APP_ASSET(p) APP_RESOURCES p
#define LOGO_FONT_NAME "logo"
#define LOGO_FONT_PATH APP_ASSET("fira/FiraSans-Medium-rnx.ttf")

#define LOGO_HEADER_FONT_SIZE 45
#define LOGO_HEADER_SPACING 12
#define LOGO_ABOUT_FONT_SIZE 55
#define LOGO_DESC_FONT_SIZE 28
#define LOGO_OFFSET 2

enum class LogoStyle {
    HEADER = 0,
    ABOUT
};

class Logo : public brls::View {
    protected:
        brls::Label* logoLabel = nullptr;
        brls::Label* descLabel = nullptr;
        void layout(NVGcontext* vg, brls::Style* style, brls::FontStash* stash);
        void draw(NVGcontext* vg, int x, int y, unsigned width, unsigned height, brls::Style* style, brls::FrameContext* ctx) override;
    public:
        Logo(LogoStyle style);
        virtual ~Logo();
};
