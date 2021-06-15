#pragma once

#include "config.h"
#include "action.h"
#include "action_layer.h"
#include "debug.h"
#include "unimap.h"

#include <stddef.h>
#include <stdlib.h>

#define DYN_REC_START1 UNIMAP_F20
#define DYN_REC_START2 UNIMAP_F21
#define DYN_REC_STOP UNIMAP_F24
#define DYN_MACRO_PLAY1 UNIMAP_F22
#define DYN_MACRO_PLAY2 UNIMAP_F23

#define layer_state_t uint32_t

void process_record(keyrecord_t *record);
