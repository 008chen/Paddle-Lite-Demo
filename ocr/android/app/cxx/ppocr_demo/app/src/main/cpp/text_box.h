//
// Created by lin.chen on 2022/5/25.
//

#ifndef PPOCR_DEMO_TEXT_BOX_H
#define PPOCR_DEMO_TEXT_BOX_H
//#include <iostream>
#include <string> // for string class

class TextBox {

public:
    TextBox(std::vector<std::vector< int>> box_p,std::string text_p): box(box_p), xtext(text_p)
    {

    }
    std::vector<std::vector < int>> box;
    std::string xtext;

};


#endif //PPOCR_DEMO_TEXT_BOX_H
