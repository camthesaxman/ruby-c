int __fastcall sub_80CDE78(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 8 )
  {
    *(_WORD *)(v1 + 46) = 12;
    *(_WORD *)(v1 + 48) = 8;
    *(_WORD *)(v1 + 50) = 0;
    oamt_set_x3A_32(v1, (int)sub_80CDEB0);
    *(_DWORD *)(v1 + 28) = sub_8078364;
  }
  return v4;
}
