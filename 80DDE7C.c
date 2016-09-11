int __fastcall sub_80DDE7C(unsigned __int8 a1)
{
  int *v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r1@2
  __int16 v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 14) + 1;
  *((_WORD *)v1 + 14) = v2;
  if ( v2 == 3 )
  {
    *((_WORD *)v1 + 14) = 0;
    v3 = *((_WORD *)v1 + 6) + 1;
    *((_WORD *)v1 + 6) = v3;
    v4 = *((_WORD *)v1 + 7) - 1;
    *((_WORD *)v1 + 7) = v4;
    v4000052 = v3 | (v4 << 8);
    if ( *((_WORD *)v1 + 6) == 9 )
      *v1 = (int)sub_80DDED0;
  }
  return v6;
}
