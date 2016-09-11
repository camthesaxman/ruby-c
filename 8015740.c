int __fastcall sub_8015740(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r12@2
  signed int v4; // r5@2
  _WORD *v5; // r3@3
  int *v6; // r2@3
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int8)battle_side_get_owner(a1) == 1 )
  {
    v3 = (v1 & 2u) << 24 >> 25;
    *(_BYTE *)(v3 + 0x2024DEA) = 0;
    v4 = 0;
    if ( (signed int)v2024A68 > 0 )
    {
      v5 = (_WORD *)33704554;
      v6 = gBitTable;
      do
      {
        if ( !(*v6 & v2024C0C) )
          v2 |= gBitTable[*v5];
        v5 += 2;
        v6 += 2;
        v4 += 2;
      }
      while ( v4 < v2024A68 );
    }
    *(_BYTE *)(v3 + 33705450) = v2;
  }
  return v8;
}
