//
// Created by 石鑫 on 2020/11/26.
//

#include "FighterPlane.h"
FighterPlane::FighterPlane(string num):Plane(num) {
    cout << "FighterPlane()" <<endl;
}

FighterPlane::~FighterPlane() {
    cout << "~FighterPlane()" <<endl;
}