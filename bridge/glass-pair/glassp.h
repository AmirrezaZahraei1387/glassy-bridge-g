//
// Created by KAVOSH on 8/14/2023.
//
#ifndef GLASSY_BRIDGE_G_GLASSP_H
#define GLASSY_BRIDGE_G_GLASSP_H
#include <utility>
#include <random>
#include "../../RANDOM.h"

namespace gb {



    class GlassPair {
    public:


        enum class GlassType {
            MIN,
            STRONG,
            FLIMSY,
            MAX,
        };

        GlassPair() {
            shuffle();
        }
        void shuffle();

    private:


        std::pair<GlassType, GlassType> m_gp{};
    };

    inline std::uniform_int_distribution GlassTypeG(static_cast<int>(GlassPair::GlassType::MIN)+1,
                                                    static_cast<int>(GlassPair::GlassType::MAX)-1);
    void GlassPair::shuffle() {
        GlassType gt{static_cast<GlassType>(GlassTypeG(random::mt))};
        m_gp.first = gt;
        if(gt == GlassType::STRONG)
            m_gp.second = GlassType::FLIMSY;
        else
            m_gp.second = GlassType::STRONG;
    }
}
#endif //GLASSY_BRIDGE_G_GLASSP_H
