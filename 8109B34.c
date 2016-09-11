int __fastcall sub_8109B34(unsigned __int8 a1, __int16 a2)
{
  unsigned __int8 v2; // r4@1
  int v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a1;
  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 <= 0x78u )
  {
    v3 = 33745100;
    v202E8CC = a2;
  }
  else
  {
    v3 = 0xFFFF;
    v202E8CC = -1;
  }
  sub_8072DEC(v3);
  MenuZeroFillWindowRect(0, 1u, 0xCu, 0xCu);
  DestroyTask(v2);
  script_env_2_enable_and_set_ctx_running();
  return v5;
}
