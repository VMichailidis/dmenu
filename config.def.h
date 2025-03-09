/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"roboto:bold:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
			/*  fg         bg       */
//	[SchemeNorm] = { "#915867", "#172832" },
//	[SchemeSel] = { "#172832", "#915867" },
	[SchemeNorm] = { "#adebfa", "#310f16" },
	[SchemeSel] = { "#310f16", "#adebfa" },
	[SchemeOut] = { "#000000", "#adebfa" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


/* Size of the window border */
static unsigned int border_width = 5;
