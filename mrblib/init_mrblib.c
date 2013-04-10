#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/dump.h"
#include "mruby/string.h"
#include "mruby/proc.h"

extern const uint8_t mrblib_irep[];

void
mrb_init_mrblib(mrb_state *mrb)
{
  mrb_load_irep(mrb, mrblib_irep);
}

/*
void
mrb_init_mrblib_ext(mrb_state *mrb)
{
  int n = mrb_read_irep(mrb, mrblib_ext_irep);

  extern mrb_value mrb_top_self(mrb_state *mrb);
  mrb_run(mrb, mrb_proc_new(mrb, mrb->irep[n]), mrb_top_self(mrb));
}
*/
