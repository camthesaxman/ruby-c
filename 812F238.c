int __fastcall sub_812F238(unsigned __int8 a1)
{
  int *v1; // r3@1
  __int16 v2; // r0@1
  __int16 v3; // r1@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 14);
  *((_WORD *)v1 + 14) = v2 + 1;
  if ( v2 > 1 )
  {
    *((_WORD *)v1 + 14) = 0;
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    v4000052 = v3 | ((16 - v3) << 8);
    if ( *((_WORD *)v1 + 5) == 10 )
    {
      *((_WORD *)v1 + 14) = 256;
      *((_WORD *)v1 + 15) = 256;
      *v1 = (int)sub_812F290;
    }
  }
  return v5;
}
