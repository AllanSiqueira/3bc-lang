#include <stdio.h>
#ifndef _WIN32
#include <curses.h> 
#else
#include <conio.h> 
#endif
#include <stdio.h>
#include <signal.h>

void lang_driver_init()
{
    signal(SIGINT, lang_driver_exit);
    newterm(NULL, stderr, stdin);   /* Start curses mode */
    keypad(stdscr, TRUE);           /* We get F1, F2...  */
    cbreak();                       /* Characters buffering disabled */
    raw();                          /* Line buffering disabled */

}

void lang_driver_exit(int sig)
{
    refresh();
    exit(sig);
}