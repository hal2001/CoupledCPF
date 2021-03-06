// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ar_rinit_rcpp
NumericMatrix ar_rinit_rcpp(int nparticles, NumericVector& theta, NumericVector& rand, int dimension);
RcppExport SEXP _CoupledCPF_ar_rinit_rcpp(SEXP nparticlesSEXP, SEXP thetaSEXP, SEXP randSEXP, SEXP dimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type rand(randSEXP);
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(ar_rinit_rcpp(nparticles, theta, rand, dimension));
    return rcpp_result_gen;
END_RCPP
}
// ar_rtransition_rcpp
NumericMatrix ar_rtransition_rcpp(NumericMatrix& xparticles, NumericVector& theta, int time, NumericVector& rand, int dimension, NumericMatrix& A);
RcppExport SEXP _CoupledCPF_ar_rtransition_rcpp(SEXP xparticlesSEXP, SEXP thetaSEXP, SEXP timeSEXP, SEXP randSEXP, SEXP dimensionSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type xparticles(xparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type time(timeSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type rand(randSEXP);
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(ar_rtransition_rcpp(xparticles, theta, time, rand, dimension, A));
    return rcpp_result_gen;
END_RCPP
}
// create_A_
NumericMatrix create_A_(double alpha, int d);
RcppExport SEXP _CoupledCPF_create_A_(SEXP alphaSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(create_A_(alpha, d));
    return rcpp_result_gen;
END_RCPP
}
// levydriven_rtransition_rand_cpp
List levydriven_rtransition_rand_cpp(int nparticles, NumericVector& theta);
RcppExport SEXP _CoupledCPF_levydriven_rtransition_rand_cpp(SEXP nparticlesSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(levydriven_rtransition_rand_cpp(nparticles, theta));
    return rcpp_result_gen;
END_RCPP
}
// levydrivenmultifactor_rtransition_rand_cpp
List levydrivenmultifactor_rtransition_rand_cpp(int nparticles, NumericVector& theta);
RcppExport SEXP _CoupledCPF_levydrivenmultifactor_rtransition_rand_cpp(SEXP nparticlesSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(levydrivenmultifactor_rtransition_rand_cpp(nparticles, theta));
    return rcpp_result_gen;
END_RCPP
}
// one_step_lorenz_vector
NumericMatrix one_step_lorenz_vector(NumericMatrix xparticles, double tstart, double tend, double h, NumericVector parameters);
RcppExport SEXP _CoupledCPF_one_step_lorenz_vector(SEXP xparticlesSEXP, SEXP tstartSEXP, SEXP tendSEXP, SEXP hSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xparticles(xparticlesSEXP);
    Rcpp::traits::input_parameter< double >::type tstart(tstartSEXP);
    Rcpp::traits::input_parameter< double >::type tend(tendSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    rcpp_result_gen = Rcpp::wrap(one_step_lorenz_vector(xparticles, tstart, tend, h, parameters));
    return rcpp_result_gen;
END_RCPP
}
// lorenz_generate_randomness_cpp
NumericVector lorenz_generate_randomness_cpp(int nparticles, int datalength);
RcppExport SEXP _CoupledCPF_lorenz_generate_randomness_cpp(SEXP nparticlesSEXP, SEXP datalengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nparticles(nparticlesSEXP);
    Rcpp::traits::input_parameter< int >::type datalength(datalengthSEXP);
    rcpp_result_gen = Rcpp::wrap(lorenz_generate_randomness_cpp(nparticles, datalength));
    return rcpp_result_gen;
END_RCPP
}
// lorenz_perturb_randomness_cpp
NumericVector lorenz_perturb_randomness_cpp(const NumericVector& randomness, double rho);
RcppExport SEXP _CoupledCPF_lorenz_perturb_randomness_cpp(SEXP randomnessSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type randomness(randomnessSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(lorenz_perturb_randomness_cpp(randomness, rho));
    return rcpp_result_gen;
END_RCPP
}
// median_rcpp
double median_rcpp(NumericVector x);
RcppExport SEXP _CoupledCPF_median_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(median_rcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// multinomial_resampling_n_
IntegerVector multinomial_resampling_n_(const NumericVector& weights, int ndraws);
RcppExport SEXP _CoupledCPF_multinomial_resampling_n_(SEXP weightsSEXP, SEXP ndrawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type ndraws(ndrawsSEXP);
    rcpp_result_gen = Rcpp::wrap(multinomial_resampling_n_(weights, ndraws));
    return rcpp_result_gen;
END_RCPP
}
// coupled_multinomial_resampling_n_
IntegerMatrix coupled_multinomial_resampling_n_(const NumericVector& weights1, const NumericVector& weights2, int ndraws);
RcppExport SEXP _CoupledCPF_coupled_multinomial_resampling_n_(SEXP weights1SEXP, SEXP weights2SEXP, SEXP ndrawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights1(weights1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights2(weights2SEXP);
    Rcpp::traits::input_parameter< int >::type ndraws(ndrawsSEXP);
    rcpp_result_gen = Rcpp::wrap(coupled_multinomial_resampling_n_(weights1, weights2, ndraws));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm
NumericMatrix rmvnorm(int nsamples, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _CoupledCPF_rmvnorm(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm(nsamples, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_transpose
NumericMatrix rmvnorm_transpose(int nsamples, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _CoupledCPF_rmvnorm_transpose(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_transpose(nsamples, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_transpose_cholesky
NumericMatrix rmvnorm_transpose_cholesky(int nsamples, const NumericVector& mean, const Eigen::MatrixXd& cholesky_covariance);
RcppExport SEXP _CoupledCPF_rmvnorm_transpose_cholesky(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP cholesky_covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky_covariance(cholesky_covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_transpose_cholesky(nsamples, mean, cholesky_covariance));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm
NumericVector dmvnorm(const NumericMatrix& x, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _CoupledCPF_dmvnorm(SEXP xSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm(x, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_transpose
NumericVector dmvnorm_transpose(const NumericMatrix& x, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _CoupledCPF_dmvnorm_transpose(SEXP xSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_transpose(x, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_transpose_cholesky
NumericVector dmvnorm_transpose_cholesky(const NumericMatrix& x, const NumericVector& mean, const Eigen::MatrixXd& cholesky_covariance);
RcppExport SEXP _CoupledCPF_dmvnorm_transpose_cholesky(SEXP xSEXP, SEXP meanSEXP, SEXP cholesky_covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky_covariance(cholesky_covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_transpose_cholesky(x, mean, cholesky_covariance));
    return rcpp_result_gen;
END_RCPP
}
// one_step_pz_vector
NumericMatrix one_step_pz_vector(NumericMatrix xparticles, NumericVector alphas, double t, NumericVector parameters);
RcppExport SEXP _CoupledCPF_one_step_pz_vector(SEXP xparticlesSEXP, SEXP alphasSEXP, SEXP tSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xparticles(xparticlesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    rcpp_result_gen = Rcpp::wrap(one_step_pz_vector(xparticles, alphas, t, parameters));
    return rcpp_result_gen;
END_RCPP
}
// stochvol_dmeas_
NumericVector stochvol_dmeas_(NumericMatrix xparticles, List& theta, NumericVector& observation, int dimension);
RcppExport SEXP _CoupledCPF_stochvol_dmeas_(SEXP xparticlesSEXP, SEXP thetaSEXP, SEXP observationSEXP, SEXP dimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xparticles(xparticlesSEXP);
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type observation(observationSEXP);
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(stochvol_dmeas_(xparticles, theta, observation, dimension));
    return rcpp_result_gen;
END_RCPP
}
// systematic_resampling_n_
IntegerVector systematic_resampling_n_(const NumericVector& weights, int ndraws, double u);
RcppExport SEXP _CoupledCPF_systematic_resampling_n_(SEXP weightsSEXP, SEXP ndrawsSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type ndraws(ndrawsSEXP);
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(systematic_resampling_n_(weights, ndraws, u));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_kalman_mod();
RcppExport SEXP _rcpp_module_boot_module_tree();

static const R_CallMethodDef CallEntries[] = {
    {"_CoupledCPF_ar_rinit_rcpp", (DL_FUNC) &_CoupledCPF_ar_rinit_rcpp, 4},
    {"_CoupledCPF_ar_rtransition_rcpp", (DL_FUNC) &_CoupledCPF_ar_rtransition_rcpp, 6},
    {"_CoupledCPF_create_A_", (DL_FUNC) &_CoupledCPF_create_A_, 2},
    {"_CoupledCPF_levydriven_rtransition_rand_cpp", (DL_FUNC) &_CoupledCPF_levydriven_rtransition_rand_cpp, 2},
    {"_CoupledCPF_levydrivenmultifactor_rtransition_rand_cpp", (DL_FUNC) &_CoupledCPF_levydrivenmultifactor_rtransition_rand_cpp, 2},
    {"_CoupledCPF_one_step_lorenz_vector", (DL_FUNC) &_CoupledCPF_one_step_lorenz_vector, 5},
    {"_CoupledCPF_lorenz_generate_randomness_cpp", (DL_FUNC) &_CoupledCPF_lorenz_generate_randomness_cpp, 2},
    {"_CoupledCPF_lorenz_perturb_randomness_cpp", (DL_FUNC) &_CoupledCPF_lorenz_perturb_randomness_cpp, 2},
    {"_CoupledCPF_median_rcpp", (DL_FUNC) &_CoupledCPF_median_rcpp, 1},
    {"_CoupledCPF_multinomial_resampling_n_", (DL_FUNC) &_CoupledCPF_multinomial_resampling_n_, 2},
    {"_CoupledCPF_coupled_multinomial_resampling_n_", (DL_FUNC) &_CoupledCPF_coupled_multinomial_resampling_n_, 3},
    {"_CoupledCPF_rmvnorm", (DL_FUNC) &_CoupledCPF_rmvnorm, 3},
    {"_CoupledCPF_rmvnorm_transpose", (DL_FUNC) &_CoupledCPF_rmvnorm_transpose, 3},
    {"_CoupledCPF_rmvnorm_transpose_cholesky", (DL_FUNC) &_CoupledCPF_rmvnorm_transpose_cholesky, 3},
    {"_CoupledCPF_dmvnorm", (DL_FUNC) &_CoupledCPF_dmvnorm, 3},
    {"_CoupledCPF_dmvnorm_transpose", (DL_FUNC) &_CoupledCPF_dmvnorm_transpose, 3},
    {"_CoupledCPF_dmvnorm_transpose_cholesky", (DL_FUNC) &_CoupledCPF_dmvnorm_transpose_cholesky, 3},
    {"_CoupledCPF_one_step_pz_vector", (DL_FUNC) &_CoupledCPF_one_step_pz_vector, 4},
    {"_CoupledCPF_stochvol_dmeas_", (DL_FUNC) &_CoupledCPF_stochvol_dmeas_, 4},
    {"_CoupledCPF_systematic_resampling_n_", (DL_FUNC) &_CoupledCPF_systematic_resampling_n_, 3},
    {"_rcpp_module_boot_kalman_mod", (DL_FUNC) &_rcpp_module_boot_kalman_mod, 0},
    {"_rcpp_module_boot_module_tree", (DL_FUNC) &_rcpp_module_boot_module_tree, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CoupledCPF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
