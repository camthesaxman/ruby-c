int __fastcall sub_80DE61C(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r1@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5) + 1;
  *((_WORD *)v1 + 5) = v2;
  *((_WORD *)v1 + 9) = v2 & 1;
  if ( !(v2 & 1) )
    *((_WORD *)v1 + 6) = gSineTable[*((_WORD *)v1 + 5)] / 18;
  if ( *((_WORD *)v1 + 9) == 1 )
    *((_WORD *)v1 + 7) = 16 - gSineTable[*((_WORD *)v1 + 5)] / 18;
  v4000052 = (HIWORD(dword_3004B20[10 * a1 + 3]) << 8) | LOWORD(dword_3004B20[10 * a1 + 3]);
  if ( *((_WORD *)v1 + 5) == 128 )
  {
    *((_WORD *)v1 + 19) = 0;
    *v1 = (int)sub_80DE6B0;
    call_via_r1(a1, sub_80DE6B0);
  }
  return v4;
}
