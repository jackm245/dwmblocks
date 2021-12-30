//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30, 0},
    {"Cpu: ", "top -bn 1 | awk '/^%Cpu/ {print int($2 + $4 + $6)\"%\"}'", 30, 0},
    {"Bat: ", "cat /sys/class/power_supply/BAT0/capacity", 60, 0},
	{"", "date '+%a, %b %d, %R'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
