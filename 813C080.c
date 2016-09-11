int __fastcall sub_813C080(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int *v3; // r4@15
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( (unsigned int)dword_3005ED0 > 0x71F )
  {
    BeginNormalPaletteFade(-1, 16, 0, 0x10u, -1);
    dword_3004B20[10 * v1] = (int)sub_813C1F4;
  }
  if ( dword_3005ED0 == 1109 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 1;
  if ( dword_3005ED0 == 1214 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 0;
  if ( dword_3005ED0 == 1394 )
    *(_WORD *)&gSprites[68 * LOWORD(dword_3004B20[10 * v1 + 3]) + 46] = 1;
  if ( dword_3005ED0 == 1398 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 2;
  if ( dword_3005ED0 == 1586 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 3;
  if ( dword_3005ED0 == 1727 )
    *(_WORD *)&gSprites[68 * HIWORD(dword_3004B20[10 * v1 + 2]) + 46] = 4;
  v3 = &dword_3004B20[10 * v2];
  v203935A = sine((*((_WORD *)v3 + 7) << 16 >> 18) & 0x7F, 48);
  if ( (signed int)*((_WORD *)v3 + 7) <= 511 )
    ++*((_WORD *)v3 + 7);
  sub_8149020(1);
  return v5;
}
