//
// Created by Blush Audio Dev on 19/12/2025.
//

#ifndef MRCOOLDUDE_SINEWAVE_H
#define MRCOOLDUDE_SINEWAVE_H

#include <juce_audio_basics/juce_audio_basics.h>


class SineWave
{
public:
    void prepare (double sampleRate);
    void process (juce::AudioBuffer<float>& buffer);

private:
    float amplitude = 0.5f;
    float frequency = 440.0f;
    float currentSampleRate = 0.0f;
    float timeIncrement = 0.0f;
    float currentTime = 0.0f;

};


#endif //MRCOOLDUDE_SINEWAVE_H