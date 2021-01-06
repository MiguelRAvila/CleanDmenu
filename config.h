//    ___ _               ___
//   / __| |___ __ _ _ _ |   \ _ __  ___ _ _ _  _
//  | (__| / -_) _` | ' \| |) | '  \/ -_) ' \ || |
//   \___|_\___\__,_|_||_|___/|_|_|_\___|_||_\_,_|

static int topbar = 1;
static int centered = 1;
static int min_width = 800;
static const char *fonts[] = {
	"Inter:size=10",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = {"#e2e2e3", "#201E21"},
	[SchemeSel] = {"#201E21", "#9ed072"},
	[SchemeSelHighlight] = {"#201E21", "#9ed072"},
	[SchemeNormHighlight] = {"#e2e2e3", "#201E21"},
	[SchemeOut] = {"#201E21", "#9ed072"},
	[SchemeMid] = {"#e2e2e3", "#201E21"},
};

static unsigned int lines = 0;
static unsigned int lineheight = 18;

static const char worddelimiters[] = " ";

static unsigned int border_width = 0; /* -bw option; to add border width */