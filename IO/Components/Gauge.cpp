//////////////////////////////////////////////////////////////////////////////
// This file is part of the LibreMaple MMORPG client                        //
// Copyright © 2015-2016 Daniel Allendorf, 2018-2019 LibreMaple Team        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#include "Gauge.h"

namespace jrc
{
Gauge::Gauge(Texture front,
             Texture mid,
             Texture end,
             std::int16_t max,
             float percent) noexcept
    : bar_front{front},
      bar_mid{mid},
      bar_end{end},
      maximum{max},
      percentage{percent},
      target{percent}
{
}

Gauge::Gauge() = default;

void Gauge::draw(const DrawArgument& args) const
{
    auto length = static_cast<std::int16_t>(percentage * maximum);
    if (length > 0) {
        bar_front.draw(args);
        bar_mid.draw(args + DrawArgument{{1, 0}, {length, 0}});
        bar_end.draw(args + DrawArgument{length + 1, 0});
    }
}

void Gauge::update(float t)
{
    if (target != t) {
        target = t;
        step = (target - percentage) / 24.0f;
    }

    if (percentage != target) {
        percentage += step;
        if (step < 0.0f) {
            if (target - percentage >= step) {
                percentage = target;
            }
        } else if (step > 0.0f) {
            if (target - percentage <= step) {
                percentage = target;
            }
        }
    }
}
} // namespace jrc
