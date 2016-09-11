int __fastcall sub_80157C4(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r3@3
  _WORD *v3; // r4@4
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(a1) == 1 )
  {
    sub_8015740(v1);
  }
  else
  {
    v2 = 1;
    if ( (signed int)v2024A68 > 1 )
    {
      v3 = (_WORD *)(2 * v1 + 33704554);
      do
        *(_BYTE *)(((v2++ & 2) >> 1) + 0x2024DEA) |= gBitTable[*v3];
      while ( v2 < v2024A68 );
    }
  }
  return v5;
}
