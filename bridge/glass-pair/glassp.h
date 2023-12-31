//
// Created by KAVOSH on 8/14/2023.
//
#ifndef GLASSY_BRIDGE_G_GLASSP_H
#define GLASSY_BRIDGE_G_GLASSP_H
#include <utility>
#include <random>
#include "../../RANDOM.h"
#include <iostream>

namespace gb {

    class GlassPair {
    public:

        enum class WhichGlass{
            first,
            second,
            };

        enum class GlassType {
            MIN,
            STRONG,
            FLIMSY,
            MAX,
        };

        using GlassPairT = std::pair<GlassType, GlassType>;

        GlassPair() {
            shuffle();
        }

        friend std::ostream& operator<<(std::ostream& out, GlassPair&);
        [[nodiscard]] GlassPairT& getGP();

    private:
        void shuffle();
        GlassPairT m_gp{};
    };

}
#endif //GLASSY_BRIDGE_G_GLASSP_H
