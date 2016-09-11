int __fastcall sub_810E09C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( gUnknown_083F8370[v2039259] == v2039258 )
  {
    sub_810E104(v202E8CC, gUnknown_083F8376[v2039259]);
    v2039258 = 0;
    ++v2039259;
    if ( v2039259 == 5 )
    {
      DestroyTask(v1);
      script_env_2_enable_and_set_ctx_running();
    }
  }
  else
  {
    ++v2039258;
  }
  return v3;
}
