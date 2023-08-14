//
// Created by KAVOSH on 8/14/2023.
//
#ifndef GLASSY_BRIDGE_G_GLASSP_H
#define GLASSY_BRIDGE_G_GLASSP_H
#include <utility>
#include <random>

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

        }

        friend void shuffle();
    private:


        std::pair<GlassType, GlassType> m_gp{};
    };

    inline std::uniform_int_distribution generator(static_cast<int>(GlassPair::GlassType::MIN)+1,
                                                   static_cast<int>(GlassPair::GlassType::MAX)-1);
    void shuffle() {
        generator
    }
}
#endif //GLASSY_BRIDGE_G_GLASSP_H
