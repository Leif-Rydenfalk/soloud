#include "soloud.h"
#include "soloud_speech.h"
#include "soloud_thread.h"

// Entry point
int main(int argc, char* argv [])
{
  // Define a couple of variables
    SoLoud::Soloud soloud;  // SoLoud engine core
    SoLoud::Speech speech;  // A sound source (speech, in this case)

    // Configure sound source
    //speech.setText("Hello my name is SoLoud. I am a simple sound engine. I can play speech, music and sound effects. I can also generate sound. I am easy to use and lightweight. I am written in C++ but can be used from C, C++, Rust, Go, D, Nim, and other languages. I am open source and free to use. I am SoLoud.");
    speech.setText("KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK.");
    // initialize SoLoud.
    soloud.init();

    // Play the sound source (we could do this several times if we wanted)
    soloud.play(speech);

    // Wait until sounds have finished
    while (soloud.getActiveVoiceCount() > 0)
    {
      // Still going, sleep for a bit
        SoLoud::Thread::sleep(100);
    }

    // Clean up SoLoud
    soloud.deinit();

    // All done.
    return 0;
}