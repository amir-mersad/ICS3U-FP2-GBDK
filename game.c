// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program displays a sprite on a gameboy

#include <stdio.h>
#include <gb/gb.h>

#include "shape.c"

int main() {
    // this function displays a happy face
    set_sprite_data(0, 2, shape);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}
