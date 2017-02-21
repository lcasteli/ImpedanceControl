/* Include files */

#include "Walk_Sim_pid_sfun.h"
#include "c1_Walk_Sim_pid.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Walk_Sim_pid_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c1_debug_family_names[22] = { "R", "th1", "r1", "th2", "r2",
  "xx", "r3", "r", "K", "B", "rr", "vv", "FF", "loss", "nargin", "nargout", "p",
  "v", "Q", "w", "F", "T" };

/* Function Declarations */
static void initialize_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void initialize_params_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void enable_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void disable_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void c1_update_debugger_state_c1_Walk_Sim_pid
  (SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_Walk_Sim_pid
  (SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void set_sim_state_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void finalize_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void sf_gateway_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void mdl_start_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void c1_chartstep_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void initSimStructsc1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static void c1_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_b_T, const char_T *c1_identifier, real_T c1_y[3]);
static void c1_b_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[3]);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_c_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_d_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[22]);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_e_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[66]);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_f_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9]);
static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static real_T c1_abs(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x);
static real_T c1_mpower(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a);
static void c1_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_dimagree(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_error(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_b_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_b_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_c_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_c_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_d_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
                      c1_a[66], real_T c1_b[3], real_T c1_c[66]);
static void c1_e_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_b_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[3], real_T c1_b[66], real_T c1_c[66]);
static void c1_bsxfun_compatible(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_c_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[3], real_T c1_b[66], real_T c1_c[66]);
static void c1_f_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_g_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void c1_exp(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x
                   [22], real_T c1_b_x[22]);
static void c1_rdivide(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_y[22], real_T c1_z[22]);
static void c1_d_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[22], real_T c1_b[66]);
static void c1_sum(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x
                   [66], real_T c1_y[3]);
static void c1_check_forloop_overflow_error(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, boolean_T c1_overflow);
static const mxArray *c1_j_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_g_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint8_T c1_h_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Walk_Sim_pid, const char_T
  *c1_identifier);
static uint8_T c1_i_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_exp(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
                     c1_x[22]);
static void init_dsm_address_info(SFc1_Walk_Sim_pidInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc1_Walk_Sim_pid(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_Walk_Sim_pid = 0U;
}

static void initialize_params_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_debugger_state_c1_Walk_Sim_pid
  (SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_Walk_Sim_pid
  (SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  uint8_T c1_hoistedGlobal;
  uint8_T c1_u;
  const mxArray *c1_d_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(3, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_F, 0, 0U, 1U, 0U,
    1, 3), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_T, 0, 0U, 1U, 0U,
    1, 3), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_hoistedGlobal = chartInstance->c1_is_active_c1_Walk_Sim_pid;
  c1_u = c1_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv0[3];
  int32_T c1_i0;
  real_T c1_dv1[3];
  int32_T c1_i1;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("F", c1_u, 0)),
                      "F", c1_dv0);
  for (c1_i0 = 0; c1_i0 < 3; c1_i0++) {
    (*chartInstance->c1_F)[c1_i0] = c1_dv0[c1_i0];
  }

  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("T", c1_u, 1)),
                      "T", c1_dv1);
  for (c1_i1 = 0; c1_i1 < 3; c1_i1++) {
    (*chartInstance->c1_T)[c1_i1] = c1_dv1[c1_i1];
  }

  chartInstance->c1_is_active_c1_Walk_Sim_pid = c1_h_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c1_Walk_Sim_pid", c1_u,
       2)), "is_active_c1_Walk_Sim_pid");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_Walk_Sim_pid(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  for (c1_i2 = 0; c1_i2 < 3; c1_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_w)[c1_i2], 3U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i3 = 0; c1_i3 < 4; c1_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_Q)[c1_i3], 2U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_v)[c1_i4], 1U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i5 = 0; c1_i5 < 3; c1_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_p)[c1_i5], 0U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_Walk_Sim_pid(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_Walk_Sim_pidMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c1_i6 = 0; c1_i6 < 3; c1_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_F)[c1_i6], 4U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i7 = 0; c1_i7 < 3; c1_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_T)[c1_i7], 5U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }
}

static void mdl_start_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chartstep_c1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  int32_T c1_i8;
  int32_T c1_i9;
  real_T c1_b_p[3];
  int32_T c1_i10;
  real_T c1_b_v[3];
  int32_T c1_i11;
  real_T c1_b_Q[4];
  uint32_T c1_debug_family_var_map[22];
  real_T c1_b_w[3];
  real_T c1_R[9];
  real_T c1_th1[5];
  real_T c1_r1[30];
  real_T c1_th2[5];
  real_T c1_r2[30];
  real_T c1_xx;
  real_T c1_r3[6];
  real_T c1_r[66];
  real_T c1_K[9];
  real_T c1_B[9];
  real_T c1_rr[66];
  real_T c1_vv[66];
  real_T c1_FF[66];
  real_T c1_loss[22];
  real_T c1_nargin = 4.0;
  real_T c1_nargout = 2.0;
  real_T c1_b_F[3];
  real_T c1_b_T[3];
  int32_T c1_i12;
  real_T c1_d0;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  int32_T c1_i13;
  real_T c1_d4;
  real_T c1_d5;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  static real_T c1_dv2[30] = { 2.8779199779962802E-18, -0.047, 0.0,
    0.033234018715767734, -0.033234018715767734, 0.0, 0.047, 0.0, 0.0,
    0.033234018715767734, 0.033234018715767734, 0.0, 2.8779199779962802E-18,
    0.047, 0.0, 2.8779199779962802E-18, -0.047, 0.0, 0.033234018715767734,
    -0.033234018715767734, 0.0, 0.047, 0.0, 0.0, 0.033234018715767734,
    0.033234018715767734, 0.0, 2.8779199779962802E-18, 0.047, 0.0 };

  int32_T c1_i18;
  int32_T c1_i19;
  static real_T c1_dv3[30] = { -2.8779199779962802E-18, 0.047, 0.0,
    -0.033234018715767734, 0.033234018715767734, 0.0, -0.047, 0.0, 0.0,
    -0.033234018715767734, -0.033234018715767734, 0.0, -2.8779199779962802E-18,
    -0.047, 0.0, -2.8779199779962802E-18, 0.047, 0.0, -0.033234018715767734,
    0.033234018715767734, 0.0, -0.047, 0.0, 0.0, -0.033234018715767734,
    -0.033234018715767734, 0.0, -2.8779199779962802E-18, -0.047, 0.0 };

  int32_T c1_i20;
  int32_T c1_i21;
  static real_T c1_dv4[10] = { -0.134, -0.16723401871576773, -0.181,
    -0.16723401871576773, -0.134, -0.134, -0.16723401871576773, -0.181,
    -0.16723401871576773, -0.134 };

  int32_T c1_i22;
  static real_T c1_dv5[6] = { -0.07, 0.047, 0.0, -0.07, -0.047, 0.0 };

  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  static real_T c1_dv6[9] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 200000.0 };

  int32_T c1_i33;
  static real_T c1_a[9] = { 2000.0, 0.0, 0.0, 0.0, 2000.0, 0.0, 0.0, 0.0, 2000.0
  };

  int32_T c1_i34;
  int32_T c1_i35;
  real_T c1_b_a[9];
  int32_T c1_i36;
  real_T c1_b[66];
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  real_T c1_y[66];
  real_T c1_c_p[3];
  real_T c1_dv7[66];
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  real_T c1_c_w[3];
  real_T c1_b_y[66];
  int32_T c1_i49;
  int32_T c1_i50;
  int32_T c1_i51;
  real_T c1_c_v[3];
  real_T c1_dv8[66];
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  static real_T c1_c_a[9] = { -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -200000.0 };

  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  real_T c1_c_y[22];
  int32_T c1_i69;
  int32_T c1_i70;
  real_T c1_dv9[22];
  real_T c1_dv10[22];
  static real_T c1_d_a[3] = { -0.0, -0.0, -1.0 };

  int32_T c1_i71;
  int32_T c1_i72;
  real_T c1_b_loss[22];
  int32_T c1_i73;
  real_T c1_d_y[66];
  real_T c1_dv11[3];
  int32_T c1_i74;
  int32_T c1_i75;
  int32_T c1_i76;
  int32_T c1_i77;
  int32_T c1_i78;
  int32_T c1_i79;
  int32_T c1_i80;
  int32_T c1_iStart;
  int32_T c1_i81;
  int32_T c1_i82;
  int32_T c1_b_iStart;
  int32_T c1_i83;
  int32_T c1_e_a;
  int32_T c1_iEnd;
  real_T c1_c_loss[22];
  int32_T c1_c_iStart;
  int32_T c1_i84;
  int32_T c1_b_iEnd;
  int32_T c1_f_a;
  int32_T c1_b_b;
  real_T c1_e_y[66];
  real_T c1_dv12[3];
  real_T c1_c[66];
  int32_T c1_g_a;
  int32_T c1_i85;
  int32_T c1_c_b;
  boolean_T c1_overflow;
  int32_T c1_i1;
  int32_T c1_b_i1;
  int32_T c1_h_a;
  int32_T c1_i2;
  int32_T c1_i_a;
  int32_T c1_i3;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  for (c1_i8 = 0; c1_i8 < 3; c1_i8++) {
    c1_b_p[c1_i8] = (*chartInstance->c1_p)[c1_i8];
  }

  for (c1_i9 = 0; c1_i9 < 3; c1_i9++) {
    c1_b_v[c1_i9] = (*chartInstance->c1_v)[c1_i9];
  }

  for (c1_i10 = 0; c1_i10 < 4; c1_i10++) {
    c1_b_Q[c1_i10] = (*chartInstance->c1_Q)[c1_i10];
  }

  for (c1_i11 = 0; c1_i11 < 3; c1_i11++) {
    c1_b_w[c1_i11] = (*chartInstance->c1_w)[c1_i11];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 22U, 22U, c1_debug_family_names,
    c1_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_R, 0U, c1_f_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_th1, 1U, c1_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_r1, 2U, c1_h_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_th2, 3U, c1_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_r2, 4U, c1_h_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_xx, 5U, c1_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_r3, 6U, c1_g_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_r, 7U, c1_e_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_K, 8U, c1_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_B, 9U, c1_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_rr, 10U, c1_e_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_vv, 11U, c1_e_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_FF, 12U, c1_e_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_loss, 13U, c1_d_sf_marshallOut,
    c1_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 14U, c1_c_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 15U, c1_c_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_p, 16U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_v, 17U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_Q, 18U, c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_w, 19U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_b_F, 20U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_b_T, 21U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 4);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c1_abs(chartInstance,
         c1_b_p[0]), 0.25, -1, 4U, c1_abs(chartInstance, c1_b_p[0]) > 0.25))) {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
    c1_d0 = c1_mpower(chartInstance, c1_b_Q[2]);
    c1_d1 = c1_mpower(chartInstance, c1_b_Q[3]);
    c1_d2 = c1_mpower(chartInstance, c1_b_Q[1]);
    c1_d3 = c1_mpower(chartInstance, c1_b_Q[3]);
    c1_d4 = c1_mpower(chartInstance, c1_b_Q[1]);
    c1_d5 = c1_mpower(chartInstance, c1_b_Q[2]);
    c1_R[0] = (1.0 - 2.0 * c1_d0) - 2.0 * c1_d1;
    c1_R[3] = 2.0 * c1_b_Q[1] * c1_b_Q[2] - 2.0 * c1_b_Q[3] * c1_b_Q[0];
    c1_R[6] = 2.0 * c1_b_Q[1] * c1_b_Q[3] + 2.0 * c1_b_Q[2] * c1_b_Q[0];
    c1_R[1] = 2.0 * c1_b_Q[1] * c1_b_Q[2] + 2.0 * c1_b_Q[3] * c1_b_Q[0];
    c1_R[4] = (1.0 - 2.0 * c1_d2) - 2.0 * c1_d3;
    c1_R[7] = 2.0 * c1_b_Q[2] * c1_b_Q[3] - 2.0 * c1_b_Q[1] * c1_b_Q[0];
    c1_R[2] = 2.0 * c1_b_Q[1] * c1_b_Q[3] - 2.0 * c1_b_Q[2] * c1_b_Q[0];
    c1_R[5] = 2.0 * c1_b_Q[2] * c1_b_Q[3] + 2.0 * c1_b_Q[1] * c1_b_Q[0];
    c1_R[8] = (1.0 - 2.0 * c1_d4) - 2.0 * c1_d5;
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 11);
    for (c1_i16 = 0; c1_i16 < 5; c1_i16++) {
      c1_th1[c1_i16] = -1.5707963267948966 + 0.78539816339744828 * (real_T)
        c1_i16;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 13);
    for (c1_i17 = 0; c1_i17 < 30; c1_i17++) {
      c1_r1[c1_i17] = c1_dv2[c1_i17];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 14);
    for (c1_i18 = 0; c1_i18 < 5; c1_i18++) {
      c1_th2[c1_i18] = 1.5707963267948966 + -0.78539816339744828 * (real_T)
        c1_i18;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 16);
    for (c1_i19 = 0; c1_i19 < 30; c1_i19++) {
      c1_r2[c1_i19] = c1_dv3[c1_i19];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 17);
    c1_i20 = 0;
    for (c1_i21 = 0; c1_i21 < 10; c1_i21++) {
      c1_r2[c1_i20] = c1_dv4[c1_i21];
      c1_i20 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 20);
    c1_xx = -0.07;
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
    for (c1_i22 = 0; c1_i22 < 6; c1_i22++) {
      c1_r3[c1_i22] = c1_dv5[c1_i22];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 23);
    c1_i23 = 0;
    for (c1_i24 = 0; c1_i24 < 10; c1_i24++) {
      for (c1_i26 = 0; c1_i26 < 3; c1_i26++) {
        c1_r[c1_i26 + c1_i23] = c1_dv2[c1_i26 + c1_i23];
      }

      c1_i23 += 3;
    }

    c1_i25 = 0;
    for (c1_i27 = 0; c1_i27 < 10; c1_i27++) {
      for (c1_i29 = 0; c1_i29 < 3; c1_i29++) {
        c1_r[(c1_i29 + c1_i25) + 30] = c1_r2[c1_i29 + c1_i25];
      }

      c1_i25 += 3;
    }

    c1_i28 = 0;
    for (c1_i30 = 0; c1_i30 < 2; c1_i30++) {
      for (c1_i31 = 0; c1_i31 < 3; c1_i31++) {
        c1_r[(c1_i31 + c1_i28) + 60] = c1_dv5[c1_i31 + c1_i28];
      }

      c1_i28 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 26);
    for (c1_i32 = 0; c1_i32 < 9; c1_i32++) {
      c1_K[c1_i32] = c1_dv6[c1_i32];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 27);
    for (c1_i33 = 0; c1_i33 < 9; c1_i33++) {
      c1_B[c1_i33] = c1_a[c1_i33];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 29);
    for (c1_i34 = 0; c1_i34 < 9; c1_i34++) {
      c1_b_a[c1_i34] = c1_R[c1_i34];
    }

    for (c1_i35 = 0; c1_i35 < 66; c1_i35++) {
      c1_b[c1_i35] = c1_r[c1_i35];
    }

    for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
      c1_i38 = 0;
      for (c1_i39 = 0; c1_i39 < 22; c1_i39++) {
        c1_y[c1_i38 + c1_i36] = 0.0;
        c1_i41 = 0;
        for (c1_i42 = 0; c1_i42 < 3; c1_i42++) {
          c1_y[c1_i38 + c1_i36] += c1_b_a[c1_i41 + c1_i36] * c1_b[c1_i42 +
            c1_i38];
          c1_i41 += 3;
        }

        c1_i38 += 3;
      }
    }

    for (c1_i37 = 0; c1_i37 < 3; c1_i37++) {
      c1_c_p[c1_i37] = c1_b_p[c1_i37];
    }

    c1_bsxfun(chartInstance, c1_y, c1_c_p, c1_dv7);
    for (c1_i40 = 0; c1_i40 < 66; c1_i40++) {
      c1_rr[c1_i40] = c1_dv7[c1_i40];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 30);
    for (c1_i43 = 0; c1_i43 < 9; c1_i43++) {
      c1_b_a[c1_i43] = c1_R[c1_i43];
    }

    for (c1_i44 = 0; c1_i44 < 66; c1_i44++) {
      c1_b[c1_i44] = c1_r[c1_i44];
    }

    for (c1_i45 = 0; c1_i45 < 3; c1_i45++) {
      c1_i47 = 0;
      for (c1_i48 = 0; c1_i48 < 22; c1_i48++) {
        c1_y[c1_i47 + c1_i45] = 0.0;
        c1_i50 = 0;
        for (c1_i51 = 0; c1_i51 < 3; c1_i51++) {
          c1_y[c1_i47 + c1_i45] += c1_b_a[c1_i50 + c1_i45] * c1_b[c1_i51 +
            c1_i47];
          c1_i50 += 3;
        }

        c1_i47 += 3;
      }
    }

    for (c1_i46 = 0; c1_i46 < 3; c1_i46++) {
      c1_c_w[c1_i46] = c1_b_w[c1_i46];
    }

    c1_b_bsxfun(chartInstance, c1_c_w, c1_y, c1_b_y);
    for (c1_i49 = 0; c1_i49 < 3; c1_i49++) {
      c1_c_v[c1_i49] = c1_b_v[c1_i49];
    }

    c1_c_bsxfun(chartInstance, c1_c_v, c1_b_y, c1_dv8);
    for (c1_i52 = 0; c1_i52 < 66; c1_i52++) {
      c1_vv[c1_i52] = c1_dv8[c1_i52];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 32);
    for (c1_i53 = 0; c1_i53 < 66; c1_i53++) {
      c1_b[c1_i53] = c1_rr[c1_i53];
    }

    for (c1_i54 = 0; c1_i54 < 3; c1_i54++) {
      c1_i56 = 0;
      for (c1_i57 = 0; c1_i57 < 22; c1_i57++) {
        c1_y[c1_i56 + c1_i54] = 0.0;
        c1_i59 = 0;
        for (c1_i62 = 0; c1_i62 < 3; c1_i62++) {
          c1_y[c1_i56 + c1_i54] += c1_c_a[c1_i59 + c1_i54] * c1_b[c1_i62 +
            c1_i56];
          c1_i59 += 3;
        }

        c1_i56 += 3;
      }
    }

    for (c1_i55 = 0; c1_i55 < 66; c1_i55++) {
      c1_b[c1_i55] = c1_vv[c1_i55];
    }

    for (c1_i58 = 0; c1_i58 < 3; c1_i58++) {
      c1_i61 = 0;
      for (c1_i63 = 0; c1_i63 < 22; c1_i63++) {
        c1_b_y[c1_i61 + c1_i58] = 0.0;
        c1_i65 = 0;
        for (c1_i66 = 0; c1_i66 < 3; c1_i66++) {
          c1_b_y[c1_i61 + c1_i58] += c1_a[c1_i65 + c1_i58] * c1_b[c1_i66 +
            c1_i61];
          c1_i65 += 3;
        }

        c1_i61 += 3;
      }
    }

    for (c1_i60 = 0; c1_i60 < 66; c1_i60++) {
      c1_FF[c1_i60] = c1_y[c1_i60] - c1_b_y[c1_i60];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 35);
    for (c1_i64 = 0; c1_i64 < 66; c1_i64++) {
      c1_b[c1_i64] = c1_FF[c1_i64];
    }

    c1_i67 = 0;
    for (c1_i68 = 0; c1_i68 < 22; c1_i68++) {
      c1_c_y[c1_i68] = 0.0;
      for (c1_i70 = 0; c1_i70 < 3; c1_i70++) {
        c1_c_y[c1_i68] += c1_d_a[c1_i70] * c1_b[c1_i70 + c1_i67];
      }

      c1_i67 += 3;
    }

    c1_b_exp(chartInstance, c1_c_y);
    for (c1_i69 = 0; c1_i69 < 22; c1_i69++) {
      c1_dv9[c1_i69] = 1.0 + c1_c_y[c1_i69];
    }

    c1_rdivide(chartInstance, c1_dv9, c1_dv10);
    for (c1_i71 = 0; c1_i71 < 22; c1_i71++) {
      c1_loss[c1_i71] = c1_dv10[c1_i71];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 43);
    for (c1_i72 = 0; c1_i72 < 22; c1_i72++) {
      c1_b_loss[c1_i72] = c1_loss[c1_i72];
    }

    c1_d_repmat(chartInstance, c1_b_loss, c1_b_y);
    for (c1_i73 = 0; c1_i73 < 66; c1_i73++) {
      c1_d_y[c1_i73] = c1_b_y[c1_i73] * c1_FF[c1_i73];
    }

    c1_sum(chartInstance, c1_d_y, c1_dv11);
    for (c1_i74 = 0; c1_i74 < 3; c1_i74++) {
      c1_b_F[c1_i74] = c1_dv11[c1_i74];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 44);
    for (c1_i75 = 0; c1_i75 < 9; c1_i75++) {
      c1_b_a[c1_i75] = c1_R[c1_i75];
    }

    for (c1_i76 = 0; c1_i76 < 66; c1_i76++) {
      c1_b[c1_i76] = c1_r[c1_i76];
    }

    for (c1_i77 = 0; c1_i77 < 3; c1_i77++) {
      c1_i79 = 0;
      for (c1_i80 = 0; c1_i80 < 22; c1_i80++) {
        c1_y[c1_i79 + c1_i77] = 0.0;
        c1_i81 = 0;
        for (c1_i83 = 0; c1_i83 < 3; c1_i83++) {
          c1_y[c1_i79 + c1_i77] += c1_b_a[c1_i81 + c1_i77] * c1_b[c1_i83 +
            c1_i79];
          c1_i81 += 3;
        }

        c1_i79 += 3;
      }
    }

    for (c1_i78 = 0; c1_i78 < 66; c1_i78++) {
      c1_b[c1_i78] = c1_FF[c1_i78];
    }

    for (c1_iStart = 1; c1_iStart < 65; c1_iStart += 3) {
      c1_b_iStart = c1_iStart;
      c1_e_a = c1_b_iStart;
      c1_iEnd = c1_e_a;
      c1_c_iStart = c1_b_iStart;
      c1_b_iEnd = c1_iEnd;
      c1_f_a = c1_c_iStart;
      c1_b_b = c1_b_iEnd;
      c1_g_a = c1_f_a;
      c1_c_b = c1_b_b;
      c1_overflow = ((!(c1_g_a > c1_c_b)) && (c1_c_b > 2147483646));
      if (c1_overflow) {
        c1_check_forloop_overflow_error(chartInstance, c1_overflow);
      }

      for (c1_i1 = c1_c_iStart; c1_i1 <= c1_b_iEnd; c1_i1++) {
        c1_b_i1 = c1_i1 - 1;
        c1_h_a = c1_b_i1 + 1;
        c1_i2 = c1_h_a;
        c1_i_a = c1_i2 + 1;
        c1_i3 = c1_i_a;
        c1_c[c1_b_i1] = c1_y[c1_i2] * c1_b[c1_i3] - c1_y[c1_i3] * c1_b[c1_i2];
        c1_c[c1_i2] = c1_y[c1_i3] * c1_b[c1_b_i1] - c1_y[c1_b_i1] * c1_b[c1_i3];
        c1_c[c1_i3] = c1_y[c1_b_i1] * c1_b[c1_i2] - c1_y[c1_i2] * c1_b[c1_b_i1];
      }
    }

    for (c1_i82 = 0; c1_i82 < 22; c1_i82++) {
      c1_c_loss[c1_i82] = c1_loss[c1_i82];
    }

    c1_d_repmat(chartInstance, c1_c_loss, c1_b_y);
    for (c1_i84 = 0; c1_i84 < 66; c1_i84++) {
      c1_e_y[c1_i84] = c1_b_y[c1_i84] * c1_c[c1_i84];
    }

    c1_sum(chartInstance, c1_e_y, c1_dv12);
    for (c1_i85 = 0; c1_i85 < 3; c1_i85++) {
      c1_b_T[c1_i85] = c1_dv12[c1_i85];
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 48);
    for (c1_i12 = 0; c1_i12 < 3; c1_i12++) {
      c1_b_F[c1_i12] = 0.0;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 49);
    for (c1_i13 = 0; c1_i13 < 3; c1_i13++) {
      c1_b_T[c1_i13] = 0.0;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -49);
  _SFD_SYMBOL_SCOPE_POP();
  for (c1_i14 = 0; c1_i14 < 3; c1_i14++) {
    (*chartInstance->c1_F)[c1_i14] = c1_b_F[c1_i14];
  }

  for (c1_i15 = 0; c1_i15 < 3; c1_i15++) {
    (*chartInstance->c1_T)[c1_i15] = c1_b_T[c1_i15];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void initSimStructsc1_Walk_Sim_pid(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber)
{
  (void)c1_machineNumber;
  (void)c1_chartNumber;
  (void)c1_instanceNumber;
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i86;
  const mxArray *c1_y = NULL;
  real_T c1_u[3];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i86 = 0; c1_i86 < 3; c1_i86++) {
    c1_u[c1_i86] = (*(real_T (*)[3])c1_inData)[c1_i86];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_b_T, const char_T *c1_identifier, real_T c1_y[3])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_T), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_T);
}

static void c1_b_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[3])
{
  real_T c1_dv13[3];
  int32_T c1_i87;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv13, 1, 0, 0U, 1, 0U, 1, 3);
  for (c1_i87 = 0; c1_i87 < 3; c1_i87++) {
    c1_y[c1_i87] = c1_dv13[c1_i87];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_T;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[3];
  int32_T c1_i88;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_b_T = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_T), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_T);
  for (c1_i88 = 0; c1_i88 < 3; c1_i88++) {
    (*(real_T (*)[3])c1_outData)[c1_i88] = c1_y[c1_i88];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i89;
  const mxArray *c1_y = NULL;
  real_T c1_u[4];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i89 = 0; c1_i89 < 4; c1_i89++) {
    c1_u[c1_i89] = (*(real_T (*)[4])c1_inData)[c1_i89];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static real_T c1_c_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d6;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d6, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d6;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_nargout;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_nargout = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nargout), &c1_thisId);
  sf_mex_destroy(&c1_nargout);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i90;
  const mxArray *c1_y = NULL;
  real_T c1_u[22];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i90 = 0; c1_i90 < 22; c1_i90++) {
    c1_u[c1_i90] = (*(real_T (*)[22])c1_inData)[c1_i90];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 1, 22), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_d_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[22])
{
  real_T c1_dv14[22];
  int32_T c1_i91;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv14, 1, 0, 0U, 1, 0U, 2, 1,
                22);
  for (c1_i91 = 0; c1_i91 < 22; c1_i91++) {
    c1_y[c1_i91] = c1_dv14[c1_i91];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_loss;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[22];
  int32_T c1_i92;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_loss = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_loss), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_loss);
  for (c1_i92 = 0; c1_i92 < 22; c1_i92++) {
    (*(real_T (*)[22])c1_outData)[c1_i92] = c1_y[c1_i92];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i93;
  int32_T c1_i94;
  const mxArray *c1_y = NULL;
  int32_T c1_i95;
  real_T c1_u[66];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_i93 = 0;
  for (c1_i94 = 0; c1_i94 < 22; c1_i94++) {
    for (c1_i95 = 0; c1_i95 < 3; c1_i95++) {
      c1_u[c1_i95 + c1_i93] = (*(real_T (*)[66])c1_inData)[c1_i95 + c1_i93];
    }

    c1_i93 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 22), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_e_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[66])
{
  real_T c1_dv15[66];
  int32_T c1_i96;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv15, 1, 0, 0U, 1, 0U, 2, 3,
                22);
  for (c1_i96 = 0; c1_i96 < 66; c1_i96++) {
    c1_y[c1_i96] = c1_dv15[c1_i96];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_FF;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[66];
  int32_T c1_i97;
  int32_T c1_i98;
  int32_T c1_i99;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_FF = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_FF), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_FF);
  c1_i97 = 0;
  for (c1_i98 = 0; c1_i98 < 22; c1_i98++) {
    for (c1_i99 = 0; c1_i99 < 3; c1_i99++) {
      (*(real_T (*)[66])c1_outData)[c1_i99 + c1_i97] = c1_y[c1_i99 + c1_i97];
    }

    c1_i97 += 3;
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i100;
  int32_T c1_i101;
  const mxArray *c1_y = NULL;
  int32_T c1_i102;
  real_T c1_u[9];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_i100 = 0;
  for (c1_i101 = 0; c1_i101 < 3; c1_i101++) {
    for (c1_i102 = 0; c1_i102 < 3; c1_i102++) {
      c1_u[c1_i102 + c1_i100] = (*(real_T (*)[9])c1_inData)[c1_i102 + c1_i100];
    }

    c1_i100 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i103;
  int32_T c1_i104;
  const mxArray *c1_y = NULL;
  int32_T c1_i105;
  real_T c1_u[6];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_i103 = 0;
  for (c1_i104 = 0; c1_i104 < 2; c1_i104++) {
    for (c1_i105 = 0; c1_i105 < 3; c1_i105++) {
      c1_u[c1_i105 + c1_i103] = (*(real_T (*)[6])c1_inData)[c1_i105 + c1_i103];
    }

    c1_i103 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 2), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i106;
  int32_T c1_i107;
  const mxArray *c1_y = NULL;
  int32_T c1_i108;
  real_T c1_u[30];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_i106 = 0;
  for (c1_i107 = 0; c1_i107 < 10; c1_i107++) {
    for (c1_i108 = 0; c1_i108 < 3; c1_i108++) {
      c1_u[c1_i108 + c1_i106] = (*(real_T (*)[30])c1_inData)[c1_i108 + c1_i106];
    }

    c1_i106 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 10), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i109;
  const mxArray *c1_y = NULL;
  real_T c1_u[5];
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i109 = 0; c1_i109 < 5; c1_i109++) {
    c1_u[c1_i109] = (*(real_T (*)[5])c1_inData)[c1_i109];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 1, 5), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_f_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[9])
{
  real_T c1_dv16[9];
  int32_T c1_i110;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv16, 1, 0, 0U, 1, 0U, 2, 3, 3);
  for (c1_i110 = 0; c1_i110 < 9; c1_i110++) {
    c1_y[c1_i110] = c1_dv16[c1_i110];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_R;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[9];
  int32_T c1_i111;
  int32_T c1_i112;
  int32_T c1_i113;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_R = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_R), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_R);
  c1_i111 = 0;
  for (c1_i112 = 0; c1_i112 < 3; c1_i112++) {
    for (c1_i113 = 0; c1_i113 < 3; c1_i113++) {
      (*(real_T (*)[9])c1_outData)[c1_i113 + c1_i111] = c1_y[c1_i113 + c1_i111];
    }

    c1_i111 += 3;
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray *sf_c1_Walk_Sim_pid_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static real_T c1_abs(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x)
{
  real_T c1_b_x;
  real_T c1_c_x;
  (void)chartInstance;
  c1_b_x = c1_x;
  c1_c_x = c1_b_x;
  return muDoubleScalarAbs(c1_c_x);
}

static real_T c1_mpower(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a)
{
  real_T c1_c;
  real_T c1_b_a;
  real_T c1_c_a;
  real_T c1_x;
  real_T c1_d_a;
  boolean_T c1_b_p;
  c1_b_a = c1_a;
  c1_c_a = c1_b_a;
  c1_x = c1_c_a;
  c1_d_a = c1_x;
  c1_c = c1_d_a * c1_d_a;
  c1_b_p = false;
  if (c1_b_p) {
    c1_error(chartInstance);
  }

  return c1_c;
}

static void c1_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_dimagree(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_error(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 10, 0U, 1U, 0U, 2, 1, 31), false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static void c1_b_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_b_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_c_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_c_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_d_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
                      c1_a[66], real_T c1_b[3], real_T c1_c[66])
{
  int32_T c1_ak;
  int32_T c1_bk;
  int32_T c1_ck;
  int32_T c1_b_ck;
  int32_T c1_k;
  int32_T c1_b_k;
  int32_T c1_c_k;
  real_T c1_av[3];
  int32_T c1_i114;
  real_T c1_bv[3];
  int32_T c1_d_k;
  (void)chartInstance;
  c1_ak = -1;
  c1_bk = -1;
  for (c1_ck = 0; c1_ck < 64; c1_ck += 3) {
    c1_b_ck = c1_ck - 1;
    for (c1_k = 1; c1_k < 4; c1_k++) {
      c1_c_k = c1_k;
      c1_av[c1_c_k - 1] = c1_a[c1_ak + c1_c_k];
    }

    for (c1_b_k = 1; c1_b_k < 4; c1_b_k++) {
      c1_c_k = c1_b_k;
      c1_bv[c1_c_k - 1] = c1_b[c1_bk + c1_c_k];
    }

    for (c1_i114 = 0; c1_i114 < 3; c1_i114++) {
      c1_av[c1_i114] += c1_bv[c1_i114];
    }

    for (c1_d_k = 1; c1_d_k < 4; c1_d_k++) {
      c1_c_k = c1_d_k;
      c1_c[c1_b_ck + c1_c_k] = c1_av[c1_c_k - 1];
    }

    c1_ak += 3;
  }
}

static void c1_e_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_b_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[3], real_T c1_b[66], real_T c1_c[66])
{
  int32_T c1_asub;
  int32_T c1_ak;
  int32_T c1_bk;
  int32_T c1_ck;
  int32_T c1_b_ck;
  int32_T c1_k;
  int32_T c1_b_k;
  int32_T c1_c_k;
  real_T c1_av[3];
  real_T c1_c1;
  real_T c1_bv[3];
  real_T c1_c2;
  real_T c1_c3;
  int32_T c1_d_k;
  (void)chartInstance;
  c1_asub = 1;
  c1_ak = -1;
  c1_bk = -1;
  for (c1_ck = 0; c1_ck < 64; c1_ck += 3) {
    c1_b_ck = c1_ck - 1;
    for (c1_k = 1; c1_k < 4; c1_k++) {
      c1_c_k = c1_k;
      c1_av[c1_c_k - 1] = c1_a[c1_ak + c1_c_k];
    }

    for (c1_b_k = 1; c1_b_k < 4; c1_b_k++) {
      c1_c_k = c1_b_k;
      c1_bv[c1_c_k - 1] = c1_b[c1_bk + c1_c_k];
    }

    c1_c1 = c1_av[1] * c1_bv[2] - c1_av[2] * c1_bv[1];
    c1_c2 = c1_av[2] * c1_bv[0] - c1_av[0] * c1_bv[2];
    c1_c3 = c1_av[0] * c1_bv[1] - c1_av[1] * c1_bv[0];
    c1_av[0] = c1_c1;
    c1_av[1] = c1_c2;
    c1_av[2] = c1_c3;
    for (c1_d_k = 1; c1_d_k < 4; c1_d_k++) {
      c1_c_k = c1_d_k;
      c1_c[c1_b_ck + c1_c_k] = c1_av[c1_c_k - 1];
    }

    if (c1_asub < 1) {
      c1_ak += 3;
      c1_bk += 3;
      c1_asub++;
    } else {
      c1_bk += 3;
    }
  }
}

static void c1_bsxfun_compatible(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_c_bsxfun(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[3], real_T c1_b[66], real_T c1_c[66])
{
  int32_T c1_asub;
  int32_T c1_ak;
  int32_T c1_bk;
  int32_T c1_ck;
  int32_T c1_b_ck;
  int32_T c1_k;
  int32_T c1_b_k;
  int32_T c1_c_k;
  real_T c1_av[3];
  int32_T c1_i115;
  real_T c1_bv[3];
  int32_T c1_d_k;
  (void)chartInstance;
  c1_asub = 1;
  c1_ak = -1;
  c1_bk = -1;
  for (c1_ck = 0; c1_ck < 64; c1_ck += 3) {
    c1_b_ck = c1_ck - 1;
    for (c1_k = 1; c1_k < 4; c1_k++) {
      c1_c_k = c1_k;
      c1_av[c1_c_k - 1] = c1_a[c1_ak + c1_c_k];
    }

    for (c1_b_k = 1; c1_b_k < 4; c1_b_k++) {
      c1_c_k = c1_b_k;
      c1_bv[c1_c_k - 1] = c1_b[c1_bk + c1_c_k];
    }

    for (c1_i115 = 0; c1_i115 < 3; c1_i115++) {
      c1_av[c1_i115] += c1_bv[c1_i115];
    }

    for (c1_d_k = 1; c1_d_k < 4; c1_d_k++) {
      c1_c_k = c1_d_k;
      c1_c[c1_b_ck + c1_c_k] = c1_av[c1_c_k - 1];
    }

    if (c1_asub < 1) {
      c1_ak += 3;
      c1_bk += 3;
      c1_asub++;
    } else {
      c1_bk += 3;
    }
  }
}

static void c1_f_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_g_scalarEg(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_exp(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x
                   [22], real_T c1_b_x[22])
{
  int32_T c1_i116;
  for (c1_i116 = 0; c1_i116 < 22; c1_i116++) {
    c1_b_x[c1_i116] = c1_x[c1_i116];
  }

  c1_b_exp(chartInstance, c1_b_x);
}

static void c1_rdivide(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_y[22], real_T c1_z[22])
{
  int32_T c1_i117;
  (void)chartInstance;
  for (c1_i117 = 0; c1_i117 < 22; c1_i117++) {
    c1_z[c1_i117] = 1.0 / c1_y[c1_i117];
  }
}

static void c1_d_repmat(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
  c1_a[22], real_T c1_b[66])
{
  int32_T c1_jcol;
  int32_T c1_b_jcol;
  int32_T c1_iacol;
  int32_T c1_ibmat;
  int32_T c1_itilerow;
  int32_T c1_b_itilerow;
  int32_T c1_ibcol;
  (void)chartInstance;
  for (c1_jcol = 1; c1_jcol < 23; c1_jcol++) {
    c1_b_jcol = c1_jcol;
    c1_iacol = c1_b_jcol;
    c1_ibmat = (c1_b_jcol - 1) * 3 - 1;
    for (c1_itilerow = 1; c1_itilerow < 4; c1_itilerow++) {
      c1_b_itilerow = c1_itilerow;
      c1_ibcol = c1_ibmat + c1_b_itilerow;
      c1_b[c1_ibcol] = c1_a[c1_iacol - 1];
    }
  }
}

static void c1_sum(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T c1_x
                   [66], real_T c1_y[3])
{
  int32_T c1_j;
  int32_T c1_b_j;
  int32_T c1_ix;
  int32_T c1_iy;
  real_T c1_s;
  int32_T c1_k;
  int32_T c1_b_k;
  (void)chartInstance;
  for (c1_j = 1; c1_j < 4; c1_j++) {
    c1_b_j = c1_j;
    c1_ix = c1_b_j - 1;
    c1_iy = c1_b_j - 1;
    c1_s = c1_x[c1_ix];
    for (c1_k = 2; c1_k < 23; c1_k++) {
      c1_b_k = c1_k - 1;
      c1_s += c1_x[c1_ix + c1_b_k * 3];
    }

    c1_y[c1_iy] = c1_s;
  }
}

static void c1_check_forloop_overflow_error(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, boolean_T c1_overflow)
{
  const mxArray *c1_y = NULL;
  static char_T c1_u[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c1_b_y = NULL;
  static char_T c1_b_u[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (!c1_overflow) {
  } else {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_b_u, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                      sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message",
      1U, 2U, 14, c1_y, 14, c1_b_y));
  }
}

static const mxArray *c1_j_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int32_T c1_g_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i118;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i118, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i118;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint8_T c1_h_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Walk_Sim_pid, const char_T
  *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_Walk_Sim_pid), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_Walk_Sim_pid);
  return c1_y;
}

static uint8_T c1_i_emlrt_marshallIn(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_exp(SFc1_Walk_Sim_pidInstanceStruct *chartInstance, real_T
                     c1_x[22])
{
  int32_T c1_k;
  int32_T c1_b_k;
  real_T c1_b_x;
  real_T c1_c_x;
  (void)chartInstance;
  for (c1_k = 1; c1_k < 23; c1_k++) {
    c1_b_k = c1_k - 1;
    c1_b_x = c1_x[c1_b_k];
    c1_c_x = c1_b_x;
    c1_c_x = muDoubleScalarExp(c1_c_x);
    c1_x[c1_b_k] = c1_c_x;
  }
}

static void init_dsm_address_info(SFc1_Walk_Sim_pidInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_Walk_Sim_pidInstanceStruct
  *chartInstance)
{
  chartInstance->c1_p = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_F = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_v = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_Q = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_w = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_T = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c1_Walk_Sim_pid_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1255749233U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1173082997U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1654912811U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3435890517U);
}

mxArray* sf_c1_Walk_Sim_pid_get_post_codegen_info(void);
mxArray *sf_c1_Walk_Sim_pid_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("oIdz1Q7FV19eh95d9S1ieD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c1_Walk_Sim_pid_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_Walk_Sim_pid_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_Walk_Sim_pid_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_Walk_Sim_pid_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c1_Walk_Sim_pid_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c1_Walk_Sim_pid(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"F\",},{M[1],M[9],T\"T\",},{M[8],M[0],T\"is_active_c1_Walk_Sim_pid\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Walk_Sim_pid_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_Walk_Sim_pidInstanceStruct *chartInstance =
      (SFc1_Walk_Sim_pidInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _Walk_Sim_pidMachineNumber_,
           1,
           1,
           1,
           0,
           6,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_Walk_Sim_pidMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_Walk_Sim_pidMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _Walk_Sim_pidMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"p");
          _SFD_SET_DATA_PROPS(1,1,1,0,"v");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Q");
          _SFD_SET_DATA_PROPS(3,1,1,0,"w");
          _SFD_SET_DATA_PROPS(4,2,0,1,"F");
          _SFD_SET_DATA_PROPS(5,2,0,1,"T");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1816);
        _SFD_CV_INIT_EML_IF(0,1,0,45,62,1775,1815);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,48,62,-1,4);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)
            c1_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)
            c1_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _Walk_Sim_pidMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_Walk_Sim_pidInstanceStruct *chartInstance =
      (SFc1_Walk_Sim_pidInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c1_p);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c1_F);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c1_v);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c1_Q);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c1_w);
        _SFD_SET_DATA_VALUE_PTR(5U, *chartInstance->c1_T);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s2z5lNkI6VUVCGkwYebWRO";
}

static void sf_opaque_initialize_c1_Walk_Sim_pid(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_Walk_Sim_pidInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*)
    chartInstanceVar);
  initialize_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_Walk_Sim_pid(void *chartInstanceVar)
{
  enable_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_Walk_Sim_pid(void *chartInstanceVar)
{
  disable_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_Walk_Sim_pid(void *chartInstanceVar)
{
  sf_gateway_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_Walk_Sim_pid(SimStruct* S)
{
  return get_sim_state_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_Walk_Sim_pid(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c1_Walk_Sim_pid(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Walk_Sim_pid_optimization_info();
    }

    finalize_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Walk_Sim_pid(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_Walk_Sim_pid((SFc1_Walk_Sim_pidInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c1_Walk_Sim_pid(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Walk_Sim_pid_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 1);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2081527798U));
  ssSetChecksum1(S,(693612253U));
  ssSetChecksum2(S,(3222134090U));
  ssSetChecksum3(S,(4257410280U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_Walk_Sim_pid(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_Walk_Sim_pid(SimStruct *S)
{
  SFc1_Walk_Sim_pidInstanceStruct *chartInstance;
  chartInstance = (SFc1_Walk_Sim_pidInstanceStruct *)utMalloc(sizeof
    (SFc1_Walk_Sim_pidInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_Walk_Sim_pidInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_Walk_Sim_pid;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_Walk_Sim_pid;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_Walk_Sim_pid;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_Walk_Sim_pid;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_Walk_Sim_pid;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_Walk_Sim_pid;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_Walk_Sim_pid;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_Walk_Sim_pid;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Walk_Sim_pid;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_Walk_Sim_pid;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_Walk_Sim_pid;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c1_Walk_Sim_pid(chartInstance);
}

void c1_Walk_Sim_pid_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_Walk_Sim_pid(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Walk_Sim_pid(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Walk_Sim_pid(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Walk_Sim_pid_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
