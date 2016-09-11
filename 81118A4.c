int __fastcall sub_81118A4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r7@6
  int v3; // r5@6
  int v4; // r6@6
  int v5; // r4@6
  int v7; // [sp+14h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 4) )
  {
    if ( *((_WORD *)v1 + 4) == 1 && !(v202F38F & 0x80) )
    {
      v2 = HIWORD(dword_3004B20[10 * a1 + 2]) | (LOWORD(dword_3004B20[10 * a1 + 3]) << 16);
      v3 = *((_WORD *)v1 + 8);
      v4 = *((_BYTE *)v1 + 18);
      v5 = *((_WORD *)v1 + 16) & 0xFF;
      DestroyTask(a1);
      evolution_cutscene(v2, v3, v4, v5);
    }
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    ++*((_WORD *)v1 + 4);
  }
  return v7;
}
