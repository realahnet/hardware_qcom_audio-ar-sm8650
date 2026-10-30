/*
 * SPDX-FileCopyrightText: 2026 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <cstdint>
#include <system/audio.h>

namespace lvacfs {

enum class Scene {
    DEFAULT,
    INTERVIEW,
    CONFERENCE,
    APP1,
};

struct Capture {
    audio_source_t source;
    audio_devices_t device;
    uint32_t sample_rate;
    uint32_t channels;
    Scene scene;
    int effect_type = -1;
};

}  // namespace lvacfs
