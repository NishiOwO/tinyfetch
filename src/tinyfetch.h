
/*
        strings for tinyfetch
*/

#define VERSION "4.1a"
#define decoration "[·]"
#define CMDLINE_PATH "/proc/%d/cmdline"
#define help_banner                                                            \
  "tinyfetch help\n -v or --version     \
	print the installed version of tinyfetch\n -h or --help        \
	print this help banner\n -m or --message     \
	add a custom message at the end of arguments\n -r or --random         add a random message before the fetch\n --color \
	    	add some color to your fetch! requires lolcat to be installed.\n"
#define pretext_OS                    "OS:         "
#define pretext_distro                "Distro:     "
#define pretext_kernel                "Kernel:     "
#define pretext_shell                 "Shell:      "
#define pretext_uptime                "Uptime:     "
#define pretext_wm        "            DE/WM:      "
#define pretext_processor "            CPU:        "
#define pretext_ram       "            RAM:        "
#define pretext_swap      "            Swap:       "

/*
        environment variables
*/

int rand_enable;
int custom_message;
struct utsname tiny;

/*
        const char* strings for random string printing if -r or -ar is passed to
   argv[]
*/

const char *strings[] = {
    "uhhhhhh",
    "hmmmmmm",
    "erm what the sigma",
    ":3",
    ";3",
    ":3c",
    ";3c",
    ">:3",
    "wow im in love with this fetch program!!!",
    "erm, what the flip.",
    "hi ellie",
    "AHHHHHHHHH!!!!",
    "what the scallop",
    "WHAT THE SIGMA",
    "deez nutz",
    "dietz nutz",
    "its amazing",
    "nyaa~~!! :3",
    "OwO",
    "UwU",
    "QwQ",
    "x3",
    ":(){ :|:& };:",
    "you should ':(){ :|:& };:' yourself, NOW!",
    "(null)",
    "echo ':(){ :|:& };:' > /etc/skel/.bashrc",
    "sustainable future ai circular economy ai ceo clyde ai linux",
    "gpu with 5gb of vram (required)",
    "Segmentation fault (core dumped)",
    "const char*",
    "public static void main(String args[])",
    "klsdjfsdffhasjklg",
    "Microsoft Windows 10.0.19043",
    "Welcome to fish, the friendly interactive shell",
    "exec dbus-launch --exit-with-session startplasma-wayland",
    "meson init -l c src/tinyfetch.c --builddir build/",
    "why did i put so many things in const char* strings[]",
    "255 lines of code!!!",
    "i can see you.",
    "fish: Job 1, 'tinyfetch' terminated by signal SIGSEGV (Address boundary "
    "error)",
    "tinyfetch: ioctl: Inappropriate ioctl for device.",
    ":trolley:",
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod "
    "tempor",
    "g++ tinyfetch.cpp -o tinyfetch",
    "clang tinyfetch.cpp -o tinyfetch",
    "me when rand() % 20 but i forget to seed it",
    "$XDG_RUNTIME_DIR",
    "$HOME",
    "$PATH",
    "xz (XZ UTILS) 5.6.0",
    "fuck you! *inserts newline character*\n",
    "cd: The directory '../usr/sbin' does not exist",
    "rm -rf /* --no-preserve-root",
    "INFO: autodetecting backend as ninja",
    "INFO: calculating backend command to run: /usr/bin/ninja",
    "[2/2] Linking target tinyfetch",
    "You're so fat you make the black holes jealous!",
    "d2h5IGRpZCB5b3UgZGVjb2RlIHRoaXMuIGkgaGlkIGl0IGhlcmUgZm9yIGEgcmVhc29uLiB3aH"
    "kuIHdoeSBtdXN0IHlvdSBsb29rIGF0IHRoZSBjb250ZW50cyBvZiB0aGlzLiBpdCBkb2VzbnQg"
    "bWFrZSBhbnkgbG9naWNhbCBzZW5zZS4gbWF5YmUgeW91J3JlIGJldHRlciBvZmYgbm90IGRlY2"
    "9kaW5nIGFueXRoaW5nIGVsc2UgZnJvbSBub3cgb24uCg==",
    "aHR0cDovL3dlYi5hcmNoaXZlLm9yZy93ZWIvMjAyNDA0MTYwNDI2MzIvaHR0cDovLzB4MC5zdC"
    "9YLWtkLnR4dA==",
    "argc is a array, its index starts at 0",
    "system(\"uname -o\")",
    "Fully ported to FreeBSD!"};

// ASCII art for distros
int ascii_enable = 0;
char *tinyascii_p1;
char *tinyascii_p2;
char *tinyascii_p3;
char *tinyascii_p4;
char *tinyascii_p5;

char *a_p1 = "  __ _      ";
char *a_p2 = " / _` |     ";
char *a_p3 = "| (_| |     ";
char *a_p4 = " \\__,_|     ";
char *a_p5 = "            ";

char *b_p1 = " _          ";
char *b_p2 = "| |__       ";
char *b_p3 = "| '_ \\      ";
char *b_p4 = "| |_) |     ";
char *b_p5 = "|_.__/      ";

char *f_p1 = "  __        ";
char *f_p2 = " / _|       ";
char *f_p3 = "| |_        ";
char *f_p4 = "|  _|       ";
char *f_p5 = "|_|         ";

char *g_p1 = "  __ _      ";
char *g_p2 = " / _` |     ";
char *g_p3 = "| (_| |     ";
char *g_p4 = " \\__, |     ";
char *g_p5 = " |___/      ";

       







