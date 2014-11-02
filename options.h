//
// options.h: CEN64 simulation options.
//
// CEN64: Cycle-Accurate Nintendo 64 Simulator.
// Copyright (C) 2014, Tyler J. Stachecki.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#ifndef __options_h__
#define __options_h__
#include "common.h"

struct cen64_options {
	const char *pifrom_path;
	const char *cart_path;

	bool extra_mode;
};

extern const struct cen64_options default_cen64_options;

int parse_options(struct cen64_options *, int argc, const char *argv[]);
void print_command_line_usage(const char *invokation_string);

#endif
