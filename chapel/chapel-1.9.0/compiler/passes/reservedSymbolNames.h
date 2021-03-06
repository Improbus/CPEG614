  // reserved words in C
  cnames.set_add(astr("auto"));
  cnames.set_add(astr("bool"));
  cnames.set_add(astr("break"));
  cnames.set_add(astr("case"));
  cnames.set_add(astr("char"));
  cnames.set_add(astr("const"));
  cnames.set_add(astr("continue"));
  cnames.set_add(astr("default"));
  cnames.set_add(astr("do"));
  cnames.set_add(astr("double"));
  cnames.set_add(astr("else"));
  cnames.set_add(astr("enum"));
  cnames.set_add(astr("extern"));
  cnames.set_add(astr("float"));
  cnames.set_add(astr("for"));
  cnames.set_add(astr("goto"));
  cnames.set_add(astr("if"));
  cnames.set_add(astr("inline"));
  cnames.set_add(astr("int"));
  cnames.set_add(astr("long"));
  cnames.set_add(astr("register"));
  cnames.set_add(astr("restrict"));
  cnames.set_add(astr("return"));
  cnames.set_add(astr("short"));
  cnames.set_add(astr("signed"));
  cnames.set_add(astr("sizeof"));
  cnames.set_add(astr("static"));
  cnames.set_add(astr("struct"));
  cnames.set_add(astr("switch"));
  cnames.set_add(astr("typedef"));
  cnames.set_add(astr("union"));
  cnames.set_add(astr("unsigned"));
  cnames.set_add(astr("void"));
  cnames.set_add(astr("volatile"));
  cnames.set_add(astr("while"));
  // all symbol names beginning with _ followed by an uppercase letter
  // need to be mangled; this should be done with custom code

  cnames.set_add(astr("abs"));
  cnames.set_add(astr("cos"));
  cnames.set_add(astr("sin"));
  cnames.set_add(astr("tan"));
  cnames.set_add(astr("acos"));
  cnames.set_add(astr("asin"));
  cnames.set_add(astr("atan"));
  cnames.set_add(astr("floor"));
  cnames.set_add(astr("sqrt"));
  cnames.set_add(astr("conjg"));
  cnames.set_add(astr("exit"));
  cnames.set_add(astr("_init"));
  cnames.set_add(astr("stdin"));
  cnames.set_add(astr("close"));
  cnames.set_add(astr("fwrite"));
  cnames.set_add(astr("fread"));
  cnames.set_add(astr("fsync"));
  cnames.set_add(astr("main"));
  cnames.set_add(astr("open"));
  cnames.set_add(astr("pow"));
  cnames.set_add(astr("printf"));
  cnames.set_add(astr("scanf"));
  cnames.set_add(astr("sync"));
  cnames.set_add(astr("quad"));
  cnames.set_add(astr("read"));
  cnames.set_add(astr("sleep"));
  cnames.set_add(astr("stderr"));
  cnames.set_add(astr("stdout"));
  cnames.set_add(astr("wait"));
  cnames.set_add(astr("write"));
  cnames.set_add(astr("j0")); // the following 6 are in /usr/include/bits/mathcalls.h - ridiculous
  cnames.set_add(astr("j1"));
  cnames.set_add(astr("jn"));
  cnames.set_add(astr("y0"));
  cnames.set_add(astr("y1")); // this is ridiculous...
  cnames.set_add(astr("yn"));
  cnames.set_add(astr("log2"));
  cnames.set_add(astr("remove"));
  cnames.set_add(astr("fprintf"));
  cnames.set_add(astr("fscanf"));
  cnames.set_add(astr("clone"));
  cnames.set_add(astr("new"));
  cnames.set_add(astr("delete"));
  cnames.set_add(astr("register"));
  cnames.set_add(astr("signal"));
  cnames.set_add(astr("ceil"));
  cnames.set_add(astr("acosh"));
  cnames.set_add(astr("asinh"));
  cnames.set_add(astr("atan2"));
  cnames.set_add(astr("atanh"));
  cnames.set_add(astr("cbrt"));
  cnames.set_add(astr("cosh"));
  cnames.set_add(astr("erf"));
  cnames.set_add(astr("erfc"));
  cnames.set_add(astr("exp"));
  cnames.set_add(astr("exp2"));
  cnames.set_add(astr("expm1"));
  cnames.set_add(astr("lgamma"));
  cnames.set_add(astr("log10"));
  cnames.set_add(astr("log1p"));
  cnames.set_add(astr("log"));
  cnames.set_add(astr("rint"));
  cnames.set_add(astr("sinh"));
  cnames.set_add(astr("tanh"));
  cnames.set_add(astr("ascii"));
  cnames.set_add(astr("isnan"));
  cnames.set_add(astr("random"));
  cnames.set_add(astr("truncate"));
  cnames.set_add(astr("time"));
  cnames.set_add(astr("nearbyint"));
  cnames.set_add(astr("round"));
  cnames.set_add(astr("tgamma"));
  cnames.set_add(astr("trunc"));
  cnames.set_add(astr("div"));
  cnames.set_add(astr("max"));
  cnames.set_add(astr("min"));
  cnames.set_add(astr("malloc"));
  cnames.set_add(astr("free"));

  cnames.set_add(astr("unlink"));

  // symbols in stdint.h
  cnames.set_add(astr("int8_t"));
  cnames.set_add(astr("int16_t"));
  cnames.set_add(astr("int32_t"));
  cnames.set_add(astr("int64_t"));
  cnames.set_add(astr("uint8_t"));
  cnames.set_add(astr("uint16_t"));
  cnames.set_add(astr("uint32_t"));
  cnames.set_add(astr("uint64_t"));
  cnames.set_add(astr("int_least8_t"));
  cnames.set_add(astr("int_least16_t"));
  cnames.set_add(astr("int_least32_t"));
  cnames.set_add(astr("int_least64_t"));
  cnames.set_add(astr("uint_least8_t"));
  cnames.set_add(astr("uint_least16_t"));
  cnames.set_add(astr("uint_least32_t"));
  cnames.set_add(astr("uint_least64_t"));
  cnames.set_add(astr("int_fast8_t"));
  cnames.set_add(astr("int_fast16_t"));
  cnames.set_add(astr("int_fast32_t"));
  cnames.set_add(astr("int_fast64_t"));
  cnames.set_add(astr("uint_fast8_t"));
  cnames.set_add(astr("uint_fast16_t"));
  cnames.set_add(astr("uint_fast32_t"));
  cnames.set_add(astr("uint_fast64_t"));
  cnames.set_add(astr("intptr_t"));
  cnames.set_add(astr("uintptr_t"));
  cnames.set_add(astr("intmax_t"));
  cnames.set_add(astr("uintmax_t"));
  cnames.set_add(astr("INT8_MAX"));
  cnames.set_add(astr("INT16_MAX"));
  cnames.set_add(astr("INT32_MAX"));
  cnames.set_add(astr("INT64_MAX"));
  cnames.set_add(astr("INT8_MIN"));
  cnames.set_add(astr("INT16_MIN"));
  cnames.set_add(astr("INT32_MIN"));
  cnames.set_add(astr("INT64_MIN"));
  cnames.set_add(astr("UINT8_MAX"));
  cnames.set_add(astr("UINT16_MAX"));
  cnames.set_add(astr("UINT32_MAX"));
  cnames.set_add(astr("UINT64_MAX"));
  cnames.set_add(astr("INT_LEAST8_MIN"));
  cnames.set_add(astr("INT_LEAST16_MIN"));
  cnames.set_add(astr("INT_LEAST32_MIN"));
  cnames.set_add(astr("INT_LEAST64_MIN"));
  cnames.set_add(astr("INT_LEAST8_MAX"));
  cnames.set_add(astr("INT_LEAST16_MAX"));
  cnames.set_add(astr("INT_LEAST32_MAX"));
  cnames.set_add(astr("INT_LEAST64_MAX"));
  cnames.set_add(astr("UINT_LEAST8_MAX"));
  cnames.set_add(astr("UINT_LEAST16_MAX"));
  cnames.set_add(astr("UINT_LEAST32_MAX"));
  cnames.set_add(astr("UINT_LEAST64_MAX"));
  cnames.set_add(astr("INT_FAST8_MIN"));
  cnames.set_add(astr("INT_FAST16_MIN"));
  cnames.set_add(astr("INT_FAST32_MIN"));
  cnames.set_add(astr("INT_FAST64_MIN"));
  cnames.set_add(astr("INT_FAST8_MAX"));
  cnames.set_add(astr("INT_FAST16_MAX"));
  cnames.set_add(astr("INT_FAST32_MAX"));
  cnames.set_add(astr("INT_FAST64_MAX"));
  cnames.set_add(astr("UINT_FAST8_MAX"));
  cnames.set_add(astr("UINT_FAST16_MAX"));
  cnames.set_add(astr("UINT_FAST32_MAX"));
  cnames.set_add(astr("UINT_FAST64_MAX"));
  cnames.set_add(astr("INTPTR_MIN"));
  cnames.set_add(astr("INTPTR_MAX"));
  cnames.set_add(astr("UINTPTR_MAX"));
  cnames.set_add(astr("INTMAX_MIN"));
  cnames.set_add(astr("INTMAX_MAX"));
  cnames.set_add(astr("UINTMAX_MAX"));
  cnames.set_add(astr("PTRDIFF_MIN"));
  cnames.set_add(astr("PTRDIFF_MAX"));
  cnames.set_add(astr("SIZE_MAX"));
  cnames.set_add(astr("WCHAR_MAX"));
  cnames.set_add(astr("WCHAR_MIN"));
  cnames.set_add(astr("WINT_MIN"));
  cnames.set_add(astr("WINT_MAX"));
  cnames.set_add(astr("SIG_ATOMIC_MIN"));
  cnames.set_add(astr("SIG_ATOMIC_MAX"));
  cnames.set_add(astr("INT8_C"));
  cnames.set_add(astr("INT16_C"));
  cnames.set_add(astr("INT32_C"));
  cnames.set_add(astr("INT64_C"));
  cnames.set_add(astr("UINT8_C"));
  cnames.set_add(astr("UINT16_C"));
  cnames.set_add(astr("UINT32_C"));
  cnames.set_add(astr("UINT64_C"));
  cnames.set_add(astr("INTMAX_C"));
  cnames.set_add(astr("UINTMAX_C"));

  // symbols from stdio.h
  cnames.set_add(astr("EOF"));

  // symbols from QIO
  cnames.set_add(astr("EEOF"));
  cnames.set_add(astr("ESHORT"));
  cnames.set_add(astr("EFORMAT"));

  // reserved words in c++
  cnames.set_add(astr("this"));
  cnames.set_add(astr("template"));
  cnames.set_add(astr("assert"));

  cnames.set_add(astr("flag"));

  // New additions from the PGI 13.3 C runtime libpgc.a (relaxedmath.o):
  cnames.set_add(astr("alloca"));
  cnames.set_add(astr("add128"));
  cnames.set_add(astr("add192"));
  cnames.set_add(astr("eq128"));
  cnames.set_add(astr("le128"));
  cnames.set_add(astr("lt128"));
  cnames.set_add(astr("ne128"));
  cnames.set_add(astr("sub128"));
  cnames.set_add(astr("sub192"));
  cnames.set_add(astr("a1"));
  cnames.set_add(astr("a2"));
  cnames.set_add(astr("a3"));
  cnames.set_add(astr("inc"));
  cnames.set_add(astr("inv32"));
  cnames.set_add(astr("invln2"));
  cnames.set_add(astr("isign"));
  cnames.set_add(astr("ln2"));
  cnames.set_add(astr("pi"));
  cnames.set_add(astr("table"));
  cnames.set_add(astr("ten23"));
  cnames.set_add(astr("ts"));
  cnames.set_add(astr("two"));
