int __fastcall sub_810D128(unsigned __int8 a1)
{
  int *v1; // r3@1
  int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = (16 - *((_WORD *)v1 + 5)) << 16;
  v4000052 = (unsigned int)(v2 + 0x10000000) >> 16;
  if ( v2 )
  {
    ++*((_WORD *)v1 + 5);
  }
  else
  {
    LoadPalette((int)&gCaveTransitionPalette_Black, 0, 32);
    SetMainCallback2(dword_3001778);
  }
  return v4;
}
