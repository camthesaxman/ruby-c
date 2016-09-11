int __fastcall sub_81175DC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r0@1
  __int16 v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( word_300179E & 3 || v3 > 60 )
  {
    v202E8CC = 1;
    MenuZeroFillScreen();
    script_env_2_disable();
    DestroyTask(v1);
  }
  return v5;
}
