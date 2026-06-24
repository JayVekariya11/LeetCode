double angleClock(int hour, int minutes) {
    double hangle, mangle, diff;

    hangle = (hour) * 30.0 + minutes * 0.5;
    mangle = minutes * 6.0;

    diff = hangle - mangle;

    if (diff < 0) {
        diff = -diff;
    }

    if (diff > 180.0) {
        diff = 360.0 - diff;
    }

    return diff;    
}