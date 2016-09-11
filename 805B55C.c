int __fastcall sub_805B55C(int a1, __int16 a2)
{
  int v2; // r1@2
  unsigned int v3; // r6@2
  unsigned int v4; // r5@2
  signed int v5; // r10@3
  signed int v6; // r9@3
  int v7; // r8@3
  signed int v8; // r1@4
  __int16 v10; // [sp+4h] [bp-2Ch]@1
  int v11; // [sp+8h] [bp-28h]@2
  int v12; // [sp+Ch] [bp-24h]@2
  int v13; // [sp+2Ch] [bp-4h]@0

  v10 = a2;
  if ( v202E82C )
  {
    v2 = (v2025734 - 2) & 0xFFFF;
    v11 = (v2025734 + 17) & 0xFFFF;
    v12 = (v2025736 + 16) & 0xFFFF;
    v3 = *v202E82C;
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = v2025736;
      v6 = (signed __int16)v2;
      v7 = a1 << 16;
      do
      {
        v8 = (signed __int16)(*(_WORD *)(24 * v4 + 0x202635A) + 7);
        if ( v5 <= v8
          && (signed __int16)v12 >= v8
          && v6 <= (signed __int16)(*(_WORD *)(24 * v4 + 0x2026358) + 7)
          && (signed __int16)v11 >= (signed __int16)(*(_WORD *)(24 * v4 + 0x2026358) + 7)
          && !(FlagGet(*(_WORD *)(24 * v4 + 0x2026368)) << 24) )
        {
          SpawnFieldObject(24 * v4 + 33710932, v2025739, v2025738, SHIWORD(v7), v10);
        }
        v4 = (v4 + 1) & 0xFF;
      }
      while ( v4 < v3 );
    }
  }
  return v13;
}
