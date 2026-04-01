#pragma once

#include "PiSubmarine/SignedNormalizedFraction.h"

namespace PiSubmarine::Motor::Bidirectional::Api
{
    class IController
    {
public:
        virtual ~IController() = default;
        virtual void SetPowered(bool enabled) = 0;
        [[nodiscard]] virtual bool IsPowered() const = 0;
        [[nodiscard]] virtual SignedNormalizedFraction GetDutyCycle() const = 0;
        virtual void SetDutyCycle(SignedNormalizedFraction dutyCycle) = 0;
    };
}

