int __fastcall sub_80C7ADC(__int16 a1, __int16 a2)
{
  __int16 v2; // r10@1
  int v3; // r9@1
  int v4; // r2@1
  int v5; // r8@1
  unsigned int v6; // r5@1
  signed int v7; // r7@2
  signed int v8; // r6@2
  int v9; // r1@3
  int v10; // r2@3
  signed int v11; // r1@3
  __int16 v13; // [sp+0h] [bp-24h]@1
  int v14; // [sp+20h] [bp-4h]@0

  v13 = a1;
  v2 = a2;
  v3 = (v2025734 + 17) & 0xFFFF;
  v4 = (v2025736 - 2) & 0xFFFF;
  v5 = (v2025736 + 14) & 0xFFFF;
  v6 = 0;
  if ( v2038804 > 0u )
  {
    v7 = (signed __int16)v4;
    v8 = (signed __int16)(v2025734 - 2);
    do
    {
      v9 = 8 * v6 + v2038800;
      v10 = (*(_WORD *)v9 + 7) & 0xFFFF;
      v11 = (signed __int16)(*(_WORD *)(v9 + 2) + 7);
      if ( v7 <= v11
        && (signed __int16)v5 >= v11
        && v8 <= (signed __int16)v10
        && (signed __int16)v3 >= (signed __int16)v10
        && *(_BYTE *)(v6 + 33785840) == 64 )
      {
        *(_BYTE *)(v6 + 33785840) = sub_80C7BAC(v6, v13, v2);
      }
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v2038804 );
  }
  return v14;
}
