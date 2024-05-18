#ifndef SOLOUD_CORE_H
#define SOLOUD_CORE_H

#include "soloud.h"
#include "soloud_misc.h"
#include "soloud_filter.h"
#include "soloud_bus.h"
#include "soloud_audiosource.h"
#include "soloud_error.h"
#include "soloud_fader.h"
#include "soloud_queue.h"
#include "soloud_thread.h"
#include "soloud_file.h"
#include "soloud_file_hack_off.h"
#include "soloud_file_hack_on.h"

// // For testing
// #define AR_SOLOUD_INCLUDE_ALL

#if defined(AR_SOLOUD_INCLUDE_AUDIOSOURCES) || defined(AR_SOLOUD_INCLUDE_ALL)
#include "soloud_wav.h"
#include "soloud_wavstream.h"
#include "soloud_speech.h"
#include "soloud_sfxr.h"
#include "soloud_monotone.h"
#include "soloud_tedsid.h"
#include "soloud_noise.h"
#endif

#if defined(AR_SOLOUD_INCLUDE_EFFECTS) || defined(AR_SOLOUD_INCLUDE_ALL)
#include "soloud_echofilter.h"
#include "soloud_biquadresonantfilter.h"
#include "soloud_lofifilter.h"
#include "soloud_flangerfilter.h"
#include "soloud_dcremovalfilter.h"
#include "soloud_bassboostfilter.h"
#include "soloud_robotizefilter.h"
#include "soloud_freeverbfilter.h"
#include "soloud_waveshaperfilter.h"
#endif // ARE_SOLOUD_INCLUDE_EFFECTS


#endif // SOLOUD_CORE_H