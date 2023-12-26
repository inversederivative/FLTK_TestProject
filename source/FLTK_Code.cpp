//
// Created by John on 12/25/2023.
//
#include <FLTK_Code.hpp>

FLTKInterface::FLTKInterface()
{
    window = nullptr;
    button = nullptr;
    inputText = nullptr;
}

void FLTKInterface::SetupGUI() {
    window = new Fl_Window(600, 400, "FLTK App");

    inputText = new Fl_Input(100, 40, 200, 25, "Enter Text:");
    button = new Fl_Button(10, 80, 80, 25, "Submit");
    button->callback(buttonCallback, this);

    window->end();
}

void FLTKInterface::Run() {
    if (window) {
        window->show();
        Fl::run();
    }
}

void FLTKInterface::buttonCallback(Fl_Widget *widget, void *data) {
    auto fltkInterface = static_cast<FLTKInterface *>(data);
    if (fltkInterface) {

        const char *text = fltkInterface->inputText->value();

        std::cout << "Button Clicked! Text entered: " << text << std::endl;
        fltkInterface->SaveText(text);
        // Add more logic as needed
    }
}

void FLTKInterface::SaveText(const char *text) {
    savedText = text;
    std::cout << "The saved text is: " << savedText << std::endl;
    // Do something with the saved text, e.g., store it in a member variable
}