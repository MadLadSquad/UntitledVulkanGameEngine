// EditorGameMode.hpp
// Last update 14/6/2021 by Madman10K
#pragma once
#include <GL/glew.h>
#include <GameFramework/GameplayClasses/GameMode.hpp>
#include "EditorPawn.hpp"

namespace UVK
{
    class EditorGameMode : public GameMode
    {
    public:
        EditorGameMode()
        {
            auto* pw = new EditorPawn;

            pawn = pw;
        }

        virtual void beginPlay() override;
        virtual void tick(float deltaTime) override;
        virtual void endPlay() override;
        virtual ~EditorGameMode() override
        {

        }
    };
}