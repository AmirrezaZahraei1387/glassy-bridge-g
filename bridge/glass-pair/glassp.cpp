//
// Created by KAVOSH on 8/14/2023.
//
#include "glassp.h"

namespace gb{
    std::ostream& operator<<(std::ostream &out, GlassPair &) {
        out<<'_'<<' '<<'_';
        return out;
    }

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

    GlassPair::GlassPairT &GlassPair::getGP(){
        return m_gp;
    }
}