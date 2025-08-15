/* Modify these files to change what blocks to show */
static const Block blocks[] = {
    /* Icon    Command                         Update Interval  Update Signal */
    {"",       "/home/hz/heh/dwmblocks/dwmvol",      1,            0},
    {"",       "/home/hz/heh/dwmblocks/dwmtemp",     1,            0},
    {"",       "/home/hz/heh/dwmblocks/dwmmemory",   1,            0},
    {"",       "/home/hz/heh/dwmblocks/dwmcpu",      1,            0},
    {"",       "/home/hz/heh/dwmblocks/dwmclock",    1,           0}
};

/* Sets delimiter between status commands */
static char delim[] = "";
static unsigned int delimLen = 3;  // Must match actual delimiter length

/* Optional features */
static int enableClickableBlocks = 0;  // Set to 1 to enable click events
static const char *termcmd[] = {"st", NULL};  // Terminal for click commands


