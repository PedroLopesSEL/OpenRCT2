/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor InvertedHairpinCoasterRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_ROLLERCOASTER),
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_LIFT_HILL) | (1ULL << TRACK_LIFT_HILL_STEEP) | (1ULL << TRACK_SLOPE) | (1ULL << TRACK_SLOPE_STEEP) | (1ULL << TRACK_SLOPE_LONG) | (1ULL << TRACK_SLOPE_CURVE) | (1ULL << TRACK_CURVE_VERY_SMALL) | (1ULL << TRACK_CURVE_SMALL) | (1ULL << TRACK_BRAKES) | (1ULL << TRACK_BLOCK_BRAKES)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(CoveredTrackPieces, 0),
    SET_FIELD(StartTrackPiece, TRACK_ELEM_END_STATION),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_inverted_hairpin_rc),
    SET_FIELD(Flags, RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAGS_COMMON_COASTER | RIDE_TYPE_FLAGS_COMMON_COASTER_NON_ALT | RIDE_TYPE_FLAG_PEEP_CHECK_GFORCES |
                     RIDE_TYPE_FLAG_IS_SUSPENDED),
    SET_FIELD(RideModes, (1ULL << RIDE_MODE_CONTINUOUS_CIRCUIT) | (1ULL << RIDE_MODE_CONTINUOUS_CIRCUIT_BLOCK_SECTIONED)),
    SET_FIELD(DefaultMode, RIDE_MODE_CONTINUOUS_CIRCUIT),
    SET_FIELD(OperatingSettings, { 0, 0, 0, 0, 0, 0 }),
    SET_FIELD(Naming, { STR_RIDE_NAME_INVERTED_HAIRPIN_COASTER, STR_RIDE_DESCRIPTION_INVERTED_HAIRPIN_COASTER }),
    SET_FIELD(NameConvention, { RIDE_COMPONENT_TYPE_CAR, RIDE_COMPONENT_TYPE_TRACK, RIDE_COMPONENT_TYPE_STATION }),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_SAFETY_CUT_OUT) | (1 << BREAKDOWN_RESTRAINTS_STUCK_CLOSED) | (1 << BREAKDOWN_RESTRAINTS_STUCK_OPEN) | (1 << BREAKDOWN_VEHICLE_MALFUNCTION) | (1 << BREAKDOWN_BRAKES_FAILURE)),
    SET_FIELD(Heights, { 16, 24, 24, 7, }),
    SET_FIELD(MaxMass, 4),
    SET_FIELD(LiftData, { SoundId::LiftWildMouse, 4, 6 }),
    SET_FIELD(RatingsCalculationFunction, ride_ratings_calculate_inverted_hairpin_coaster),
    SET_FIELD(RatingsMultipliers, { 50, 30, 30 }),
    SET_FIELD(UpkeepCosts, { 40, 20, 80, 9, 3, 10 }),
    SET_FIELD(BuildCosts, { 67, 4, 40, }),
    SET_FIELD(DefaultPrices, { 20, 20 }),
    SET_FIELD(DefaultMusic, MUSIC_STYLE_ROCK_STYLE_2),
    SET_FIELD(PhotoItem, SHOP_ITEM_PHOTO2),
    SET_FIELD(BonusValue, 55)
};
// clang-format on
