//
// Created by Blush Audio Dev on 19/12/2025.
//

#include "SineWave.h"

void SineWave::prepare(double sampleRate)
{
    currentSampleRate = static_cast<float>(sampleRate);
    timeIncrement = 1.0f / currentSampleRate;
}

void SineWave::process (juce::AudioBuffer<float>& buffer)
{
    for (int channel = 0; channel < buffer.getNumChannels(); ++channel)
    {

        auto* output = buffer.getWritePointer(channel);

        for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            output[sample] = amplitude * std::sinf(juce::MathConstants<float>::twoPi * 440.0f * currentTime);
            currentTime += timeIncrement;
        }
    }
}
