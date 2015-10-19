/////////////////////////////////////////////////////////////////////////////
// This file is part of the Journey MMORPG client                           //
// Copyright � 2015 SYJourney                                               //
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
#pragma once

namespace Constants
{
	enum Equipstat
	{
		ES_STR,
		ES_DEX,
		ES_INT,
		ES_LUK,
		ES_HP,
		ES_MP,
		ES_WATK,
		ES_MAGIC,
		ES_WDEF,
		ES_MDEF,
		ES_ACC,
		ES_AVOID,
		ES_HANDS,
		ES_SPEED,
		ES_JUMP
	};

	enum Equipslot
	{
		EQL_NONE = 0,
		EQL_CAP = 1,
		EQL_FACEACC = 2,
		EQL_EYEACC = 3,
		EQL_EARRINGS = 4,
		EQL_TOP = 5,
		EQL_PANTS = 6,
		EQL_SHOES = 7,
		EQL_GLOVES = 8,
		EQL_CAPE = 9,
		EQL_SHIELD = 10,
		EQL_WEAPON = 11,
		EQL_RING = 12,
		EQL_RING2 = 13,
		EQL_RING3 = 15,
		EQL_RING4 = 16,
		EQL_PENDANT = 17,
		EQL_TAMEDMOB = 18,
		EQL_SADDLE = 19,
		EQL_MEDAL = 49,
		EQL_BELT = 50
	};
}