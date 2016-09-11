int __fastcall sub_80FA220(unsigned __int16 a1)
{
  unsigned int v1; // r10@2
  int v2; // r2@3
  char v3; // r6@3
  int v4; // r4@4
  unsigned int v5; // r1@5
  char v6; // r0@6
  int v7; // r7@8
  unsigned int v8; // r4@8
  unsigned int v9; // r6@8
  unsigned int v10; // r0@9
  unsigned int v11; // r0@12
  int v13; // [sp+0h] [bp-28h]@2
  int v14; // [sp+4h] [bp-24h]@9
  int v15; // [sp+24h] [bp-4h]@0

  if ( a1 )
  {
    v13 = 5 * a1;
    v1 = 0;
    while ( 1 )
    {
      v2 = v13;
      v3 = *(_BYTE *)(8 * v1 + 0x2028509);
      if ( !(*(_BYTE *)(8 * v1 + 0x2028509) & 0x40) )
      {
        v4 = *(_BYTE *)(8 * v1 + 0x2028508);
        if ( (v4 & 0x7Fu) >= (unsigned __int16)v13 )
        {
          v5 = v4 & 0xFFFFFF80 | ((v4 & 0x7F) - v13) & 0x7F;
          *(_BYTE *)(8 * v1 + 0x2028508) = v5;
          if ( !(v5 & 0x7F) )
          {
            v6 = v3 | 0x40;
_080FA334:
            *(_BYTE *)(8 * v1 + 0x2028509) = v6;
            goto _080FA336;
          }
          goto _080FA336;
        }
        v2 = v13 - (v4 & 0x7F);
        *(_BYTE *)(8 * v1 + 0x2028508) = v4 & 0x80;
        *(_BYTE *)(8 * v1 + 0x2028509) = v3 | 0x40;
      }
      v7 = *(_BYTE *)(8 * v1 + 0x2028508);
      v8 = (v7 & 0x7F) + v2;
      v9 = *(_WORD *)(8 * v1 + 0x2028508) << 18;
      if ( (unsigned __int16)v8 > v9 >> 25 )
      {
        v14 = v8 % (v9 >> 25);
        v10 = (unsigned __int8)(*(_BYTE *)(8 * v1 + 0x2028509) & 0xBF) | (((v8 / (v9 >> 25) ^ 1) & 1) << 6);
        *(_BYTE *)(8 * v1 + 0x2028509) = v10;
        if ( v10 & 0x40 )
          *(_BYTE *)(8 * v1 + 0x2028508) = v7 & 0x80 | v14 & 0x7F;
        else
          *(_BYTE *)(8 * v1 + 0x2028508) = v7 & 0x80 | (((unsigned int)*(_WORD *)(8 * v1 + 0x2028508) << 18 >> 25)
                                                      - v8 % (v9 >> 25)) & 0x7F;
        goto _080FA336;
      }
      v11 = v7 & 0xFFFFFF80 | v8 & 0x7F;
      *(_BYTE *)(8 * v1 + 0x2028508) = v11;
      if ( (v11 & 0x7F) == (unsigned int)*(_WORD *)(8 * v1 + 0x2028508) << 18 >> 25 )
      {
        v6 = *(_BYTE *)(8 * v1 + 0x2028509) & 0xBF;
        goto _080FA334;
      }
_080FA336:
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 > 4 )
      {
        sub_80FA46C(33719560, 5, 0);
        return v15;
      }
    }
  }
  return v15;
}
