//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",    "cpu.sh",           1,      1},
	{"",    "temperature.sh",   1,      1},
	{"",    "memory.sh",        5,      1},
	{"",    "clock.sh",         60,     1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
