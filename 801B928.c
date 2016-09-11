signed int sub_801B928()
{
  int v0; // r6@5
  unsigned int v1; // r0@11
  int v3; // r0@16
  void *v4; // r0@19
  unsigned __int8 v5; // r0@20
  int v6; // r2@20
  unsigned int v7; // r0@21
  unsigned int v8; // r4@21
  unsigned __int8 v9; // r0@22
  int v10; // r0@23
  signed int v11; // r1@23
  int v12; // r0@24
  int v13; // r6@24
  int v14; // r4@24
  signed int v15; // r2@28
  _DWORD *v16; // r1@30

  if ( v20239F8 & 2
    || (unsigned __int8)battle_side_get_owner(v2024C07) == 1
    || !(sub_8040AD0(*(_DWORD *)(88 * v2024C07 + 0x2024AD4), 88 * v2024C07 + 33704636) << 24)
    || FlagGet(2062) << 24 )
  {
    return 0;
  }
  v0 = 10;
  if ( FlagGet(2056) << 24 )
    v0 = 30;
  if ( FlagGet(2058) << 24 )
    v0 = 50;
  if ( FlagGet(2060) << 24 )
    v0 = 70;
  v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AAA);
  if ( v1 <= v0 || (*(_BYTE *)(88 * v2024C07 + 0x2024AAA) + v0) * (unsigned __int8)Random(v1) >> 8 < v0 )
    return 0;
  if ( v2024BE6 == 99 )
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFF7FFFFF;
  v3 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 7;
  if ( v3 )
  {
    v3 = v2024BE6;
    if ( v2024BE6 == 173 || v2024BE6 == 214 )
    {
      v4 = &gUnknown_081D995F;
_0801BBCE:
      v2024C10 = v4;
      return 1;
    }
  }
  v5 = Random(v3);
  v6 = *(_BYTE *)(88 * v2024C07 + 0x2024AAA);
  if ( (v6 + v0) * v5 >> 8 < v0 )
  {
    v7 = sub_8015A98(v2024C07, gBitTable[v2024BE4], 255) << 24;
    v8 = v7 >> 24;
    if ( v7 >> 24 != 15 )
    {
      do
      {
        v9 = Random(v7) & 3;
        v2024BE5 = v9;
        v2024BE4 = v9;
        v7 = (unsigned int)&gBitTable[v9];
      }
      while ( *(_DWORD *)v7 & v8 );
      v2024BEA = *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C);
      v2024D21 = 0;
      v2024DEC = 0;
      v201601C = 0;
      v2024C10 = &gUnknown_081D996F;
      v2024C08 = sub_801B5C0(v2024BEA, 0);
      v10 = v2024C6C;
      v11 = 0x200000;
      goto _0801BC1E;
    }
_0801BBBE:
    v2024D23 = Random(v7) & 3;
    v4 = &gUnknown_081D9977;
    goto _0801BBCE;
  }
  v12 = (v6 - v0) << 24;
  v13 = (v6 - v0) & 0xFF;
  v7 = Random(v12);
  v14 = (unsigned __int8)v7;
  if ( (unsigned __int8)v7 < v13 )
  {
    v7 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0xFF;
    if ( !v7 )
    {
      v7 = *(_BYTE *)(88 * v2024C07 + 0x2024AA0);
      if ( v7 != 72 && v7 != 15 )
      {
        v15 = 0;
        if ( (signed int)v2024A68 > 0 && !(v2024AD0 & 0x70) )
        {
          v16 = (_DWORD *)33704656;
          do
          {
            v16 += 22;
            ++v15;
          }
          while ( v15 < v2024A68 && !(*v16 & 0x70) );
        }
        v7 = v2024A68;
        if ( v15 == v2024A68 )
        {
          v4 = &gUnknown_081D9989;
          goto _0801BBCE;
        }
      }
    }
  }
  if ( v14 - v13 >= v13 )
    goto _0801BBBE;
  v2024BEC = sub_803BA2C(88 * v2024C07 + 33704576);
  v2024C08 = v2024C07;
  v2024C10 = &gUnknown_081D99A0;
  v10 = v2024C6C;
  v11 = 0x80000;
_0801BC1E:
  v2024C6C = v10 | v11;
  return 2;
}
