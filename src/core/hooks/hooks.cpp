#include "../../includes.hpp"

bool hooks::init() {
    log::log("initialising hooks...");

    log::log("initialised hooks...");
    return true;
}

bool hooks::unload() {
    log::log("unloading hooks...");

    log::log("unloaded hooks!");
    return true;
}