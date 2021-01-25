static const char *tags[] = { "1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ?" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */

	/* Terminal (WS1) */

	/* Browsers (WS2) */
	{ "Firefox",         NULL,       NULL,       1 << 1,       0,           -1 },

	/* Messengers (WS3) */
	{ "Element",         NULL,       NULL,       1 << 2,       0,           -1 },

	/* Mail (WS4) */
	{ "Thunderbird",     NULL,       NULL,       1 << 3,       0,           -1 },

	/* Editors (WS5) */

	/* Media (WS6) */
	{ "mpv",             NULL,       NULL,       1 << 5,       0,           -1 },
	{ "Zathura",         NULL,       NULL,       1 << 5,       0,           -1 },

	/* Games (WS7) */
	{ "dolphin-emu",     NULL,       NULL,       1 << 6,       0,           -1 },
	{ "Steam",           NULL,       NULL,       1 << 6,       0,           -1 },

	/* VMs (WS8) */
	{ "virt-manager",    NULL,       NULL,       1 << 7,       0,           -1 },

	/* Miscellaneous */
	{ "KeePassXC",       NULL,       NULL,       1 << 8,       0,           -1 },
};
