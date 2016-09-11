int __fastcall task50_save_game(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sub_8071630();
  if ( v2 == 1 )
  {
    v202E8DC = 1;
    goto _080716EC;
  }
  if ( v2 > 1 )
  {
    if ( v2 <= 3 )
      v202E8DC = 0;
    goto _080716EC;
  }
  if ( v2 )
  {
_080716EC:
    DestroyTask(v1);
    script_env_2_enable_and_set_ctx_running();
  }
  return v4;
}
