int __fastcall sub_80FEABC(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r4@8
  int v3; // r1@9
  unsigned int v4; // r6@9
  _BYTE *v5; // r1@9
  unsigned __int16 v6; // r5@13
  unsigned int v7; // r1@20
  unsigned int i; // r1@25
  int v10; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( v20388F4 || (SetBgTilemapBuffer(0), v20388F4) )
    sub_80F953C(0, 60, 8);
  if ( v20388F4 + 7 == v20388D5 )
    SetBgTilemapBuffer(1u);
  if ( v20388F4 + 7 < v20388D5 )
    sub_80F953C(1u, 60, 152);
  v2 = v20388F4;
  if ( v20388F4 < v20388F4 + 8 )
  {
    while ( 1 )
    {
      v3 = v2 - v20388F4;
      v4 = (unsigned int)((v3 << 25) + 0x2000000) >> 24;
      v5 = (_BYTE *)(v3 + 33786103);
      if ( *v5 )
        sub_80F94F8(v5);
      if ( v2 == v20388D5 )
        break;
      v6 = v2 + 1;
      if ( *(_BYTE *)(v20388D0 + v2) )
      {
        if ( v201F009 != 1 || v20388F6 == 6 || v20388F6 == 7 || HIWORD(dword_3004B20[10 * v1 + 7]) )
        {
          sub_8072A18((int)&asc_83EB6C5[32 * *(_BYTE *)(v20388D0 + v2)], 8, 8 * v4, 104, 1);
        }
        else
        {
          StringCopy(&gStringVar1, &asc_83EB6C5[32 * *(_BYTE *)(v20388D0 + v2)]);
          sub_8072A18((int)&gUnknown_083EC65A, 8, 8 * v4, 104, 1);
        }
        v7 = 0;
        v6 = v2 + 1;
        while ( v7 <= 0xF )
        {
          if ( *(_BYTE *)(v7 + 33786070) - 1 == v2 )
          {
            sub_80F94A4(
              4u,
              (_BYTE *)(v2 - v20388F4 + 33786103),
              108,
              (((v2 - (unsigned int)v20388F4) << 20) + 1572864) >> 16);
            break;
          }
          v7 = (v7 + 1) & 0xFFFF;
        }
        for ( i = 0; i <= 0xB; i = (i + 1) & 0xFFFF )
        {
          if ( *(_BYTE *)(i + 33786086) - 1 == v2 )
          {
            sub_80F94A4(
              5u,
              (_BYTE *)(v2 - v20388F4 + 33786103),
              108,
              (((v2 - (unsigned int)v20388F4) << 20) + 1572864) >> 16);
            break;
          }
        }
      }
      v2 = v6;
      if ( v6 >= v20388F4 + 8 )
        return v10;
    }
    sub_8072A18((int)&UnknownText_Exit, 8, 8 * v4, 104, 1);
  }
  return v10;
}
