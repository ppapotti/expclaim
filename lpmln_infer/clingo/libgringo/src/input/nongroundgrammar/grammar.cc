// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   GringoNonGroundGrammar_lex

// First part of user declarations.
#line 58 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:404


#include "gringo/input/nongroundparser.hh"
#include "gringo/input/programbuilder.hh"
#include <climits> 

#define BUILDER (lexer->builder())
#define LOGGER (lexer->logger())
#define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do {                                                               \
        if (N) {                                                       \
            (Current).beginFilename = YYRHSLOC (Rhs, 1).beginFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 1).beginLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 1).beginColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, N).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, N).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, N).endColumn;     \
        }                                                              \
        else {                                                         \
            (Current).beginFilename = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).beginLine     = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).beginColumn   = YYRHSLOC (Rhs, 0).endColumn;     \
            (Current).endFilename   = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, 0).endColumn;     \
        }                                                              \
    }                                                                  \
    while (false)

using namespace Gringo;
using namespace Gringo::Input;

int GringoNonGroundGrammar_lex(void *value, Gringo::Location* loc, NonGroundParser *lexer) {
    return lexer->lex(value, *loc);
}


#line 76 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "grammar.hh"

// User implementation prologue.

#line 90 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 96 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:413


void NonGroundGrammar::parser::error(DefaultLocation const &l, std::string const &msg) {
    lexer->parseError(l, msg);
}


#line 100 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 28 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:479
namespace Gringo { namespace Input { namespace NonGroundGrammar {
#line 186 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (Gringo::Input::NonGroundParser *lexer_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, lexer));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 7:
#line 353 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->parseError(yylhs.location, "syntax error, unexpected ."); }
#line 666 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 10:
#line 359 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 672 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 11:
#line 360 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 678 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 12:
#line 361 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 684 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 13:
#line 368 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 690 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 14:
#line 369 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 696 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 15:
#line 370 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 702 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 16:
#line 371 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 708 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 17:
#line 372 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 714 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 18:
#line 373 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 720 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 19:
#line 374 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 726 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 20:
#line 375 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 732 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 21:
#line 376 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 738 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 22:
#line 377 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 744 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 23:
#line 378 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 750 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 24:
#line 379 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 756 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 25:
#line 380 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 762 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 26:
#line 381 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), false); }
#line 768 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 27:
#line 382 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.termvec), true); }
#line 774 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 28:
#line 383 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 780 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 29:
#line 384 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 786 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 30:
#line 385 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.term)); }
#line 792 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 31:
#line 386 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 798 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 32:
#line 387 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 804 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 33:
#line 388 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 810 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 34:
#line 389 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 816 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 35:
#line 390 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 822 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 36:
#line 391 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 828 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 37:
#line 397 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term));  }
#line 834 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 38:
#line 398 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term));  }
#line 840 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 39:
#line 402 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec));  }
#line 846 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 40:
#line 403 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec());  }
#line 852 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 41:
#line 409 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 858 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 42:
#line 410 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 864 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 43:
#line 411 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 870 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 44:
#line 412 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 876 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 45:
#line 413 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 882 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 46:
#line 414 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 888 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 47:
#line 415 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 894 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 48:
#line 416 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 900 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 49:
#line 417 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 906 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 50:
#line 418 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 912 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 51:
#line 419 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 918 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 52:
#line 420 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 924 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 53:
#line 421 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.pool(yylhs.location, (yystack_[1].value.termvec)); }
#line 930 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 54:
#line 422 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 936 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 55:
#line 423 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 942 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 56:
#line 424 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.termvec)); }
#line 948 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 57:
#line 425 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 954 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 58:
#line 426 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 960 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 59:
#line 427 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 966 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 60:
#line 428 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 972 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 61:
#line 429 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 978 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 62:
#line 430 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 984 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 63:
#line 431 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 990 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 64:
#line 432 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String("_")); }
#line 996 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 65:
#line 438 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1002 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 66:
#line 439 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1008 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 67:
#line 445 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1014 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 68:
#line 446 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1020 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 69:
#line 450 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1026 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 70:
#line 451 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1032 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 71:
#line 455 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), true); }
#line 1038 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 72:
#line 456 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[0].value.termvec), false); }
#line 1044 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 73:
#line 457 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 1050 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 74:
#line 458 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 1056 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 75:
#line 461 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[1].value.term)); }
#line 1062 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 76:
#line 462 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[1].value.term)); }
#line 1068 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 77:
#line 465 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1074 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 78:
#line 466 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec((yystack_[1].value.termvec), (yystack_[0].value.term)); }
#line 1080 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 79:
#line 469 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec)); }
#line 1086 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 80:
#line 470 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[2].value.termvecvec), (yystack_[0].value.termvec)); }
#line 1092 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 81:
#line 474 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1098 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 82:
#line 475 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[4].value.termvecvec), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1104 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 83:
#line 485 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1110 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 84:
#line 486 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1116 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 85:
#line 487 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1122 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 86:
#line 488 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1128 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 87:
#line 489 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1134 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 88:
#line 490 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1140 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 89:
#line 494 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1146 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 90:
#line 495 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1152 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 91:
#line 496 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1158 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 92:
#line 497 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1164 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 93:
#line 501 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1170 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 94:
#line 502 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1176 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 95:
#line 503 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1182 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 96:
#line 504 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1188 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 97:
#line 505 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1194 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 98:
#line 506 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1200 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 99:
#line 507 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::POS, (yystack_[0].value.term)); }
#line 1206 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 100:
#line 508 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOT, (yystack_[0].value.term)); }
#line 1212 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 101:
#line 509 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOTNOT, (yystack_[0].value.term)); }
#line 1218 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 102:
#line 510 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1224 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 103:
#line 511 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, neg((yystack_[1].value.rel)), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1230 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 104:
#line 512 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1236 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 105:
#line 513 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lit) = BUILDER.csplit((yystack_[0].value.csplit)); }
#line 1242 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 106:
#line 517 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term),                     (yystack_[2].value.term)); }
#line 1248 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 107:
#line 518 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[3].value.term),                     (yystack_[0].value.term)); }
#line 1254 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 108:
#line 519 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, BUILDER.term(yylhs.location, Symbol::createNum(1)), (yystack_[0].value.term)); }
#line 1260 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 109:
#line 520 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term)); }
#line 1266 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 110:
#line 524 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), true); }
#line 1272 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 111:
#line 525 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), false); }
#line 1278 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 112:
#line 526 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[0].value.cspmulterm)); }
#line 1284 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 113:
#line 530 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GT; }
#line 1290 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 114:
#line 531 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LT; }
#line 1296 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 115:
#line 532 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::GEQ; }
#line 1302 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 116:
#line 533 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::LEQ; }
#line 1308 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 117:
#line 534 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::EQ; }
#line 1314 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 118:
#line 535 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.rel) = Relation::NEQ; }
#line 1320 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 119:
#line 539 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.csplit), (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1326 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 120:
#line 540 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.cspaddterm),   (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1332 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 121:
#line 548 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(BUILDER.litvec(), (yystack_[0].value.lit)); }
#line 1338 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 122:
#line 549 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec((yystack_[2].value.litvec), (yystack_[0].value.lit)); }
#line 1344 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 123:
#line 553 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1350 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 124:
#line 554 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1356 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 125:
#line 558 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1362 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 126:
#line 559 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1368 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 127:
#line 563 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1374 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 128:
#line 564 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1380 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 129:
#line 568 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUM; }
#line 1386 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 130:
#line 569 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::SUMP; }
#line 1392 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 131:
#line 570 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MIN; }
#line 1398 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 132:
#line 571 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::MAX; }
#line 1404 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 133:
#line 572 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.fun) = AggregateFunction::COUNT; }
#line 1410 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 134:
#line 578 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { BUILDER.termvec(), (yystack_[0].value.litvec) }; }
#line 1416 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 135:
#line 579 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelem) = { (yystack_[1].value.termvec), (yystack_[0].value.litvec) }; }
#line 1422 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 136:
#line 583 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec(BUILDER.bodyaggrelemvec(), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1428 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 137:
#line 584 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec((yystack_[2].value.bodyaggrelemvec), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1434 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 138:
#line 590 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[1].value.lit), (yystack_[0].value.litvec) }; }
#line 1440 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 139:
#line 594 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1446 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 140:
#line 595 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1452 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 141:
#line 601 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec() }; }
#line 1458 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 142:
#line 602 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist) }; }
#line 1464 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 143:
#line 603 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.bodyaggrelemvec() }; }
#line 1470 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 144:
#line 604 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.bodyaggrelemvec) }; }
#line 1476 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 145:
#line 608 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, (yystack_[0].value.term) }; }
#line 1482 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 146:
#line 609 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { (yystack_[1].value.rel), (yystack_[0].value.term) }; }
#line 1488 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 147:
#line 610 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.bound) = { Relation::LEQ, TermUid(-1) }; }
#line 1494 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 148:
#line 614 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1500 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 149:
#line 615 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1506 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 150:
#line 616 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1512 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 151:
#line 617 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1518 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 152:
#line 623 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec((yystack_[5].value.headaggrelemvec), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1524 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 153:
#line 624 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec(BUILDER.headaggrelemvec(), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1530 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 154:
#line 628 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1536 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 155:
#line 629 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1542 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 156:
#line 635 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.headaggrelemvec() }; }
#line 1548 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 157:
#line 636 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.headaggrelemvec) }; }
#line 1554 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 158:
#line 637 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec()}; }
#line 1560 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 159:
#line 638 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist)}; }
#line 1566 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 160:
#line 642 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1572 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 161:
#line 643 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1578 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 162:
#line 644 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1584 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 163:
#line 645 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1590 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 164:
#line 651 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(BUILDER.cspelemvec(), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1596 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 165:
#line 652 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec((yystack_[5].value.cspelemvec), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1602 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 166:
#line 656 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = (yystack_[0].value.cspelemvec); }
#line 1608 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 167:
#line 657 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(); }
#line 1614 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 168:
#line 661 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::POS, (yystack_[1].value.cspelemvec) }; }
#line 1620 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 169:
#line 662 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOT, (yystack_[1].value.cspelemvec) }; }
#line 1626 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 170:
#line 663 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.disjoint) = { NAF::NOTNOT, (yystack_[1].value.cspelemvec) }; }
#line 1632 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 171:
#line 670 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.lbodyaggrelem) = { (yystack_[2].value.lit), (yystack_[0].value.litvec) }; }
#line 1638 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 174:
#line 682 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1644 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 175:
#line 683 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[2].value.lit), (yystack_[1].value.litvec)); }
#line 1650 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 176:
#line 684 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(); }
#line 1656 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 177:
#line 689 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[4].value.lit), BUILDER.litvec()); }
#line 1662 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 178:
#line 690 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[4].value.lit), BUILDER.litvec()); }
#line 1668 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 179:
#line 691 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)), (yystack_[6].value.lit), (yystack_[4].value.litvec)); }
#line 1674 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 180:
#line 692 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), (yystack_[0].value.litvec)); }
#line 1680 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 181:
#line 699 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1686 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 182:
#line 700 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1692 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 183:
#line 701 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1698 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 184:
#line 702 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1704 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 185:
#line 703 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1710 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 186:
#line 704 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1716 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 187:
#line 705 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1722 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 188:
#line 706 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1728 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 189:
#line 707 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1734 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 190:
#line 708 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1740 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 191:
#line 709 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1746 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 192:
#line 713 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1752 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 193:
#line 714 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1758 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 194:
#line 715 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1764 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 195:
#line 716 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1770 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 196:
#line 717 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1776 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 197:
#line 718 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1782 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 198:
#line 722 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1788 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 199:
#line 723 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1794 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 200:
#line 724 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1800 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 201:
#line 727 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.headlit((yystack_[0].value.lit)); }
#line 1806 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 202:
#line 728 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = BUILDER.disjunction(yylhs.location, (yystack_[0].value.condlitlist)); }
#line 1812 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 203:
#line 729 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.head) = lexer->headaggregate(yylhs.location, (yystack_[0].value.uid)); }
#line 1818 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 204:
#line 733 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[1].value.head)); }
#line 1824 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 205:
#line 734 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[2].value.head)); }
#line 1830 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 206:
#line 735 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, (yystack_[2].value.head), (yystack_[0].value.body)); }
#line 1836 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 207:
#line 736 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), (yystack_[0].value.body)); }
#line 1842 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 208:
#line 737 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), BUILDER.body()); }
#line 1848 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 209:
#line 743 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint((yystack_[0].value.body), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1854 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 210:
#line 744 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1860 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 211:
#line 745 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[1].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[1].location, inv((yystack_[1].value.disjoint).first), (yystack_[1].value.disjoint).second)); }
#line 1866 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 212:
#line 751 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1872 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 213:
#line 752 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1878 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 214:
#line 756 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[2].value.term), (yystack_[0].value.term)}; }
#line 1884 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 215:
#line 757 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.termpair) = {(yystack_[0].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0))}; }
#line 1890 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 216:
#line 761 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit(BUILDER.body(), (yystack_[0].value.lit)); }
#line 1896 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 217:
#line 762 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[0].value.lit)); }
#line 1902 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 218:
#line 766 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1908 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 219:
#line 767 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1914 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 220:
#line 768 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.body) = BUILDER.body(); }
#line 1920 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 221:
#line 772 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[4].value.body)); }
#line 1926 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 222:
#line 773 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), BUILDER.body()); }
#line 1932 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 223:
#line 777 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1938 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 224:
#line 778 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1944 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 225:
#line 782 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1950 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 226:
#line 783 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1956 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 231:
#line 796 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), false); }
#line 1962 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 232:
#line 797 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true), false); }
#line 1968 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 233:
#line 798 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig("", 0, false), false); }
#line 1974 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 234:
#line 799 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), false); }
#line 1980 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 235:
#line 800 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), false); }
#line 1986 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 236:
#line 801 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), true); }
#line 1992 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 237:
#line 802 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), true); }
#line 1998 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 238:
#line 803 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), true); }
#line 2004 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 239:
#line 809 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2010 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 240:
#line 810 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2016 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 241:
#line 815 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.edge(yylhs.location, (yystack_[2].value.termvecvec), (yystack_[0].value.body)); }
#line 2022 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 242:
#line 821 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.heuristic(yylhs.location, (yystack_[8].value.term), (yystack_[7].value.body), (yystack_[5].value.term), (yystack_[3].value.term), (yystack_[1].value.term)); }
#line 2028 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 243:
#line 822 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.heuristic(yylhs.location, (yystack_[6].value.term), (yystack_[5].value.body), (yystack_[3].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0)), (yystack_[1].value.term)); }
#line 2034 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 244:
#line 828 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2040 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 245:
#line 829 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2046 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 246:
#line 830 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.project(yylhs.location, (yystack_[1].value.term), (yystack_[0].value.body)); }
#line 2052 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 247:
#line 836 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    {  BUILDER.define(yylhs.location, String::fromRep((yystack_[2].value.str)), (yystack_[0].value.term), false, LOGGER); }
#line 2058 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 248:
#line 840 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.term), true, LOGGER); }
#line 2064 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 249:
#line 841 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), true, LOGGER); }
#line 2070 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 250:
#line 842 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), false, LOGGER); }
#line 2076 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 251:
#line 848 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.python(yylhs.location, String::fromRep((yystack_[1].value.str))); }
#line 2082 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 252:
#line 849 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.lua(yylhs.location, String::fromRep((yystack_[1].value.str))); }
#line 2088 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 253:
#line 855 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include(String::fromRep((yystack_[1].value.str)), yylhs.location, false, LOGGER); }
#line 2094 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 254:
#line 856 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->include(String::fromRep((yystack_[2].value.str)), yylhs.location, true, LOGGER); }
#line 2100 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 255:
#line 862 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec((yystack_[2].value.idlist), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2106 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 256:
#line 863 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(BUILDER.idvec(), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2112 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 257:
#line 867 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = BUILDER.idvec(); }
#line 2118 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 258:
#line 868 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.idlist) = (yystack_[0].value.idlist); }
#line 2124 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 259:
#line 872 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, String::fromRep((yystack_[4].value.str)), (yystack_[2].value.idlist)); }
#line 2130 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 260:
#line 873 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.block(yylhs.location, String::fromRep((yystack_[1].value.str)), BUILDER.idvec()); }
#line 2136 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 261:
#line 879 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body)); }
#line 2142 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 262:
#line 880 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[2].value.term), BUILDER.body()); }
#line 2148 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 263:
#line 881 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.external(yylhs.location, (yystack_[1].value.term), BUILDER.body()); }
#line 2154 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 264:
#line 889 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[1].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2160 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 265:
#line 890 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2166 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 266:
#line 894 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermset(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2172 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 267:
#line 895 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theoryoptermlist(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2178 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 268:
#line 896 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms()); }
#line 2184 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 269:
#line 897 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermopterm(yylhs.location, (yystack_[1].value.theoryOpterm)); }
#line 2190 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 270:
#line 898 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[2].location, (yystack_[2].value.theoryOpterm))); }
#line 2196 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 271:
#line 899 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(yystack_[3].location, (yystack_[3].value.theoryOpterm), (yystack_[1].value.theoryOpterms))); }
#line 2202 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 272:
#line 900 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermfun(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.theoryOpterms)); }
#line 2208 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 273:
#line 901 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 2214 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 274:
#line 902 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 2220 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 275:
#line 903 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 2226 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 276:
#line 904 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createInf()); }
#line 2232 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 277:
#line 905 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createSup()); }
#line 2238 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 278:
#line 906 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTerm) = BUILDER.theorytermvar(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 2244 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 279:
#line 910 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[2].value.theoryOpterm), (yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2250 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 280:
#line 911 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2256 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 281:
#line 912 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm(BUILDER.theoryops(), (yystack_[0].value.theoryTerm)); }
#line 2262 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 282:
#line 916 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms((yystack_[2].value.theoryOpterms), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2268 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 283:
#line 917 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2274 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 284:
#line 921 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = (yystack_[0].value.theoryOpterms); }
#line 2280 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 285:
#line 922 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(); }
#line 2286 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 286:
#line 926 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElem) = { (yystack_[2].value.theoryOpterms), (yystack_[0].value.litvec) }; }
#line 2292 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 287:
#line 927 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElem) = { BUILDER.theoryopterms(), (yystack_[0].value.litvec) }; }
#line 2298 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 288:
#line 931 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems((yystack_[3].value.theoryElems), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2304 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 289:
#line 932 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems(BUILDER.theoryelems(), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2310 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 290:
#line 936 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = (yystack_[0].value.theoryElems); }
#line 2316 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 291:
#line 937 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryElems) = BUILDER.theoryelems(); }
#line 2322 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 292:
#line 941 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), false); }
#line 2328 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 293:
#line 942 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 2334 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 294:
#line 945 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[0].value.term), BUILDER.theoryelems()); }
#line 2340 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 295:
#line 946 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[6].value.term), (yystack_[3].value.theoryElems)); }
#line 2346 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 296:
#line 947 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[8].value.term), (yystack_[5].value.theoryElems), String::fromRep((yystack_[2].value.str)), yystack_[1].location, (yystack_[1].value.theoryOpterm)); }
#line 2352 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 297:
#line 953 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2358 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 298:
#line 954 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[2].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2364 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 299:
#line 958 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = (yystack_[0].value.theoryOps); }
#line 2370 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 300:
#line 959 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOps) = BUILDER.theoryops(); }
#line 2376 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 301:
#line 963 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.num), TheoryOperatorType::Unary); }
#line 2382 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 302:
#line 964 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryLeft); }
#line 2388 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 303:
#line 965 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryRight); }
#line 2394 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 304:
#line 969 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(BUILDER.theoryopdefs(), (yystack_[0].value.theoryOpDef)); }
#line 2400 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 305:
#line 970 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs((yystack_[3].value.theoryOpDefs), (yystack_[0].value.theoryOpDef)); }
#line 2406 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 306:
#line 974 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = (yystack_[0].value.theoryOpDefs); }
#line 2412 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 307:
#line 975 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(); }
#line 2418 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 308:
#line 979 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2424 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 309:
#line 980 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("left"); }
#line 2430 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 310:
#line 981 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("right"); }
#line 2436 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 311:
#line 982 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("unary"); }
#line 2442 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 312:
#line 983 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("binary"); }
#line 2448 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 313:
#line 984 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("head"); }
#line 2454 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 314:
#line 985 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("body"); }
#line 2460 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 315:
#line 986 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("any"); }
#line 2466 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 316:
#line 987 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.str) = String::toRep("directive"); }
#line 2472 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 317:
#line 991 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryTermDef) = BUILDER.theorytermdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.theoryOpDefs), LOGGER); }
#line 2478 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 318:
#line 995 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Head; }
#line 2484 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 319:
#line 996 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Body; }
#line 2490 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 320:
#line 997 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Any; }
#line 2496 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 321:
#line 998 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomType) = TheoryAtomType::Directive; }
#line 2502 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 322:
#line 1003 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[14].value.str)), (yystack_[12].value.num), String::fromRep((yystack_[10].value.str)), (yystack_[0].value.theoryAtomType), (yystack_[6].value.theoryOps), String::fromRep((yystack_[2].value.str))); }
#line 2508 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 323:
#line 1004 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.num), String::fromRep((yystack_[2].value.str)), (yystack_[0].value.theoryAtomType)); }
#line 2514 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 324:
#line 1008 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryAtomDef)); }
#line 2520 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 325:
#line 1009 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryTermDef)); }
#line 2526 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 326:
#line 1010 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryAtomDef)); }
#line 2532 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 327:
#line 1011 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryTermDef)); }
#line 2538 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 328:
#line 1015 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = (yystack_[0].value.theoryDefs); }
#line 2544 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 329:
#line 1016 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(); }
#line 2550 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 330:
#line 1020 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { BUILDER.theorydef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[3].value.theoryDefs), LOGGER); }
#line 2556 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 331:
#line 1026 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Theory); }
#line 2562 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 332:
#line 1030 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Definition); }
#line 2568 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;

  case 333:
#line 1034 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:859
    { lexer->theoryLexing(TheoryLexing::Disabled); }
#line 2574 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
    break;


#line 2578 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int parser::yypact_ninf_ = -444;

  const short int parser::yytable_ninf_ = -334;

  const short int
  parser::yypact_[] =
  {
       0,  -444,   179,    78,  1063,  -444,  -444,  -444,   112,    45,
    -444,  -444,   179,   179,  1699,   179,  -444,  1699,    99,  -444,
      14,   110,  -444,   136,    24,  -444,  1204,  1511,  -444,   101,
    -444,   151,   590,   129,   146,    14,    36,  1699,  -444,  -444,
    -444,  -444,   179,  1699,   184,   179,  -444,  -444,  -444,   211,
     213,  -444,  -444,   407,  -444,    44,  1801,  -444,    71,  -444,
    1064,   459,   156,   721,  -444,   165,  -444,   262,  -444,   833,
    -444,    73,   203,   225,   208,  1699,   232,  -444,   271,  1258,
    1522,   179,   258,    59,   179,   251,  -444,   758,  -444,   179,
     291,  -444,  1318,  1950,   303,   238,  -444,  2109,   304,   268,
    1511,   275,  1559,  1578,  1699,  -444,  1633,  1699,   179,    27,
     132,   132,   179,   179,   272,    94,  -444,   135,  2109,   167,
     316,   318,  -444,  -444,  -444,   329,  -444,  -444,  1407,  1980,
    -444,  1699,  1699,  1699,  -444,   366,  1699,  -444,  -444,  -444,
    -444,  1699,  1699,  -444,  1699,  1699,  1699,  1699,  1699,   936,
     721,  1306,  -444,  -444,  -444,  -444,  1626,  1626,  -444,  -444,
    -444,  -444,  -444,  -444,  1626,  1626,  1667,  2109,  1699,  -444,
    -444,   361,  -444,   363,   179,   833,  -444,  1735,   833,  -444,
     833,  -444,  -444,   358,  1871,  -444,  -444,  1699,   369,  1699,
    1699,   833,  1699,   389,   393,  -444,   265,   379,  1699,   383,
    -444,   367,   338,  1270,   875,  1852,   142,   394,   721,   138,
      46,   161,  -444,   402,  -444,  1418,  1699,  1306,  -444,  -444,
    1306,  1699,  -444,   384,  -444,   416,  1137,   440,   287,   433,
     440,   293,  1998,  -444,  -444,  2027,   237,    56,   376,   448,
    -444,  -444,   450,   439,   451,   423,  1699,  -444,   179,  1699,
    -444,  1699,  1699,   475,  1522,   480,  -444,  -444,  1980,  -444,
    1699,  -444,   273,   222,   185,  1699,  2125,   469,   469,   469,
     664,   469,   222,   648,  2109,   721,  -444,  -444,    48,  1306,
    1306,  2045,  -444,  -444,   397,   397,  -444,   511,   298,  2109,
    -444,  -444,  -444,  -444,   482,  -444,   467,  -444,  1871,    50,
    -444,   500,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   289,   953,   364,   372,  1384,  2109,  1699,  1626,
    -444,  1699,  1699,   380,  -444,  -444,   438,   502,  -444,   303,
    -444,   320,  1130,  1903,   174,  1166,   721,  1306,  -444,  -444,
    -444,  1455,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
     506,   513,  -444,   303,  2109,  -444,  -444,  1699,  1699,   523,
     509,  1699,  -444,   523,   512,  1699,  -444,  -444,  -444,  1699,
     132,  1699,   452,   514,  -444,  -444,  1699,   454,   456,   517,
     387,  -444,   533,   492,  2109,   440,   440,   282,   321,  1522,
    1699,  2109,   314,  1699,  2109,  -444,  1306,  -444,   435,   435,
    1306,  -444,  1699,   833,  -444,   375,  -444,  -444,   537,   501,
     274,   510,   504,   504,   504,   695,   504,   274,   685,  -444,
    -444,  2172,  2172,  2140,  -444,  -444,  -444,  -444,  -444,   515,
    2184,  -444,   471,   540,  -444,   521,  -444,   554,  -444,  -444,
     527,   284,   556,   430,  -444,   552,  -444,  -444,  -444,  1306,
    1903,   175,  1166,  -444,  -444,  -444,   721,  -444,  -444,  1306,
    -444,   446,  -444,   327,  -444,  -444,  2109,   389,  1306,  -444,
    -444,   440,  -444,  -444,   440,  -444,  2109,  -444,  2074,   555,
    -444,  1510,   558,   559,  -444,   319,   179,   561,   516,   528,
     542,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,   342,  -444,   343,  2109,  -444,  -444,
    1306,  1306,  -444,   190,   190,   303,   572,   535,  -444,  1871,
     833,  -444,   540,   538,   541,  -444,    40,  2172,  -444,  -444,
    2184,  2172,   303,   544,   543,  1306,   392,  -444,  1626,  -444,
    -444,  -444,  1166,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    1679,  -444,   581,   523,   523,  1699,  -444,  1699,  1699,  -444,
    -444,  -444,  -444,  -444,  -444,   545,   563,  -444,   282,  -444,
     435,   513,  -444,  -444,  1306,  -444,  -444,  -444,  2152,  -444,
     557,  -444,   471,  -444,  2172,   503,  -444,   560,   562,   284,
    -444,  1306,  -444,  -444,  2109,  2092,   403,   524,   519,   582,
    -444,  -444,   190,   303,  -444,    53,  -444,  -444,  2172,  -444,
    -444,  -444,  -444,  -444,  1699,  -444,   603,  -444,  -444,   521,
    -444,  -444,  -444,  -444,   471,  1751,   542,   618,   579,   583,
    -444,  -444,   627,   575,   519,  -444,   310,   628,  -444,  -444,
    -444,  -444,  -444,  -444,   605,   414,   565,  -444,   650,  -444,
     651,  -444,   417,   573,   615,  -444,  -444,  -444,   659,   542,
     660,   310,  -444
  };

  const unsigned short int
  parser::yydefact_[] =
  {
       0,     5,     0,     0,     0,    10,    11,    12,     0,     0,
       1,   333,     0,     0,     0,     0,   133,     0,     0,     7,
       0,     0,    96,   191,     0,    61,     0,    74,   132,     0,
     131,     0,     0,     0,     0,     0,     0,     0,   129,   130,
      62,    93,     0,     0,   191,     0,     6,    59,    64,     0,
       0,    60,    63,     0,     4,    57,   109,    99,   201,   112,
       0,   105,     0,   147,   203,     0,   202,     0,   163,     0,
       3,     0,   292,   294,    58,     0,    57,    52,     0,   108,
     167,     0,    89,     0,     0,     0,   208,     0,   207,     0,
       0,   158,     0,   109,   126,     0,    73,    67,    72,    77,
      74,     0,     0,     0,     0,   233,     0,     0,     0,    89,
       0,     0,     0,     0,     0,    57,    51,     0,    65,     0,
       0,     0,   332,   251,   252,     0,    97,    94,     0,     0,
     100,    70,     0,     0,    87,     0,     0,    85,    83,    86,
      84,     0,     0,    88,     0,     0,     0,     0,     0,     0,
     147,     0,   176,   172,   173,   176,     0,     0,   116,   114,
     113,   115,   117,   118,     0,     0,    70,   145,     0,   162,
     211,   191,   204,   191,     0,     0,    35,     0,     0,    36,
       0,    33,    34,    31,   247,     8,     9,    70,     0,    70,
      70,     0,     0,    69,     0,   166,     0,    91,    70,   191,
     263,     0,     0,     0,     0,   109,     0,     0,   147,     0,
       0,     0,   151,     0,   253,     0,     0,   124,   154,   159,
       0,    71,    75,    78,    53,     0,   215,   213,     0,     0,
     213,     0,     0,   191,   235,     0,     0,    91,     0,   191,
     198,   246,     0,     0,     0,     0,    70,   260,   257,     0,
      56,     0,     0,     0,   167,     0,    98,    95,     0,   101,
       0,    79,     0,    45,    44,     0,    41,    49,    47,    50,
      43,    48,    46,    42,   102,   147,   160,   121,   180,     0,
       0,   109,   110,   111,   120,   119,   156,     0,     0,   146,
     210,   209,   205,   206,    32,    23,     0,    24,    37,     0,
      22,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,     0,     0,     0,   106,     0,     0,
     168,    70,    70,     0,   262,   261,     0,     0,   141,   126,
     139,     0,     0,     0,     0,     0,   147,   124,   181,   192,
     182,     0,   150,   183,   193,   184,   197,   190,   196,   189,
       0,   123,   125,   126,    68,    76,   228,     0,     0,   220,
       0,     0,   227,   220,     0,     0,   191,   238,   234,     0,
       0,     0,     0,     0,   199,   200,     0,     0,     0,     0,
       0,   256,   258,     0,    66,   213,   213,   329,     0,   167,
       0,   103,    54,    70,   107,   161,     0,   176,   128,   128,
       0,   157,    70,    40,    25,     0,    26,    30,    39,     0,
      16,    15,    20,    18,    21,    14,    19,    17,    13,   293,
     276,   285,   285,     0,   277,   274,   275,   278,   265,   273,
       0,   281,   283,   333,   289,   290,   331,     0,    55,    54,
     248,   126,     0,     0,    90,     0,   239,   138,   142,     0,
       0,     0,     0,   185,   194,   186,   147,   148,   171,   124,
     143,   126,   136,     0,   254,   155,   214,   212,   219,   223,
     230,   213,   225,   229,   213,   237,    81,   241,     0,     0,
     244,     0,     0,     0,   231,    54,     0,     0,     0,     0,
       0,   315,   311,   312,   309,   310,   313,   314,   316,   308,
     331,   327,   326,   328,     0,   169,     0,   104,    80,   122,
       0,     0,   174,   177,   178,   126,     0,     0,    27,    38,
       0,    28,   284,     0,     0,   268,     0,   285,   264,   280,
       0,     0,   126,     0,     0,   124,     0,   164,     0,    92,
     240,   140,     0,   187,   195,   188,   149,   134,   135,   144,
       0,   216,   218,   220,   220,     0,   245,     0,     0,   236,
     232,   255,   259,   222,   221,     0,     0,   333,     0,   170,
     128,   127,   175,   153,     0,    29,   266,   267,     0,   269,
       0,   279,   282,   286,   333,   333,   287,     0,     0,   126,
     137,     0,   224,   226,    82,     0,     0,     0,   307,     0,
     325,   324,   179,   126,   270,     0,   272,   288,     0,   295,
     249,   250,   165,   217,     0,   243,     0,   332,   304,   306,
     332,   330,   152,   271,   333,     0,     0,     0,     0,     0,
     296,   242,     0,     0,     0,   317,   331,     0,   305,   320,
     318,   319,   321,   323,     0,     0,   300,   301,     0,   297,
     299,   332,     0,     0,     0,   302,   303,   298,     0,     0,
       0,     0,   322
  };

  const short int
  parser::yypgoto_[] =
  {
    -444,  -444,  -444,  -444,    -2,   -55,   494,   269,   498,  -444,
     -24,   -57,   577,  -444,  -444,  -128,  -444,   -41,    22,     4,
     349,  -160,   612,  -444,  -145,  -301,  -307,  -360,    33,   128,
    -444,   233,  -444,  -193,  -143,  -163,  -444,  -444,   -11,  -444,
    -444,  -210,   594,  -444,   -37,  -135,  -444,  -444,   -28,   -85,
    -444,  -205,   -86,  -444,  -332,  -444,  -444,  -444,  -444,  -444,
    -405,  -375,  -385,  -304,  -374,   102,  -444,  -444,  -444,   681,
    -444,  -444,    57,  -444,  -444,  -443,   119,    31,   127,  -444,
    -444,  -407,  -357,   -10
  };

  const short int
  parser::yydefgoto_[] =
  {
      -1,     3,     4,    54,    76,   298,   408,   409,    97,   119,
     193,   261,    99,   100,   101,   262,   236,   168,    57,   277,
      59,    60,   164,    61,   351,   352,   218,   513,   207,   462,
     463,   330,   331,   208,   169,   209,   288,    95,    63,    64,
     195,   196,    65,   211,   572,   279,    66,    87,    88,   241,
      67,   359,   227,   552,   469,   228,   231,     9,   382,   383,
     430,   431,   432,   522,   523,   434,   435,   436,    73,   212,
     650,   651,   618,   619,   620,   500,   501,   643,   502,   503,
     504,   188,   253,   437
  };

  const short int
  parser::yytable_[] =
  {
       8,    71,    55,    98,   284,   285,   278,   276,    58,   433,
      72,    74,   336,    78,   184,   149,   121,   230,    82,    85,
     280,   155,   447,   194,    55,   363,   242,   530,   533,   534,
      94,   472,   109,    82,   114,   115,   458,    62,   526,   514,
     117,   334,    83,   122,   388,   150,   465,   565,   524,   112,
     578,    55,   216,   -89,   -89,   529,   110,   111,   396,   312,
     405,   314,   315,   531,    89,   342,   198,   183,   199,   -89,
     323,   346,     1,     2,    81,   130,    98,   -89,    10,   197,
     151,   152,   201,   131,   200,    55,   238,   213,   260,    62,
      55,   206,   579,   566,   -89,   322,   113,   -89,   185,   347,
       5,   153,   406,   -91,   -91,   623,   237,     6,     7,   287,
     243,   244,   -89,    90,   130,   372,   154,    69,   380,   -91,
     295,   530,     5,   300,   153,   301,    55,   -91,    70,     6,
       7,   428,   395,   246,   537,    80,   316,   102,   275,   154,
     336,   239,   456,   291,   -91,   293,   582,   -91,   343,    55,
     259,   337,   338,   580,   548,   581,   186,   240,   547,   441,
     247,    86,   -91,   344,   335,   385,   386,   339,   107,   451,
      84,   325,   294,   183,   248,   183,   183,   530,   183,   506,
     488,   489,    62,   632,   453,   543,   348,   103,   132,   183,
     170,   345,   166,   457,   443,   340,     5,   194,   171,   454,
     544,    55,    55,     6,     7,   368,   108,   329,   573,   120,
     602,   375,   628,    55,   349,    55,   660,   390,    55,   530,
     249,   592,   593,   624,   353,   583,   130,   455,   545,   644,
     141,   142,     5,   144,   586,   250,   123,   259,   124,     6,
       7,   397,   187,   153,   146,   147,   381,   189,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   336,   154,   456,
     627,  -331,   510,   629,   442,     5,   553,   141,   142,   554,
     144,   190,     6,     7,   605,   471,   191,    55,    55,   474,
     433,   146,   612,   398,   399,   477,   490,   172,   219,   370,
     371,   220,   452,   217,   654,   173,   622,   198,   156,   157,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     202,   429,   217,   546,   221,   320,   214,   461,   321,   305,
     306,   222,   307,   -90,   -90,   392,   393,   224,   -92,   -92,
      55,   245,   194,   309,   467,    55,   508,   360,   475,   -90,
     361,   419,   393,   364,   -92,   516,   365,   -90,   401,   456,
     519,   402,   -92,   251,   259,   252,   491,   492,   493,   494,
     495,   496,   497,   498,   -90,   254,   571,   -90,     5,   -92,
     448,   505,   -92,   449,   321,     6,     7,   549,   589,   265,
     550,   174,   -90,   175,   639,   499,   290,   -92,   292,   640,
     641,   642,   567,   569,    55,   568,   321,   302,    55,   318,
     509,   183,   319,   183,   515,   313,   132,   133,   324,   542,
     176,   156,   157,    13,   177,    14,   438,   393,   322,   429,
     429,   429,   327,   532,   439,   393,   326,   518,   429,   136,
     341,   125,   444,   393,   350,   178,   126,   355,   179,   485,
     393,   356,    25,   180,   511,   512,    27,    55,   141,   142,
     358,   144,   145,   329,   615,   217,   318,    55,   362,   181,
     373,     5,   146,   147,   182,   519,    55,    37,     6,     7,
      40,   127,   551,   374,   148,    43,   158,   159,   160,   161,
     162,   163,   539,   393,   561,   587,   588,   376,   499,   647,
     648,    47,    48,     5,   655,   656,    51,    52,   377,   128,
       6,     7,    56,   303,   304,   282,   283,   379,    55,    55,
     378,   387,    77,   303,   570,    79,   389,   144,   183,   404,
     400,   403,   445,   396,    93,   429,   461,   446,   429,   429,
     106,   464,   468,    55,   470,   116,   479,   473,   482,   480,
     483,   118,   484,   486,   487,   305,   306,   520,   307,   308,
     531,   129,   307,   521,   527,   305,   306,   599,   307,   309,
     310,   167,   428,   535,   536,   538,   499,   563,   407,   309,
     310,   311,    55,   116,  -331,   609,   429,   540,   603,   564,
     556,   574,   429,   559,   560,   205,   562,   575,   576,    55,
     129,   591,   577,   585,   608,   613,    13,   584,    14,   598,
     226,   226,   232,   104,   597,   235,   429,   621,   616,   606,
     617,   610,   626,   611,   630,   105,   491,   492,   493,   494,
     495,   496,   497,   498,   499,    25,   258,   633,     5,    27,
     263,   264,   634,   635,   266,     6,     7,   636,   645,   267,
     268,   646,   269,   270,   271,   272,   273,   274,   167,    93,
      75,   132,   133,    40,   281,   281,   649,   499,    43,   637,
     652,   653,   281,   281,   657,   658,   289,   132,   133,   659,
     661,   299,   517,   165,    47,    48,     5,   223,   590,    51,
      52,   210,   541,     6,     7,    68,   607,   600,   303,   304,
     317,   638,   662,   141,   142,   601,   144,   145,   303,   304,
       0,    93,   333,     0,     0,     0,   167,   146,   147,   141,
     142,     0,   144,   258,   274,    93,     0,     0,    93,   354,
       0,     0,     0,   146,   147,     0,   134,    13,     0,    14,
     305,   306,     0,   307,   308,     0,     0,     0,     0,     0,
     305,   306,     0,   307,   309,   310,     0,   384,     0,   226,
     226,     0,   137,   138,   309,   310,    25,     0,   391,   139,
      27,   140,    12,   394,    13,     0,    14,     0,   143,     0,
      16,    17,     0,   167,     0,     0,     0,    93,    93,     0,
       0,    75,    18,     0,    40,     0,     0,    22,     0,    43,
       0,     0,     0,    25,   203,     0,     0,    27,     0,    28,
       0,    30,     0,     0,     0,    47,    48,     5,     0,     0,
      51,    52,     0,     0,     6,     7,   354,   281,    37,    38,
      39,    40,    41,     0,     0,     0,    43,     0,     0,     0,
     450,     0,     0,   274,   167,    93,     0,     0,     0,   174,
       0,   175,    47,    48,     5,     0,     0,    51,    52,     0,
     204,     6,     7,     0,     0,   466,     0,     0,     0,   226,
       0,     0,     0,   226,     0,     0,     0,   476,   176,   478,
       0,     0,   177,     0,   481,     0,     0,     0,     0,    12,
       0,    13,     0,    14,     0,     0,     0,    16,   507,     0,
       0,     0,     0,   178,    93,     0,   179,     0,    93,   125,
       0,   180,     0,     0,   126,     0,     0,     0,     0,     0,
      25,   203,     0,     0,    27,     0,    28,   181,    30,     5,
       0,     0,   182,     0,     0,     0,     6,     7,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,    40,   127,
       0,     0,    13,    43,    14,     0,     0,    93,    16,     0,
     391,     0,     0,     0,   167,     0,     0,    93,     0,    47,
      48,     5,  -333,     0,    51,    52,    93,   332,     6,     7,
       0,    25,    26,     0,     0,    27,     0,    28,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   420,   421,
     422,     0,   423,     0,     0,     0,    75,    38,    39,    40,
       0,     0,     0,     0,    43,     0,     0,     0,    93,    93,
       0,     0,     0,     0,     0,     0,   424,     0,     0,     0,
      47,    48,     5,     0,     0,    51,    52,     0,     0,     6,
       7,     0,     0,    93,     0,     0,   281,   425,     0,     5,
     507,     0,   426,   427,   428,     0,     6,     7,     0,     0,
       0,     0,     0,   594,     0,   595,   596,     0,     0,     0,
       0,     0,     0,    -2,    11,     0,     0,    12,     0,    13,
       0,    14,    93,     0,    15,    16,    17,     0,   156,   157,
       0,   158,   159,   160,   161,   162,   163,    18,    19,    93,
      20,    21,    22,     0,     0,     0,    23,    24,    25,    26,
       0,     0,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,   625,     0,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,    38,    39,    40,    41,    42,     0,
       0,    43,     0,    44,    12,     0,    13,     0,    14,     0,
     132,   133,    16,   357,     0,    45,    46,    47,    48,     5,
      49,    50,    51,    52,   255,    53,     6,     7,     0,   256,
       0,     0,     0,   136,     0,    25,   203,     0,     0,    27,
       0,    28,    13,    30,    14,     0,     0,     0,    16,     0,
       0,     0,   141,   142,     0,   144,   145,     0,     0,     0,
      37,    38,    39,    40,   257,     0,   146,   147,    43,     0,
       0,    25,   203,     0,     0,    27,     0,    28,   148,    30,
      13,     0,    14,     0,    47,    48,     5,    17,     0,    51,
      52,     0,     0,     6,     7,     0,    75,    38,    39,    40,
       0,     0,     0,    22,    43,     0,     0,     0,     0,    25,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
      47,    48,     5,     0,    91,    51,    52,     0,     0,     6,
       7,   132,   133,     0,    37,     0,     0,    40,    41,     0,
       0,     0,    43,     0,   192,     0,    13,     0,    14,     0,
       0,     0,     0,    17,   136,     0,     0,     0,    47,    48,
       5,     0,     0,    51,    52,     0,    92,     6,     7,    22,
       0,     0,     0,   141,   142,    25,   144,   145,     0,    27,
       0,     0,    13,     0,    14,     0,     0,   146,   147,    17,
     328,     0,     0,     0,    13,     0,    14,     0,     0,   148,
      37,     0,     0,    40,    41,    22,     0,     0,    43,     0,
       0,    25,     0,     0,     0,    27,     0,   126,     0,     0,
       0,     0,     0,    25,    47,    48,     5,    27,     0,    51,
      52,     0,    92,     6,     7,     0,    37,     0,     0,    40,
      41,     0,     0,     0,    43,     0,     0,     0,    37,     0,
       0,    40,   127,     0,     0,     0,    43,   303,   304,     0,
      47,    48,     5,     0,     0,    51,    52,     0,    92,     6,
       7,     0,    47,    48,     5,     0,     0,    51,    52,   440,
     215,     6,     7,    13,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    14,     0,     0,   305,
     306,   255,   307,   308,     0,     0,   256,     0,     0,     0,
       0,     0,    25,   309,   310,     0,    27,   256,     0,     0,
       0,     0,     0,    25,     0,   311,     0,    27,     0,     0,
       0,    13,     0,    14,   459,     0,     0,    37,     0,     0,
      40,   257,     0,     0,     0,    43,     0,     0,    37,     0,
       0,    40,   257,     0,     0,     0,    43,     0,     0,     0,
      25,    47,    48,     5,    27,     0,    51,    52,     0,     0,
       6,     7,    47,    48,     5,   460,     0,    51,    52,     0,
       0,     6,     7,   132,   133,    75,   557,    13,    40,    14,
     558,    96,     0,    43,     0,     0,     0,     0,    13,     0,
      14,   -70,     0,     0,     0,     0,   136,     0,     0,    47,
      48,     5,     0,     0,    51,    52,    25,     0,     6,     7,
      27,     0,     0,     0,     0,   141,   142,    25,   144,   145,
       0,    27,     0,     0,     0,    13,     0,    14,     0,   146,
     147,    75,     0,     0,    40,     0,     0,     0,     0,    43,
       0,   148,    75,     0,    13,    40,    14,     0,     0,     0,
      43,     0,     0,     0,    25,    47,    48,     5,    27,     0,
      51,    52,     0,     0,     6,     7,    47,    48,     5,   225,
       0,    51,    52,    25,     0,     6,     7,    27,     0,    75,
       0,     0,    40,     0,     0,     0,     0,    43,   229,     0,
       0,     0,    13,     0,    14,     0,   132,   133,    75,    17,
       0,    40,   233,    47,    48,     5,    43,     0,    51,    52,
       0,     0,     6,     7,     0,     0,     0,     0,   234,   136,
       0,    25,    47,    48,     5,    27,     0,    51,    52,     0,
       0,     6,     7,    13,     0,    14,     0,     0,   141,   142,
       0,   144,   145,     0,     0,    13,    75,    14,   459,    40,
       0,     0,   146,   147,    43,     0,     0,     0,     0,     0,
       0,     0,    25,     0,   148,    13,    27,    14,     0,     0,
      47,    48,     5,     0,    25,    51,    52,   286,    27,     6,
       7,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      40,     0,     0,     0,    25,    43,     0,     0,    27,    75,
       0,   174,    40,   175,     0,   296,     0,    43,     0,     0,
       0,    47,    48,     5,   132,   133,    51,    52,     0,    75,
       6,     7,    40,    47,    48,     5,     0,    43,    51,    52,
     176,     0,     6,     7,   177,     0,     0,   136,     0,     0,
       0,     0,     0,    47,    48,     5,     0,   297,    51,    52,
       0,     0,     6,     7,     0,   178,   141,   142,   179,   144,
     145,     0,   631,   180,   132,   133,   134,     0,     0,     0,
     146,   147,     0,    16,     0,     0,     0,   135,     0,   181,
       0,     5,   148,     0,   182,     0,     0,   136,     6,     7,
       0,     0,   137,   138,     0,     0,     0,    26,     0,   139,
       0,   140,    28,     0,    30,     0,   141,   142,   143,   144,
     145,     0,     0,     0,     0,   132,   133,   134,     0,     0,
     146,   147,    38,    39,    16,     0,     0,     0,   135,     0,
       0,     0,   148,     0,   303,   304,     0,     0,   136,     0,
       0,     0,     0,   137,   138,     0,     0,     0,   203,     0,
     139,     0,   140,    28,     0,    30,     0,   141,   142,   143,
     144,   145,     0,     0,     0,     0,   132,   133,   134,     0,
       0,   146,   147,    38,    39,    16,   305,   306,     0,   307,
     308,     0,     0,   148,     0,     0,     0,     0,     0,   136,
     309,   310,     0,     0,   137,   138,     0,     0,     0,   203,
       0,   139,   311,   140,    28,     0,    30,     0,   141,   142,
     143,   144,   145,   132,   133,   134,     0,     0,     0,     0,
       0,     0,   146,   147,    38,    39,   135,     0,     0,     0,
       0,     0,     0,     0,   148,     0,   136,     0,     0,     0,
       0,   137,   138,   132,   133,   134,     0,     0,   139,     0,
     140,     0,     0,     0,     0,   141,   142,   143,   144,   145,
       0,   132,   133,     0,     0,     0,   136,   366,     0,   146,
     147,   137,   138,     0,     0,     0,     0,     0,   139,     0,
     140,   148,     0,   367,   136,   141,   142,   143,   144,   145,
     132,   133,     0,     0,     0,     0,     0,   369,     0,   146,
     147,     0,     0,   141,   142,     0,   144,   145,   132,   133,
       0,   148,     0,   136,     0,     0,     0,   146,   147,     0,
       0,   135,     0,     0,     0,     0,     0,     0,     0,   148,
       0,   136,   141,   142,     0,   144,   145,   132,   133,     0,
       0,     0,     0,     0,   555,     0,   146,   147,     0,     0,
     141,   142,     0,   144,   145,   132,   133,     0,   148,     0,
     136,     0,   614,     0,   146,   147,     0,     0,     0,     0,
       0,     0,   132,   133,     0,     0,   148,     0,   136,   141,
     142,     0,   144,   145,     0,     0,     0,     0,   132,   133,
       0,     0,     0,   146,   147,   136,     0,   141,   142,     0,
     144,   145,     0,     0,     0,   148,     0,     0,     0,     0,
       0,   146,   147,     0,   141,   142,     0,   144,   145,     0,
       0,     0,     0,   148,     0,     0,     0,     0,   146,   147,
     141,   142,     0,   144,   145,   420,   421,   422,     0,   423,
     148,     0,     0,     0,   146,   147,     0,   420,   421,   422,
       0,   423,   525,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,   424,   604,     0,     0,   420,   421,   422,
       0,   423,     0,     0,     0,   424,     0,     0,     0,   420,
     421,   422,     0,   423,   425,     0,     5,     0,     0,   426,
     427,   428,     0,     6,     7,   424,   425,     0,     5,     0,
       0,   426,   427,   428,     0,     6,     7,   424,     0,     0,
       0,     0,     0,     0,     0,     0,   425,     0,     5,     0,
       0,   426,   427,   428,     0,     6,     7,     0,   425,     0,
       5,     0,     0,   426,   427,   528,     0,     6,     7
  };

  const short int
  parser::yycheck_[] =
  {
       2,    11,     4,    27,   164,   165,   151,   150,     4,   313,
      12,    13,   205,    15,    69,    56,    44,   103,    20,    21,
     155,    58,   329,    80,    26,   230,   111,   432,   435,   436,
      26,   363,    34,    35,    36,    37,   337,     4,   423,   399,
      42,   204,    20,    45,   254,    56,   353,   490,   422,    13,
      10,    53,    93,     9,    10,   430,    34,    35,    10,   187,
      10,   189,   190,    10,    40,   208,    39,    69,     9,    25,
     198,    25,    72,    73,    60,    53,   100,    33,     0,    81,
       9,    10,    84,    39,    25,    87,    59,    89,   129,    56,
      92,    87,    52,   500,    50,    39,    60,    53,    25,    53,
      86,    53,    52,     9,    10,    52,   108,    93,    94,   166,
     112,   113,    68,    89,    92,    59,    68,     5,   246,    25,
     175,   526,    86,   178,    53,   180,   128,    33,    83,    93,
      94,    91,   275,    39,   441,    36,   191,    36,   149,    68,
     333,     9,   335,   171,    50,   173,   531,    53,    10,   151,
     128,     9,    10,   527,   461,   530,    83,    25,   459,   319,
      25,    25,    68,    25,   205,   251,   252,    25,    39,   332,
      60,   199,   174,   175,    39,   177,   178,   582,   180,   389,
     385,   386,   149,   626,    10,    10,    25,    36,     3,   191,
      25,    53,    36,   336,   322,    53,    86,   254,    33,    25,
      25,   203,   204,    93,    94,   233,    60,   203,   515,    25,
     570,   239,   619,   215,    53,   217,   659,   258,   220,   624,
      53,   553,   554,   608,   220,   532,   204,    53,    53,   636,
      45,    46,    86,    48,   535,    68,    25,   215,    25,    93,
      94,   278,    39,    53,    59,    60,   248,    39,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   450,    68,   452,
     617,    36,   397,   620,   321,    86,   471,    45,    46,   474,
      48,    39,    93,    94,   578,   361,     5,   279,   280,   365,
     584,    59,   589,   279,   280,   370,     4,    25,    50,    52,
      53,    53,   333,     9,   651,    33,   603,    39,    14,    15,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
      59,   313,     9,   456,    10,    50,    25,   341,    53,    45,
      46,    53,    48,     9,    10,    52,    53,    52,     9,    10,
     332,    59,   389,    59,   358,   337,   393,    50,   366,    25,
      53,    52,    53,    50,    25,   402,    53,    33,    50,   542,
     405,    53,    33,    37,   332,    37,    74,    75,    76,    77,
      78,    79,    80,    81,    50,    36,   511,    53,    86,    50,
      50,    50,    53,    53,    53,    93,    94,    50,   538,    13,
      53,     6,    68,     8,    74,   387,    25,    68,    25,    79,
      80,    81,    50,    50,   396,    53,    53,    39,   400,    10,
     396,   403,     9,   405,   400,    36,     3,     4,    25,   450,
      35,    14,    15,     6,    39,     8,    52,    53,    39,   421,
     422,   423,    84,   433,    52,    53,    59,    52,   430,    26,
      36,    24,    52,    53,    32,    60,    29,    53,    63,    52,
      53,    25,    35,    68,     9,    10,    39,   449,    45,    46,
      10,    48,    49,   449,    51,     9,    10,   459,    25,    84,
      84,    86,    59,    60,    89,   520,   468,    60,    93,    94,
      63,    64,   468,    25,    71,    68,    17,    18,    19,    20,
      21,    22,    52,    53,   486,    93,    94,    37,   490,    75,
      76,    84,    85,    86,    77,    78,    89,    90,    59,    92,
      93,    94,     4,     3,     4,   156,   157,    84,   510,   511,
      59,    36,    14,     3,   510,    17,    36,    48,   520,    52,
       9,    39,    84,    10,    26,   527,   550,    25,   530,   531,
      32,    25,     9,   535,    25,    37,    84,    25,    84,    25,
      84,    43,    25,    10,    52,    45,    46,    10,    48,    49,
      10,    53,    48,    52,    39,    45,    46,   567,    48,    59,
      60,    63,    91,     9,    37,     9,   568,    51,    68,    59,
      60,    71,   574,    75,    53,   585,   578,    25,   574,    51,
      25,     9,   584,    25,    25,    87,    25,    52,    50,   591,
      92,    10,    51,    50,    91,   591,     6,    53,     8,    36,
     102,   103,   104,    13,    59,   107,   608,    25,    84,    52,
      91,    51,     9,    51,   624,    25,    74,    75,    76,    77,
      78,    79,    80,    81,   626,    35,   128,     9,    86,    39,
     132,   133,    53,    50,   136,    93,    94,    10,    10,   141,
     142,    36,   144,   145,   146,   147,   148,   149,   150,   151,
      60,     3,     4,    63,   156,   157,    91,   659,    68,    84,
      10,    10,   164,   165,    91,    50,   168,     3,     4,    10,
      10,   177,   403,    61,    84,    85,    86,   100,   550,    89,
      90,    87,   449,    93,    94,     4,   584,   568,     3,     4,
     192,   634,   661,    45,    46,   568,    48,    49,     3,     4,
      -1,   203,   204,    -1,    -1,    -1,   208,    59,    60,    45,
      46,    -1,    48,   215,   216,   217,    -1,    -1,   220,   221,
      -1,    -1,    -1,    59,    60,    -1,     5,     6,    -1,     8,
      45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    59,    60,    -1,   249,    -1,   251,
     252,    -1,    31,    32,    59,    60,    35,    -1,   260,    38,
      39,    40,     4,   265,     6,    -1,     8,    -1,    47,    -1,
      12,    13,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    60,    24,    -1,    63,    -1,    -1,    29,    -1,    68,
      -1,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,    -1,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    -1,    -1,    93,    94,   318,   319,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
     332,    -1,    -1,   335,   336,   337,    -1,    -1,    -1,     6,
      -1,     8,    84,    85,    86,    -1,    -1,    89,    90,    -1,
      92,    93,    94,    -1,    -1,   357,    -1,    -1,    -1,   361,
      -1,    -1,    -1,   365,    -1,    -1,    -1,   369,    35,   371,
      -1,    -1,    39,    -1,   376,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,     8,    -1,    -1,    -1,    12,   390,    -1,
      -1,    -1,    -1,    60,   396,    -1,    63,    -1,   400,    24,
      -1,    68,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    -1,    39,    -1,    41,    84,    43,    86,
      -1,    -1,    89,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    -1,     6,    68,     8,    -1,    -1,   449,    12,    -1,
     452,    -1,    -1,    -1,   456,    -1,    -1,   459,    -1,    84,
      85,    86,     9,    -1,    89,    90,   468,    92,    93,    94,
      -1,    35,    36,    -1,    -1,    39,    -1,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,   510,   511,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    -1,    -1,    93,
      94,    -1,    -1,   535,    -1,    -1,   538,    84,    -1,    86,
     542,    -1,    89,    90,    91,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,   555,    -1,   557,   558,    -1,    -1,    -1,
      -1,    -1,    -1,     0,     1,    -1,    -1,     4,    -1,     6,
      -1,     8,   574,    -1,    11,    12,    13,    -1,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    24,    25,   591,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,   614,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    -1,    70,     4,    -1,     6,    -1,     8,    -1,
       3,     4,    12,     6,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    24,    92,    93,    94,    -1,    29,
      -1,    -1,    -1,    26,    -1,    35,    36,    -1,    -1,    39,
      -1,    41,     6,    43,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    59,    60,    68,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    41,    71,    43,
       6,    -1,     8,    -1,    84,    85,    86,    13,    -1,    89,
      90,    -1,    -1,    93,    94,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    29,    68,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    -1,    50,    89,    90,    -1,    -1,    93,
      94,     3,     4,    -1,    60,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    16,    -1,     6,    -1,     8,    -1,
      -1,    -1,    -1,    13,    26,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    94,    29,
      -1,    -1,    -1,    45,    46,    35,    48,    49,    -1,    39,
      -1,    -1,     6,    -1,     8,    -1,    -1,    59,    60,    13,
      50,    -1,    -1,    -1,     6,    -1,     8,    -1,    -1,    71,
      60,    -1,    -1,    63,    64,    29,    -1,    -1,    68,    -1,
      -1,    35,    -1,    -1,    -1,    39,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    84,    85,    86,    39,    -1,    89,
      90,    -1,    92,    93,    94,    -1,    60,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    60,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,     3,     4,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    -1,    92,    93,
      94,    -1,    84,    85,    86,    -1,    -1,    89,    90,    25,
      92,    93,    94,     6,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,     8,    -1,    -1,    45,
      46,    24,    48,    49,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    59,    60,    -1,    39,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    71,    -1,    39,    -1,    -1,
      -1,     6,    -1,     8,     9,    -1,    -1,    60,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    60,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      35,    84,    85,    86,    39,    -1,    89,    90,    -1,    -1,
      93,    94,    84,    85,    86,    50,    -1,    89,    90,    -1,
      -1,    93,    94,     3,     4,    60,     6,     6,    63,     8,
      10,    10,    -1,    68,    -1,    -1,    -1,    -1,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    26,    -1,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    35,    -1,    93,    94,
      39,    -1,    -1,    -1,    -1,    45,    46,    35,    48,    49,
      -1,    39,    -1,    -1,    -1,     6,    -1,     8,    -1,    59,
      60,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,
      -1,    71,    60,    -1,     6,    63,     8,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    35,    84,    85,    86,    39,    -1,
      89,    90,    -1,    -1,    93,    94,    84,    85,    86,    50,
      -1,    89,    90,    35,    -1,    93,    94,    39,    -1,    60,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    50,    -1,
      -1,    -1,     6,    -1,     8,    -1,     3,     4,    60,    13,
      -1,    63,     9,    84,    85,    86,    68,    -1,    89,    90,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    25,    26,
      -1,    35,    84,    85,    86,    39,    -1,    89,    90,    -1,
      -1,    93,    94,     6,    -1,     8,    -1,    -1,    45,    46,
      -1,    48,    49,    -1,    -1,     6,    60,     8,     9,    63,
      -1,    -1,    59,    60,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    71,     6,    39,     8,    -1,    -1,
      84,    85,    86,    -1,    35,    89,    90,    50,    39,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    35,    68,    -1,    -1,    39,    60,
      -1,     6,    63,     8,    -1,    10,    -1,    68,    -1,    -1,
      -1,    84,    85,    86,     3,     4,    89,    90,    -1,    60,
      93,    94,    63,    84,    85,    86,    -1,    68,    89,    90,
      35,    -1,    93,    94,    39,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    -1,    52,    89,    90,
      -1,    -1,    93,    94,    -1,    60,    45,    46,    63,    48,
      49,    -1,    51,    68,     3,     4,     5,    -1,    -1,    -1,
      59,    60,    -1,    12,    -1,    -1,    -1,    16,    -1,    84,
      -1,    86,    71,    -1,    89,    -1,    -1,    26,    93,    94,
      -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    41,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      59,    60,    61,    62,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    71,    -1,     3,     4,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      38,    -1,    40,    41,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    59,    60,    61,    62,    12,    45,    46,    -1,    48,
      49,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    26,
      59,    60,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    38,    71,    40,    41,    -1,    43,    -1,    45,    46,
      47,    48,    49,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,     3,     4,     5,    -1,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,     3,     4,    -1,    -1,    -1,    26,     9,    -1,    59,
      60,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      40,    71,    -1,    25,    26,    45,    46,    47,    48,    49,
       3,     4,    -1,    -1,    -1,    -1,    -1,    10,    -1,    59,
      60,    -1,    -1,    45,    46,    -1,    48,    49,     3,     4,
      -1,    71,    -1,    26,    -1,    -1,    -1,    59,    60,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    26,    45,    46,    -1,    48,    49,     3,     4,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    59,    60,    -1,    -1,
      45,    46,    -1,    48,    49,     3,     4,    -1,    71,    -1,
      26,    -1,    10,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    71,    -1,    26,    45,
      46,    -1,    48,    49,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    59,    60,    26,    -1,    45,    46,    -1,
      48,    49,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    45,    46,    -1,    48,    49,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    59,    60,
      45,    46,    -1,    48,    49,    35,    36,    37,    -1,    39,
      71,    -1,    -1,    -1,    59,    60,    -1,    35,    36,    37,
      -1,    39,    52,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    52,    -1,    -1,    35,    36,    37,
      -1,    39,    -1,    -1,    -1,    63,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    84,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    94,    63,    84,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    94,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    94,    -1,    84,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    94
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    72,    73,    96,    97,    86,    93,    94,    99,   152,
       0,     1,     4,     6,     8,    11,    12,    13,    24,    25,
      27,    28,    29,    33,    34,    35,    36,    39,    41,    42,
      43,    44,    54,    55,    56,    57,    58,    60,    61,    62,
      63,    64,    65,    68,    70,    82,    83,    84,    85,    87,
      88,    89,    90,    92,    98,    99,   103,   113,   114,   115,
     116,   118,   123,   133,   134,   137,   141,   145,   164,     5,
      83,   178,    99,   163,    99,    60,    99,   103,    99,   103,
      36,    60,    99,   113,    60,    99,    25,   142,   143,    40,
      89,    50,    92,   103,   114,   132,    10,   103,   105,   107,
     108,   109,    36,    36,    13,    25,   103,    39,    60,    99,
     113,   113,    13,    60,    99,    99,   103,    99,   103,   104,
      25,   143,    99,    25,    25,    24,    29,    64,    92,   103,
     113,    39,     3,     4,     5,    16,    26,    31,    32,    38,
      40,    45,    46,    47,    48,    49,    59,    60,    71,   112,
     133,     9,    10,    53,    68,   139,    14,    15,    17,    18,
      19,    20,    21,    22,   117,   117,    36,   103,   112,   129,
      25,    33,    25,    33,     6,     8,    35,    39,    60,    63,
      68,    84,    89,    99,   100,    25,    83,    39,   176,    39,
      39,     5,    16,   105,   106,   135,   136,    99,    39,     9,
      25,    99,    59,    36,    92,   103,   114,   123,   128,   130,
     137,   138,   164,    99,    25,    92,   112,     9,   121,    50,
      53,    10,    53,   107,    52,    50,   103,   147,   150,    50,
     147,   151,   103,     9,    25,   103,   111,    99,    59,     9,
      25,   144,   144,    99,    99,    59,    39,    25,    39,    53,
      68,    37,    37,   177,    36,    24,    29,    64,   103,   113,
     112,   106,   110,   103,   103,    13,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   133,   129,   114,   119,   140,
     140,   103,   115,   115,   116,   116,    50,   106,   131,   103,
      25,   143,    25,   143,    99,   100,    10,    52,   100,   101,
     100,   100,    39,     3,     4,    45,    46,    48,    49,    59,
      60,    71,   110,    36,   110,   110,   100,   103,    10,     9,
      50,    53,    39,   110,    25,   143,    59,    84,    50,   114,
     126,   127,    92,   103,   130,   112,   128,     9,    10,    25,
      53,    36,   129,    10,    25,    53,    25,    53,    25,    53,
      32,   119,   120,   114,   103,    53,    25,     6,    10,   146,
      50,    53,    25,   146,    50,    53,     9,    25,   143,    10,
      52,    53,    59,    84,    25,   143,    37,    59,    59,    84,
     110,    99,   153,   154,   103,   147,   147,    36,   136,    36,
     112,   103,    52,    53,   103,   129,    10,   139,   114,   114,
       9,    50,    53,    39,    52,    10,    52,    68,   101,   102,
     100,   100,   100,   100,   100,   100,   100,   100,   100,    52,
      35,    36,    37,    39,    63,    84,    89,    90,    91,    99,
     155,   156,   157,   158,   160,   161,   162,   178,    52,    52,
      25,   116,   106,   110,    52,    84,    25,   121,    50,    53,
     103,   130,   112,    10,    25,    53,   128,   129,   120,     9,
      50,   105,   124,   125,    25,   121,   103,   105,     9,   149,
      25,   147,   149,    25,   147,   143,   103,   144,   103,    84,
      25,   103,    84,    84,    25,    52,    10,    52,   146,   146,
       4,    74,    75,    76,    77,    78,    79,    80,    81,    99,
     170,   171,   173,   174,   175,    50,   136,   103,   106,   114,
     140,     9,    10,   122,   122,   114,   106,   102,    52,   100,
      10,    52,   158,   159,   159,    52,   157,    39,    91,   156,
     155,    10,   178,   176,   176,     9,    37,   121,     9,    52,
      25,   126,   112,    10,    25,    53,   129,   120,   121,    50,
      53,   114,   148,   146,   146,    10,    25,     6,    10,    25,
      25,    99,    25,    51,    51,   170,   176,    50,    53,    50,
     114,   119,   139,   121,     9,    52,    50,    51,    10,    52,
     159,   156,   157,   121,    53,    50,   120,    93,    94,   116,
     124,    10,   149,   149,   103,   103,   103,    59,    36,   178,
     171,   173,   122,   114,    52,   158,    52,   160,    91,   178,
      51,    51,   121,   114,    10,    51,    84,    91,   167,   168,
     169,    25,   121,    52,   157,   103,     9,   177,   176,   177,
     178,    51,   170,     9,    53,    50,    10,    84,   167,    74,
      79,    80,    81,   172,   176,    10,    36,    75,    76,    91,
     165,   166,    10,    10,   177,    77,    78,    91,    50,    10,
     170,    10,   172
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   127,
     127,   128,   128,   128,   128,   129,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   133,
     134,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   139,   139,   140,   140,   140,   141,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   145,   145,   145,    98,    98,    98,    98,    98,    98,
      98,    98,   146,   146,   147,   147,   148,   148,   149,   149,
     149,    98,    98,   150,   150,   151,   151,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,   152,    98,    98,
      98,    98,    98,    98,    98,   153,   153,   154,   154,    98,
      98,    98,    98,    98,   155,   155,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   165,   165,   166,
     166,   167,   167,   167,   168,   168,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
      98,   176,   177,   178
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     2,     3,     2,     0,     1,     1,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     4,     4,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     4,     5,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       0,     2,     1,     1,     0,     2,     3,     1,     2,     1,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     5,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     3,     4,     5,     1,     4,     4,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     1,     0,     2,     0,     2,     0,     1,
       1,     1,     1,     1,     2,     2,     1,     3,     2,     1,
       3,     2,     3,     3,     4,     1,     2,     0,     3,     4,
       2,     1,     6,     4,     2,     4,     3,     4,     2,     3,
       3,     4,     2,     1,     4,     6,     1,     0,     4,     5,
       6,     3,     1,     1,     3,     4,     0,     5,     5,     7,
       3,     3,     3,     3,     3,     4,     4,     5,     5,     3,
       3,     0,     3,     3,     4,     5,     3,     3,     1,     2,
       2,     1,     1,     1,     2,     3,     3,     2,     2,     3,
       3,     2,     2,     0,     3,     1,     1,     3,     2,     1,
       0,     6,     6,     3,     5,     3,     5,     4,     4,     5,
       5,     5,     6,     2,     4,     3,     6,     5,     4,     5,
       6,     5,    10,     8,     5,     6,     3,     3,     5,     8,
       8,     2,     2,     3,     5,     3,     1,     0,     1,     6,
       3,     4,     4,     3,     2,     1,     3,     3,     2,     3,
       4,     5,     4,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     3,     1,     1,     0,     3,     3,     4,     1,
       1,     0,     1,     4,     2,     8,    10,     1,     3,     1,
       0,     6,     8,     8,     1,     4,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     1,     1,
       1,     1,    16,     8,     3,     3,     1,     1,     1,     0,
       8,     0,     0,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"<EOF>\"", "error", "$undefined", "\"+\"", "\"&\"", "\"=\"", "\"@\"",
  "\"#base\"", "\"~\"", "\":\"", "\",\"", "\"#const\"", "\"#count\"",
  "\"$\"", "\"$+\"", "\"$-\"", "\"$*\"", "\"$<=\"", "\"$<\"", "\"$>\"",
  "\"$>=\"", "\"$=\"", "\"$!=\"", "\"#cumulative\"", "\"#disjoint\"",
  "\".\"", "\"..\"", "\"#external\"", "\"#defined\"", "\"#false\"",
  "\"#forget\"", "\">=\"", "\">\"", "\":-\"", "\"#include\"", "\"#inf\"",
  "\"{\"", "\"[\"", "\"<=\"", "\"(\"", "\"<\"", "\"#max\"",
  "\"#maximize\"", "\"#min\"", "\"#minimize\"", "\"\\\\\"", "\"*\"",
  "\"!=\"", "\"**\"", "\"?\"", "\"}\"", "\"]\"", "\")\"", "\";\"",
  "\"#show\"", "\"#edge\"", "\"#project\"", "\"#heuristic\"",
  "\"#showsig\"", "\"/\"", "\"-\"", "\"#sum\"", "\"#sum+\"", "\"#sup\"",
  "\"#true\"", "\"#program\"", "UBNOT", "UMINUS", "\"|\"", "\"#volatile\"",
  "\":~\"", "\"^\"", "\"<program>\"", "\"<define>\"", "\"any\"",
  "\"unary\"", "\"binary\"", "\"left\"", "\"right\"", "\"head\"",
  "\"body\"", "\"directive\"", "\"#theory\"", "\"EOF\"", "\"<NUMBER>\"",
  "\"<ANONYMOUS>\"", "\"<IDENTIFIER>\"", "\"<PYTHON>\"", "\"<LUA>\"",
  "\"<STRING>\"", "\"<VARIABLE>\"", "\"<THEORYOP>\"", "\"not\"",
  "\"default\"", "\"override\"", "$accept", "start", "program",
  "statement", "identifier", "constterm", "consttermvec", "constargvec",
  "term", "unaryargvec", "ntermvec", "termvec", "tuple", "tuplevec_sem",
  "tuplevec", "argvec", "binaryargvec", "cmp", "atom", "literal",
  "csp_mul_term", "csp_add_term", "csp_rel", "csp_literal", "nlitvec",
  "litvec", "optcondition", "noptcondition", "aggregatefunction",
  "bodyaggrelem", "bodyaggrelemvec", "altbodyaggrelem",
  "altbodyaggrelemvec", "bodyaggregate", "upper", "lubodyaggregate",
  "headaggrelemvec", "altheadaggrelemvec", "headaggregate",
  "luheadaggregate", "ncspelemvec", "cspelemvec", "disjoint",
  "conjunction", "dsym", "disjunctionsep", "disjunction", "bodycomma",
  "bodydot", "bodyconddot", "head", "optimizetuple", "optimizeweight",
  "optimizelitvec", "optimizecond", "maxelemlist", "minelemlist", "define",
  "nidlist", "idlist", "theory_op_list", "theory_term", "theory_opterm",
  "theory_opterm_nlist", "theory_opterm_list", "theory_atom_element",
  "theory_atom_element_nlist", "theory_atom_element_list",
  "theory_atom_name", "theory_atom", "theory_operator_nlist",
  "theory_operator_list", "theory_operator_definition",
  "theory_operator_definition_nlist", "theory_operator_definiton_list",
  "theory_definition_identifier", "theory_term_definition",
  "theory_atom_type", "theory_atom_definition", "theory_definition_nlist",
  "theory_definition_list", "enable_theory_lexing",
  "enable_theory_definition_lexing", "disable_theory_lexing", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   340,   340,   341,   345,   346,   352,   353,   354,   355,
     359,   360,   361,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   397,   398,   402,
     403,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   438,   439,   445,   446,   450,
     451,   455,   456,   457,   458,   461,   462,   465,   466,   469,
     470,   474,   475,   485,   486,   487,   488,   489,   490,   494,
     495,   496,   497,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   517,   518,   519,   520,
     524,   525,   526,   530,   531,   532,   533,   534,   535,   539,
     540,   548,   549,   553,   554,   558,   559,   563,   564,   568,
     569,   570,   571,   572,   578,   579,   583,   584,   590,   594,
     595,   601,   602,   603,   604,   608,   609,   610,   614,   615,
     616,   617,   623,   624,   628,   629,   635,   636,   637,   638,
     642,   643,   644,   645,   651,   652,   656,   657,   661,   662,
     663,   670,   677,   678,   682,   683,   684,   689,   690,   691,
     692,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   713,   714,   715,   716,   717,   718,   722,   723,
     724,   727,   728,   729,   733,   734,   735,   736,   737,   743,
     744,   745,   751,   752,   756,   757,   761,   762,   766,   767,
     768,   772,   773,   777,   778,   782,   783,   787,   788,   789,
     790,   796,   797,   798,   799,   800,   801,   802,   803,   809,
     810,   815,   821,   822,   828,   829,   830,   836,   840,   841,
     842,   848,   849,   855,   856,   862,   863,   867,   868,   872,
     873,   879,   880,   881,   889,   890,   894,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   910,
     911,   912,   916,   917,   921,   922,   926,   927,   931,   932,
     936,   937,   941,   942,   945,   946,   947,   953,   954,   958,
     959,   963,   964,   965,   969,   970,   974,   975,   979,   980,
     981,   982,   983,   984,   985,   986,   987,   991,   995,   996,
     997,   998,  1002,  1004,  1008,  1009,  1010,  1011,  1015,  1016,
    1020,  1026,  1030,  1034
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
    };
    const unsigned int user_token_number_max_ = 349;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 28 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar.yy" // lalr1.cc:1167
} } } // Gringo::Input::NonGroundGrammar
#line 3801 "/home/ubuntu/LPMLN1.1/lpmln_infer/clingo/libgringo/src/input/nongroundgrammar/grammar.cc" // lalr1.cc:1167
