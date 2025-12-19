//
// Created by Blush Audio Dev on 19/12/2025.
//

#include "SineWave.h"

void SineWave::prepare(double sampleRate, int numChannels)
{
    currentSampleRate = static_cast<float>(sampleRate);
    timeIncrement = 1.0f / currentSampleRate;
    currentTime.resize(static_cast<size_t>(numChannels), 0.0f);
}

void SineWave::process (juce::AudioBuffer<float>& buffer)
{
    if (currentTime.size() != static_cast<size_t>(buffer.getNumChannels()))
        return;

    for (size_t channel = 0; channel < static_cast<size_t>(buffer.getNumChannels()); ++channel)
    {

        auto* output = buffer.getWritePointer(static_cast<int>(channel));

        for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            output[sample] = amplitude * std::sinf(juce::MathConstants<float>::twoPi * 440.0f * currentTime[channel]);
            currentTime[channel] += timeIncrement;
        }
    }
}
