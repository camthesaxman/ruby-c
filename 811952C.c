int __fastcall sub_811952C(int a1)
{
  int v1; // r8@1
  int v2; // r10@1
  char v3; // r4@1
  int v4; // r1@1
  unsigned int v5; // r5@1
  int v6; // r2@1
  unsigned int v7; // r5@13
  int v8; // r3@13
  char v9; // r0@15
  unsigned int v10; // r9@17
  int v11; // r2@18
  int v12; // r0@19
  int v14; // [sp+0h] [bp-34h]@1
  unsigned int v15; // [sp+Ch] [bp-28h]@1
  int v16; // [sp+10h] [bp-24h]@1
  int v17; // [sp+30h] [bp-4h]@29

  v1 = a1;
  v2 = 0;
  v15 = 0;
  memset(&v14, 0, 10);
  v16 = (unsigned __int16)Random();
  v201907D = 1;
  v2019003 = (v2019003 | 0x20) & 0xBF;
  v3 = v2019003;
  v201907E = -1;
  v2019088 = _floatsisf(*(_WORD *)(v1 + 52));
  v2019098 = 0;
  v201908C = *(_DWORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 28];
  v4 = (30 * (v2019004 & 3) + 33 + 15 * (1 - (v3 & 0x1F))) & 0xFFFF;
  v5 = 0;
  v6 = *(_WORD *)(v1 + 52);
  while ( v4 >= v6 || v6 > v4 + 90 )
  {
    if ( v5 == 3 )
    {
      *(_WORD *)(v1 + 46) = 1;
      v2019003 = v2019003 & 0xE0 | 1;
      goto _081195EA;
    }
    v4 = (v4 + 90) & 0xFFFF;
    v5 = (v5 + 1) & 0xFF;
    if ( v5 > 3 )
      goto _081195EA;
  }
  *(_WORD *)(v1 + 46) = v5 >> 1;
  v2019003 = v2019003 & 0xE0 | v5 & 1;
_081195EA:
  if ( v2019003 & 0x1F )
  {
    if ( *(_WORD *)(v1 + 46) )
      cry_related(0x130u, -63);
    else
      cry_related(0x130u, 63);
  }
  else
  {
    cry_related(0x132u, -63);
  }
  v7 = 2;
  v8 = (v201907F + 2) % 12 & 0xFF;
  if ( (v2019003 & 0x1F) != 1 || (v2019004 & 3) != 1 )
    v9 = 7;
  else
    v9 = 11;
  v10 = (unsigned __int8)v9;
  if ( (unsigned __int8)v9 > 2u )
  {
    do
    {
      v11 = gUnknown_083F8D94[2 * v8];
      if ( !(v2019008 & v11) )
      {
        v12 = v2;
        v2 = (v2 + 1) & 0xFF;
        *((_BYTE *)&v14 + v12) = v7;
        if ( !v15 )
        {
          if ( v11 & gUnknown_083F8C0C[5 * *(_BYTE *)((v201901A & 0xF) + 0x201901B)] )
            v15 = v7;
        }
      }
      v8 = (v8 + 1) % 12 & 0xFF;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 < v10 );
  }
  if ( ((v2019003 & 0x1F) + 1) & v2019002 )
  {
    if ( v15 && (unsigned __int8)v16 <= 0xBFu )
      *(_WORD *)(v1 + 60) = v15;
    else
      *(_WORD *)(v1 + 60) = *((_BYTE *)&v14 + v16 % v2);
  }
  else
  {
    *(_WORD *)(v1 + 60) = *((_BYTE *)&v14 + v16 % v2);
  }
  *(_DWORD *)(v1 + 28) = sub_8118CEC;
  return v17;
}
