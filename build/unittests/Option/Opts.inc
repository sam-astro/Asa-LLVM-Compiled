/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// String table

#ifdef OPTTABLE_STR_TABLE_CODE

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char OptionStrTableStorage[] = 
  "\0"
  "-\0"
  "--\0"
  "/\0"
  "my group\0"
  "<input>\0"
  "<unknown>\0"
  "-AB\0"
  "-A\0"
  "--blarn\0"
  "-blorp\0"
  "--blurmp=\0"
  "--blurmp\0"
  "-B\0"
  "-C=\0"
  "/cramb:\0"
  "-C\0"
  "/C\0"
  "-doopf1\0"
  "-doopf2\0"
  "-D\0"
  "--ermgh\0"
  "-E\0"
  "--fjormp\0"
  "-F\0"
  "--glorrmp=\0"
  "-G\0"
  "-H\0"
  "-I\0"
  "-Joo\0"
  "-J\0"
  "-K\0"
  "-marshalled-flag-a\0"
  "-marshalled-flag-b\0"
  "-marshalled-flag-c\0"
  "-marshalled-flag-d\0"
  "-multiline-help-with-long-name\0"
  "-multiline-help\0"
  "-Q\0"
  "-R\0"
  "-slurpjoined\0"
  "-slurp\0"
  "-xyzzy1\0"
  "-xyzzy2\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
OptionStrTable = OptionStrTableStorage;
#endif // OPTTABLE_STR_TABLE_CODE

/////////
// Prefixes

#ifdef OPTTABLE_PREFIXES_TABLE_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesTable[] = {
  0 /* prefixes */,
  1 /* prefixes */, 1 /* '-' */,
  2 /* prefixes */, 1 /* '-' */, 3 /* '--' */,
  1 /* prefixes */, 3 /* '--' */,
  2 /* prefixes */, 3 /* '--' */, 1 /* '-' */,
  1 /* prefixes */, 6 /* '/' */,
  2 /* prefixes */, 6 /* '/' */, 1 /* '-' */
};
#endif // OPTTABLE_PREFIXES_TABLE_CODE

/////////
// Prefix Union

#ifdef OPTTABLE_PREFIXES_UNION_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesUnion[] = {
  1 /* '-' */,   3 /* '--' */,   6 /* '/' */
};
#endif // OPTTABLE_PREFIXES_UNION_CODE

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION
OPTION(0 /* no prefixes */, 8 /* my group */, my_group, Group, INVALID, INVALID, nullptr, 0, 0, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)

//////////
// Options

OPTION(0, 17 /* <input> */, INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(0, 25 /* <unknown> */, UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 35 /* -AB */, AB, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 39 /* -A */, A, Flag, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The A option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(8, 42 /* --blarn */, Blarn, Flag, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The blarn option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(3, 50 /* -blorp */, Blorp, Flag, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The blorp option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 57 /* --blurmp= */, Blurmpq_eq, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 67 /* --blurmp */, Blurmpq, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 76 /* -B */, B, Joined, INVALID, INVALID, nullptr, OptFlag2, DefaultVis, 0,
       "The B option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "B", nullptr)
OPTION(3, 79 /* -C= */, Ceq, Joined, INVALID, C, nullptr, OptFlag1, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(11, 83 /* /cramb: */, Cramb, Joined, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The cramb option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "CRAMB", nullptr)
OPTION(1, 91 /* -C */, C, Separate, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The C option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "C", nullptr)
OPTION(13, 94 /* /C */, SLASH_C, Separate, INVALID, INVALID, nullptr, OptFlag3, DefaultVis, 0,
       "The C option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "C", nullptr)
OPTION(1, 97 /* -doopf1 */, Doopf1, Flag, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The doopf1 option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 105 /* -doopf2 */, Doopf2, Flag, INVALID, INVALID, nullptr, OptFlag2, DefaultVis, 0,
       "The doopf2 option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 113 /* -D */, D, CommaJoined, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "The D option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "D", nullptr)
OPTION(6, 116 /* --ermgh */, Ermgh, Joined, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The ermgh option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "ERMGH", nullptr)
OPTION(1, 124 /* -E */, E, MultiArg, INVALID, INVALID, nullptr, OptFlag1 | OptFlag2, DefaultVis, 2, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(6, 127 /* --fjormp */, Fjormp, Flag, INVALID, INVALID, nullptr, OptFlag1, DefaultVis, 0,
       "The fjormp option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 136 /* -F */, F, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "The F option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "F", nullptr)
OPTION(6, 139 /* --glorrmp= */, Glorrmp_eq, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 150 /* -G */, G, JoinedAndSeparate, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "The G option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "G", nullptr)
OPTION(1, 153 /* -H */, H, Flag, INVALID, INVALID, nullptr, HelpHidden, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 156 /* -I */, I, Flag, my_group, H, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 159 /* -Joo */, Joo, Flag, INVALID, B, "bar\0", 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 164 /* -J */, J, Flag, INVALID, B, "foo\0", 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 167 /* -K */, K, Flag, INVALID, B, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 170 /* -marshalled-flag-a */, marshalled_flag_a, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 189 /* -marshalled-flag-b */, marshalled_flag_b, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 208 /* -marshalled-flag-c */, marshalled_flag_c, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 227 /* -marshalled-flag-d */, marshalled_flag_d, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 246 /* -multiline-help-with-long-name */, multiline_help_long, Flag, INVALID, INVALID, nullptr, 0, MultiLineVis, 0,
       "This a help text that has\nmultiple lines in it\nand a long name", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 277 /* -multiline-help */, multiline_help, Flag, INVALID, INVALID, nullptr, 0, MultiLineVis, 0,
       "This a help text that has\nmultiple lines in it", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 293 /* -Q */, Q, Flag, INVALID, INVALID, nullptr, 0, SubtoolVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 296 /* -R */, R, Flag, INVALID, INVALID, nullptr, 0, DefaultVis | SubtoolVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 299 /* -slurpjoined */, SlurpJoined, RemainingArgsJoined, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 312 /* -slurp */, Slurp, RemainingArgs, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 319 /* -xyzzy1 */, Xyzzy1, Flag, INVALID, INVALID, nullptr, 0, SubtoolVis, 0,
       "The xyzzy1 option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
OPTION(1, 327 /* -xyzzy2 */, Xyzzy2, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0,
       "The xyzzy2 option", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr)
#endif // OPTION
#ifdef OPTION_WITH_MARSHALLING
OPTION_WITH_MARSHALLING(1, 227 /* -marshalled-flag-d */, marshalled_flag_d, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, true, 0, X->MarshalledFlagD, false, false, false, normalizeSimpleFlag, denormalizeSimpleFlag, mergeForwardValue, extractForwardValue, -1)
#endif // OPTION_WITH_MARSHALLING
#ifdef OPTION_WITH_MARSHALLING
OPTION_WITH_MARSHALLING(1, 208 /* -marshalled-flag-c */, marshalled_flag_c, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, true, 0, X->MarshalledFlagC, false, false || X->MarshalledFlagD, true, normalizeSimpleFlag, denormalizeSimpleFlag, mergeForwardValue, extractForwardValue, -1)
#endif // OPTION_WITH_MARSHALLING
#ifdef OPTION_WITH_MARSHALLING
OPTION_WITH_MARSHALLING(1, 189 /* -marshalled-flag-b */, marshalled_flag_b, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, true, 0, X->MarshalledFlagB, false, false || X->MarshalledFlagD, true, normalizeSimpleFlag, denormalizeSimpleFlag, mergeForwardValue, extractForwardValue, -1)
#endif // OPTION_WITH_MARSHALLING
#ifdef OPTION_WITH_MARSHALLING
OPTION_WITH_MARSHALLING(1, 170 /* -marshalled-flag-a */, marshalled_flag_a, Flag, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, true, 0, X->MarshalledFlagA, false, false || X->MarshalledFlagC || X->MarshalledFlagB, true, normalizeSimpleFlag, denormalizeSimpleFlag, mergeForwardValue, extractForwardValue, -1)
#endif // OPTION_WITH_MARSHALLING

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE


