//
// Created by KAVOSH on 8/14/2023.
//

#include "../glass-pair/glassp.h"
#include "bridge.h"


namespace gb{

    GlassPair::GlassType Bridge::checkGlass(Bridge::PointBridge& pointBridge) {

        const GlassPair::GlassPairT holder {
            m_bridge[pointBridge.glassPairNumber].getGP()
        };

        if(pointBridge.which == GlassPair::WhichGlass::first)
            return holder.first;
        return holder.second;
    }
}