int __fastcall sub_80E4EF8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, int a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // r10@1
  int v8; // r9@1
  int v9; // r5@1
  int v10; // r0@1
  int v11; // r9@3
  int v12; // r1@4
  _WORD *v13; // r3@6
  signed int v14; // r2@6
  __int16 v16; // [sp+0h] [bp-24h]@1
  int v17; // [sp+20h] [bp-4h]@0

  v7 = a1;
  v8 = a2;
  v16 = a4;
  v40000D4 = gUnknown_081FAF4C[a3]
           + (*(_BYTE *)((unsigned __int8)battle_get_side_with_given_state(a3) + 0x2024E84) << 11);
  v40000D8 = (unsigned __int16)a5 + 100663296;
  v40000DC = -2147482624;
  v9 = ((unsigned int)(a5 << 16) >> 21) - (a7 << 9);
  v10 = v8;
  if ( __OFSUB__(v8, v8 + 8) ^ 1 )
  {
    v11 = v8 + 8;
    do
    {
      v12 = v10 + 1;
      if ( __OFSUB__(v7, v7 + 8) ^ 1 )
      {
        v13 = (_WORD *)(2 * v7 + (v10 << 6) + 100663296 + (a6 << 11));
        v14 = 8;
        do
        {
          *v13 = v9++ | (v16 << 12);
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      ++v10;
    }
    while ( v12 < v11 );
  }
  return v17;
}
