// PlayerState.hpp
// Last update 2/7/2021 by Madman10K
#pragma once
#include <Core.hpp>
#include "../Actors/APawn.hpp"

namespace UVK
{
    /**
     * @brief A player state is a simple class that semantically should be used to track the state of the player
     */
    class PlayerState
    {
    public:
        virtual void beginPlay() = 0;
        virtual void tick(float deltaTime) = 0;
        virtual void endPlay() = 0;

        virtual ~PlayerState() = default;
    };
}