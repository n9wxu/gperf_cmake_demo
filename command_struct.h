#ifndef COMMANDOPTION_H
#define COMMANDOPTION_H

#include "command_list.h"

#include <stdlib.h>

struct CommandOption {
  const char *Option;
  int OptionCode;
};

const struct CommandOption *in_word_set(register const char *str,
                                        register size_t len);
#endif
