// GLEntityManager.hpp
// Last update 6/7/2021 by Madman10K
#include <GL/glew.h>
#include <Core/Actor.hpp>
#include "GLEntityManager.hpp"
#include <GameFramework/Components/Components.hpp>

void UVK::GLEntityManager::tick(Camera* camera)
{
    for (const auto& a : global.ecs.data().view<AudioComponent>())
    {
#ifndef __MINGW32__
        {
            auto& audiocmp = global.ecs.data().get<AudioComponent>(a);

            auto& state = audiocmp.src.getState();

            switch (state)
            {
                case UVK_AUDIO_STATE_RESUME:
                    audiocmp.src.play();
                    break;
                case UVK_AUDIO_STATE_PAUSED:
                    alSourcePause(audiocmp.src.getBuffer().getBuffer());
                    break;
                case UVK_AUDIO_STATE_STOPPED:
                    audiocmp.src.getBuffer().removeSound();
                    state = UVK_AUDIO_STATE_PAUSED;
                    break;
                case UVK_AUDIO_STATE_RUNNING:
                    break;
            }

            //else if (state == UVK_AUDIO_STATE_STOPPED)
            //{
            //    audiocmp.src.getBuffer().removeSound();
            //    bRemove = true;
            //}
        }
#endif
    }

    for (const auto& a : global.ecs.data().view<MeshComponentRaw>())
    {
        auto& b = global.ecs.data().get<MeshComponentRaw>(a);
        b.render(camera->getProjection().data(), *camera);
    }
}

void UVK::GLEntityManager::clean()
{
    for (const auto& a : global.ecs.data().view<MeshComponentRaw>())
    {
        auto& b = global.ecs.data().get<MeshComponentRaw>(a);

        b.clearMesh();
    }

    for (const auto& a : global.ecs.data().view<AudioComponent>())
    {
#ifndef __MINGW32__
        auto& b = global.ecs.data().get<AudioComponent>(a);

        b.src.getBuffer().removeSound();
#endif
    }

    global.ecs.clear();
}
