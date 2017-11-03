/*
 * Copyright (C) 2017 DarkGengar <https://github.com/DarkGengar>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 *   @file        template.c
 *   @date        25.10.2017
 *   @author      DarkGengar <https://github.com/DarkGengar>
 *   @brief       brief description
 *
 *   @details     More details about file.
 */

/* -- Includes -- */
#include <tonc.h>

/* -- Methods -- */

/**
 *   @brief        brief description
 *  
 *   @return       return description
 *  
 *   @details      More Details
 */
int main(void) {

    vid_vsync();

    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;

    m3_plot(120, 80, RGB15(31, 0, 0));

    while(1);

    return 0;
}


// EOF