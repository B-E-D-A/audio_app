#include <fwd.hpp>

using namespace audio_app;

[[maybe_unused]] void track::edit_track(track &track_) {
    std::cout << "enter a new name for the track " << track_.track_name
              << ":\n";
    std::string new_track_name;
    std::cin >> new_track_name;
    track_.track_name = new_track_name;
}

[[maybe_unused]] void track::play_track(const track &track_) {
    // play track
}

[[maybe_unused]] void track::stop_track(const track &track_) {
    // pause track
}
