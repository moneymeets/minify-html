#ifndef _HDR_HYPERBUILD_RULE_LCALPHA
#define _HDR_HYPERBUILD_RULE_LCALPHA

#include "../../ext/nicehash/src/main/c/set/int32.h"

static nh_set_int32_t hb_r_lcalpha_set;

void hb_r_lcalpha_add_elems(nh_set_int32_t set) {
  for (char c = 0x61; c <= 0x7A; c++) {
    nh_set_int32_add(set, c);
  }
}

void hb_r_lcalpha_init() {
  hb_r_lcalpha_set = nh_set_int32_create();
  hb_r_lcalpha_add_elems(hb_r_lcalpha_set);
}

int hb_r_lcalpha_check(char c) {
  return nh_set_int32_has(hb_r_lcalpha_set, c);
}

#endif // _HDR_HYPERBUILD_RULE_LCALPHA
