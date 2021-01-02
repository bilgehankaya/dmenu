/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] = { "JetBrainsMono:size=13:style=Medium",
	"JoyPixels:pixelsize=13:antialias=true:autohint=true",
	"FontAwesome5Free:pixelsize=13:antialias=true:autohint=true",
	"FontAwesome5Brands:pixelsize=13:antialias=true:autohint=true",
	"JoyPixels:pixelsize=13:antialias=true:autohint=true",
	"Font Awesome 5 Free:style=Solid:pixelsize=13:antialias=true:autohint=true"
};

static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	/* [SchemeNorm] = { "#bbbbbb", "#222222" }, */
	[SchemeNorm] = { "#eeeeee", "#000000" },
	/* [SchemeSel] = { "#eeeeee", "#005577" }, */
	[SchemeSel] = { "#eeeeee", "#da1657" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
