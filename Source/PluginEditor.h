/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_80E2F3C055EF750C__
#define __JUCE_HEADER_80E2F3C055EF750C__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
#include "TeragonGuiComponents.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class BVerbAudioProcessorEditor  : public AudioProcessorEditor,
                                   public teragon::ParameterObserver,
                                   public Timer
{
public:
    //==============================================================================
    BVerbAudioProcessorEditor (BVerbAudioProcessor& ownerProc, teragon::ConcurrentParameterSet &p, teragon::ResourceCache *r);
    ~BVerbAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    bool isRealtimePriority() const { return false; }
    void onParameterUpdated(const teragon::Parameter *parameter);
    static void* importFile(void *editor);
    void timerCallback();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();

    // Binary resources:
    static const char* graybackground4_jpg;
    static const int graybackground4_jpgSize;
    static const char* silverbackground21170x731_jpg;
    static const int silverbackground21170x731_jpgSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    BVerbAudioProcessor&                    processor;
    teragon::ConcurrentParameterSet&        parameters;
    teragon::ResourceCache*                 resourceCache;
    bool                                    UIResynthFlag;
    int                                     pluginMode;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<teragon::StatusBar> statusBar;
    ScopedPointer<teragon::ToggleButton> irLoadButton;
    ScopedPointer<teragon::PushButton> micTechBlumleinPushButton;
    ScopedPointer<teragon::PushButton> micTechXYPushButton;
    ScopedPointer<teragon::PushButton> micTechMidSidePushButton;
    ScopedPointer<teragon::PushButton> micTechFreePushButton;
    ScopedPointer<teragon::ImageKnobLarge> azimuthKnob1;
    ScopedPointer<teragon::ImageKnobLarge> elevationKnob1;
    ScopedPointer<teragon::PushButton> polarPatOmniPushButton1;
    ScopedPointer<teragon::PushButton> polarPatCardPushButton1;
    ScopedPointer<teragon::PushButton> polarPatSuperPushButton1;
    ScopedPointer<teragon::PushButton> polarPatOchoPushButton1;
    ScopedPointer<teragon::ImageKnobLarge> azimuthKnob2;
    ScopedPointer<teragon::ImageKnobLarge> elevationKnob2;
    ScopedPointer<teragon::PushButton> polarPatOmniPushButton2;
    ScopedPointer<teragon::PushButton> polarPatCardPushButton2;
    ScopedPointer<teragon::PushButton> polarPatSuperPushButton2;
    ScopedPointer<teragon::PushButton> polarPatOchoPushButton2;
    Image cachedImage_silverbackground21170x731_jpg_1;
    Image cachedImage_graybackground4_jpg_2;
    Image cachedImage_graybackground4_jpg_3;
    Image cachedImage_graybackground4_jpg_4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BVerbAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_80E2F3C055EF750C__
