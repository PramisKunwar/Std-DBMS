#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

// No color codes - clean plain text output
#define RESET   ""
#define RED     ""
#define GREEN   ""
#define YELLOW  ""
#define BLUE    ""
#define MAGENTA ""
#define CYAN    ""
#define BOLD    ""
#define UNDERLINE ""

#ifdef _WIN32
    #include <windows.h>
    #define SLEEP(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define SLEEP(ms) usleep((ms) * 1000)
#endif

static inline void printBanner() {
    printf("\n");
    printf("  ===================================================\n");
    printf("       MENU-DRIVEN TASK MANAGER  v2.0\n");
    printf("  ===================================================\n\n");
}

static inline void printProgressBar(int current, int total, const char* label) {
    int barWidth = 40;
    float progress = (float)current / total;
    int pos = (int)(barWidth * progress);
    printf("\r%s [", label);
    for(int i = 0; i < barWidth; i++) {
        if(i < pos) printf("=");
        else if(i == pos && current < total) printf(">");
        else printf(" ");
    }
    printf("] %3d%%", (int)(progress * 100));
    fflush(stdout);
}

static inline void printSeparator(char symbol, int length) {
    for(int i = 0; i < length; i++) printf("%c", symbol);
    printf("\n");
}

static inline void printSuccess(const char* message) { printf("[OK]   %s\n", message); }
static inline void printError(const char* message)   { printf("[ERR]  %s\n", message); }
static inline void printInfo(const char* message)    { printf("[INFO] %s\n", message); }
static inline void printWarning(const char* message) { printf("[WARN] %s\n", message); }

#endif
