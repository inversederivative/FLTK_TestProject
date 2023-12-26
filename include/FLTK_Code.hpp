//
// Created by John on 12/25/2023.
//
#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>

#ifndef FLTK_TESTPROJECT_FLTK_CODE_HPP
#define FLTK_TESTPROJECT_FLTK_CODE_HPP

class FLTKInterface
{
private:
    Fl_Window* window;
    Fl_Input* inputText;
    Fl_Button* button;

    std::string savedText;

    static void buttonCallback(Fl_Widget *widget, void *data);

public:
    FLTKInterface();

    void SetupGUI();

    void SaveText(const char* text);

    void Run();

};

#endif //FLTK_TESTPROJECT_FLTK_CODE_HPP
