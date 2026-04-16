#pragma once

#include "PiSubmarine/SignedNormalizedFraction.h"
#include "PiSubmarine/NormalizedFraction.h"
#include "PiSubmarine/Error/Api/Result.h"

namespace PiSubmarine::Motor::Bidirectional::Api
{
    class IController
    {
public:
        virtual ~IController() = default;
        [[nodiscard]] virtual Error::Api::Result<void> SetPowered(bool enabled) = 0;
        [[nodiscard]] virtual Error::Api::Result<bool> IsPowered() const = 0;
        [[nodiscard]] virtual Error::Api::Result<SignedNormalizedFraction> GetDutyCycle() const = 0;
        [[nodiscard]] virtual Error::Api::Result<void> SetDutyCycle(SignedNormalizedFraction dutyCycle) = 0;
        [[nodiscard]] virtual Error::Api::Result<NormalizedFraction> GetForwardMinimalEffectiveDutyCycle() const = 0;
        [[nodiscard]] virtual Error::Api::Result<NormalizedFraction> GetReverseMinimalEffectiveDutyCycle() const = 0;
    };
}

