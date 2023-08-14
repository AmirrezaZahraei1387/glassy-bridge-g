//
// Created by KAVOSH on 8/14/2023.
//
#ifndef GLASSY_BRIDGE_G_GLASSP_H
#define GLASSY_BRIDGE_G_GLASSP_H
#include <utility>

class GlassPair{
public:

    enum class GlassType{
        STRONG,
        FLIMSY,
    };

    GlassPair() = default;

private:
    std::pair<GlassType, GlassType> m_gp{};
};


#endif //GLASSY_BRIDGE_G_GLASSP_H
