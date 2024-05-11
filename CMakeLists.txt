### So loud CMakeLists.txt
cmake_minimum_required(VERSION 3.5)
project(SoLoud)
set(CMAKE_CXX_STANDARD 17)

# Add the SoLoud source files
# file(GLOB_RECURSE SOURCES 
#     "src/backend/miniaudio/*.cpp"
#     "src/core/*.cpp"
#     "src/c_api/*.cpp"
#     "src/audiosource/*.cpp" 
#     "src/filter/*.cpp"
# )
set(SOURCES
    src/backend/miniaudio/soloud_miniaudio.cpp
    src/backend/miniaudio/miniaudio.h
    
    src/core/soloud.cpp
    src/core/soloud_audiosource.cpp
    src/core/soloud_bus.cpp
    src/core/soloud_core_3d.cpp
    src/core/soloud_core_basicops.cpp
    src/core/soloud_core_faderops.cpp
    src/core/soloud_core_filterops.cpp
    src/core/soloud_core_getters.cpp
    src/core/soloud_core_setters.cpp
    src/core/soloud_core_voicegroup.cpp
    src/core/soloud_core_voiceops.cpp

    src/core/soloud_fader.cpp
    src/core/soloud_fft_lut.cpp
    src/core/soloud_fft.cpp
    src/core/soloud_file.cpp
    src/core/soloud_filter.cpp
    src/core/soloud_misc.cpp
    src/core/soloud_queue.cpp
    src/core/soloud_thread.cpp

    src/c_api/soloud_c.cpp

    src/audiosource/ay/chipplayer.cpp
    src/audiosource/ay/chipplayer.h 
    src/audiosource/ay/sndbuffer.cpp
    src/audiosource/ay/sndbuffer.h
    src/audiosource/ay/sndchip.cpp
    src/audiosource/ay/sndchip.h
    src/audiosource/ay/sndrender.cpp
    src/audiosource/ay/sndrender.h
    src/audiosource/ay/soloud_ay.cpp

    src/audiosource/monotone/soloud_monotone.cpp

    src/audiosource/noise/soloud_noise.cpp

    src/audiosource/openmpt/soloud_openmpt_dll.c
    src/audiosource/openmpt/soloud_openmpt.cpp

    src/audiosource/sfxr/soloud_sfxr.cpp

    src/audiosource/speech/darray.cpp
    src/audiosource/speech/darray.h
    src/audiosource/speech/klatt.cpp
    src/audiosource/speech/klatt.h
    src/audiosource/speech/resonator.cpp
    src/audiosource/speech/resonator.h
    src/audiosource/speech/soloud_speech.cpp   
    src/audiosource/speech/tts.cpp 
    src/audiosource/speech/tts.h  

    src/audiosource/tedsid/sid.cpp
    src/audiosource/tedsid/sid.h
    src/audiosource/tedsid/soloud_tedsid.cpp
    src/audiosource/tedsid/ted.cpp
    src/audiosource/tedsid/ted.h

    src/audiosource/vic/soloud_vic.cpp

    src/audiosource/vizsn/soloud_vizsn.cpp

    src/audiosource/wav/dr_flac.h
    src/audiosource/wav/dr_impl.cpp
    src/audiosource/wav/dr_mp3.h
    src/audiosource/wav/dr_wav.h
    src/audiosource/wav/soloud_wav.cpp
    src/audiosource/wav/soloud_wavstream.cpp
    src/audiosource/wav/stb_vorbis.c
    src/audiosource/wav/stb_vorbis.h

    src/filter/soloud_bassboostfilter.cpp
    src/filter/soloud_biquadresonantfilter.cpp
    src/filter/soloud_dcremovalfilter.cpp
    src/filter/soloud_duckfilter.cpp
    src/filter/soloud_echofilter.cpp
    src/filter/soloud_eqfilter.cpp
    src/filter/soloud_fftfilter.cpp
    src/filter/soloud_flangerfilter.cpp
    src/filter/soloud_freeverbfilter.cpp
    src/filter/soloud_lofifilter.cpp
    src/filter/soloud_robotizefilter.cpp
    src/filter/soloud_waveshaperfilter.cpp

)

# Create the SoLoud library
add_library(SoLoud ${SOURCES})
target_include_directories(SoLoud PRIVATE "include")

# Add the miniaudio backend
target_compile_definitions(SoLoud PUBLIC "WITH_MINIAUDIO")

# Add the portaudio backend
# add_subdirectory(vendor/portaudio)
# target_link_libraries(SoLoud PRIVATE PortAudio)
# target_include_directories(SoLoud PRIVATE "vendor/portaudio/include")
# target_compile_definitions(SoLoud PUBLIC "WITH_PORTAUDIO")

# Add the SDL3 backend
# add_subdirectory(vendor/SDL)
# find_package(SDL3 REQUIRED)
# target_link_libraries(SoLoud PRIVATE SDL3::SDL3)
# target_compile_definitions(SoLoud PUBLIC "WITH_SDL2")

# SoLoud tests
add_executable(SoLoudTest tests/SoLoudTest.cpp)
target_link_libraries(SoLoudTest SoLoud)
target_include_directories(SoLoudTest PRIVATE "include")
