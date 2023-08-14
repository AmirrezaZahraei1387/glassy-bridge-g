//
// Created by KAVOSH on 8/14/2023.
//

#ifndef GLASSY_BRIDGE_G_BRIDGE_H
#define GLASSY_BRIDGE_G_BRIDGE_H

#include <array>
#include "../../info.h"
#include "../glass-pair/glassp.h"


namespace gb {
    struct PointBridge{
        int glassPairNumber{};
        GlassPair::WhichGlass which{};
    };

    class Bridge {

    public:

        Bridge() = default;
        GlassPair::GlassType checkGlass();

    private:
        std::array<GlassPair, info::BRIDGE_SIZE_LENGTH> bridge{
            GlassPair{}, GlassPair{},GlassPair{}, GlassPair{}, GlassPair{},
            GlassPair{}, GlassPair{},GlassPair{}, GlassPair{}, GlassPair{}
        };
    };
}
#endif //GLASSY_BRIDGE_G_BRIDGE_H
