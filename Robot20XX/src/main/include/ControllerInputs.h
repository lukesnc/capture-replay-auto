#pragma once

struct cmd {
    // Driver 1
    float drive_rightY;
    float drive_rightX;
    float drive_leftY;
    float drive_leftX;
    bool drive_AButton;
    bool drive_BButton;
    bool drive_XButton;
    bool drive_YButton;
    bool drive_RightBumper;
    bool drive_LeftBumper;
    float drive_RightTriggerAxis;
    float drive_LeftTriggerAxis;
    int drive_POV;
    // Driver 2
    float mani_leftX;
    float mani_rightX;
    float mani_leftY;
    float mani_rightY;
    bool mani_AButton;
    bool mani_BButton;
    bool mani_XButton;
    bool mani_YButton;
    bool mani_RightBumper;
    bool mani_LeftBumper;
    float mani_RightTriggerAxis;
    float mani_LeftTriggerAxis;
    int mani_POV;
};
