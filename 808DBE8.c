int __fastcall sub_808DBE8(signed int a1, int a2, unsigned __int16 a3)
{
  int v3; // r7@1
  unsigned int v4; // r1@4
  unsigned int v5; // r9@4
  int v6; // r5@5
  signed int v7; // r10@5
  int v8; // r1@13
  unsigned int v9; // r5@13
  int v10; // r4@14
  unsigned int v11; // r1@15
  int v12; // r0@17
  int v13; // r2@17
  int v14; // r1@20
  unsigned int v15; // r2@20
  unsigned int v16; // r1@22
  unsigned int v17; // r5@22
  signed int v18; // r6@23
  int v19; // r4@26
  int v21; // [sp+1Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int16)a2;
  v3 = a3;
  if ( (unsigned __int8)a1 == 1 )
  {
    v8 = (a2 - 5) << 16;
    v9 = (unsigned int)v8 >> 16;
    if ( (unsigned int)v8 >> 16 <= 0x181 )
    {
      v10 = v8 >> 14;
      if ( *(_WORD *)(v202FFB4 + (v8 >> 14)) != 0xFFFF )
      {
        sub_808E090(17, 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF, a3);
        if ( *(_BYTE *)(v202FFB4 + v10 + 2) << 31 )
        {
          sub_808DEB0(v9, 18, 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF, v3);
          sub_808DF88(
            (unsigned int)*(_BYTE *)(v202FFB4 + v10 + 2) << 30 >> 31,
            17,
            2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF,
            v3);
          v12 = *(_WORD *)(v202FFB4 + v10);
          v13 = 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF;
        }
        else
        {
          sub_808DEB0(v9, 18, 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF, v3);
          sub_808DF88(0, 17, 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF, v3);
          v13 = 2 * *(_WORD *)(v202FFB4 + 1584) & 0xFF;
          v12 = 0;
        }
        sub_808DFE4(v12, 23, v13);
        return v21;
      }
    }
    v11 = *(_WORD *)(v202FFB4 + 1584) << 25;
_0808DE16:
    sub_808E090(17, v11 >> 24, v3);
    return v21;
  }
  if ( a1 > 1 && a1 == 2 )
  {
    v14 = (a2 + 5) & 0xFFFF;
    v15 = (*(_WORD *)(v202FFB4 + 1584) + 10) & 0xFFFF;
    if ( v15 > 0xF )
      v15 = (v15 - 16) & 0xFFFF;
    v16 = v14 << 16;
    v17 = v16 >> 16;
    if ( v16 >> 16 <= 0x181 )
    {
      v18 = (signed int)v16 >> 14;
      if ( *(_WORD *)(v202FFB4 + ((signed int)v16 >> 14)) != 0xFFFF )
      {
        v19 = 2 * v15 & 0xFF;
        sub_808E090(17, v19, v3);
        if ( *(_BYTE *)(v202FFB4 + v18 + 2) << 31 )
        {
          sub_808DEB0(v17, 18, v19, v3);
          sub_808DF88((unsigned int)*(_BYTE *)(v202FFB4 + v18 + 2) << 30 >> 31, 17, v19, v3);
          sub_808DFE4(*(_WORD *)(v202FFB4 + v18), 23, v19);
        }
        else
        {
          sub_808DEB0(v17, 18, v19, v3);
          sub_808DF88(0, 17, v19, v3);
          sub_808DFE4(0, 23, v19);
        }
        return v21;
      }
    }
    v11 = v15 << 25;
    goto _0808DE16;
  }
  v4 = (a2 - 5) & 0xFFFF;
  v5 = 0;
  do
  {
    v6 = (unsigned __int16)v4;
    v7 = v4 << 16;
    if ( (unsigned __int16)v4 <= 0x181u && *(_WORD *)(v202FFB4 + (v7 >> 14)) != 0xFFFF )
    {
      sub_808E090(17, 2 * v5 & 0xFF, v3);
      if ( *(_BYTE *)(v202FFB4 + (v7 >> 14) + 2) << 31 )
      {
        sub_808DEB0(v6, 18, 2 * v5 & 0xFF, v3);
        sub_808DF88((unsigned int)*(_BYTE *)(v202FFB4 + (v7 >> 14) + 2) << 30 >> 31, 17, 2 * v5 & 0xFF, v3);
        sub_808DFE4(*(_WORD *)(v202FFB4 + (v7 >> 14)), 23, 2 * v5 & 0xFF);
      }
      else
      {
        sub_808DEB0(v6, 18, 2 * v5 & 0xFF, v3);
        sub_808DF88(0, 17, 2 * v5 & 0xFF, v3);
        sub_808DFE4(0, 23, 2 * v5 & 0xFF);
      }
    }
    else
    {
      sub_808E090(17, 2 * v5 & 0xFF, v3);
    }
    v4 = (unsigned int)(v7 + 0x10000) >> 16;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0xA );
  return v21;
}
