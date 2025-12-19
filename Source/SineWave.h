//
// Created by Blush Audio Dev on 19/12/2025.
//

#ifndef MRCOOLDUDE_SINEWAVE_H
#define MRCOOLDUDE_SINEWAVE_H

#include <juce_audio_basics/juce_audio_basics.h>


class SineWave
{
public:
    void prepare (double sampleRate, int numChannels);
    void process (juce::AudioBuffer<float>& buffer);
    [[nodiscard]] float getAmplitude() const {return amplitude;}
    [[nodiscard]] float getFrequency() const {return frequency;}
    void setAmplitude(const float newAmplitude) {amplitude = newAmplitude;}
    void setFrequency(const float newFrequency) {frequency = newFrequency;}

private:
    float amplitude = 0.5f;
    float frequency = 440.f;
    float currentSampleRate = 0.0f;
    float timeIncrement = 0.0f;
    std::vector<float> currentTime;

};


#endif //MRCOOLDUDE_SINEWAVE_H