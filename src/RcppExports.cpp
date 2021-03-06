// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_ngram
List rcpp_ngram(List x, int n, int n_min, String delim);
RcppExport SEXP _textrecipes_rcpp_ngram(SEXP xSEXP, SEXP nSEXP, SEXP n_minSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< String >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ngram(x, n, n_min, delim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_textrecipes_rcpp_ngram", (DL_FUNC) &_textrecipes_rcpp_ngram, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_textrecipes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
