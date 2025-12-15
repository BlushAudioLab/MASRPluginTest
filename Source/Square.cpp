//
// Created by Blush Audio Dev on 15/12/2025.
//

#include "Square.h"

void Square::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::orange);

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("BA MASR", getLocalBounds(), juce::Justification::centred, 1);
}

void Square::resized()
{

}