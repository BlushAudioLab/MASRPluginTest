//
// Created by David Featherstone on 19/12/2025.
//

#ifndef MRCOOLDUDE_SINEWAVECHANNEL_H
#define MRCOOLDUDE_SINEWAVECHANNEL_H

#include <cmath>
#include <numbers>

class SineWaveChannel
{
public:
    void prepare(double sampleRate);
    void process(float* output, int numSamples);
    [[nodiscard]] float getAmplitude() const {return amplitude;}
    [[nodiscard]] float getFrequency() const {return frequency;}
    void setAmplitude(const float newAmplitude) {amplitude = newAmplitude;}
    void setFrequency(const float newFrequency) {frequency = newFrequency;}


private:

    float amplitude = 0.5f;
    float frequency = 440.f;
    float currentSampleRate = 0.0f;
    float timeIncrement = 0.0f;
    float currentTime = 0.0f;
};


#endif //MRCOOLDUDE_SINEWAVECHANNEL_H