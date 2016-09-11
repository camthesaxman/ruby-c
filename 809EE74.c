int __fastcall sub_809EE74(unsigned __int8 a1)
{
  int v1; // r4@1
  _WORD *v2; // r6@1
  unsigned int v3; // r0@1
  _WORD *v4; // r2@13
  int v5; // r1@23
  int v6; // r1@25
  char v7; // r0@32
  int v8; // r0@37
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *v2;
  if ( v3 <= 6 )
  {
    switch ( v3 )
    {
      case 0u:
        if ( v2018080 )
          word_30042C0 = 0;
        else
          word_3004288 = v2018080;
        goto _0809F096;
      case 1u:
        if ( v2018080 )
        {
          if ( v201800B == 1 )
            v400000A = (v400000A & 0xE0FC) + 2049;
          if ( v201800B == 2 )
            v400000A = (v400000A & 0xE0FC) + 2561;
          if ( v201800B == 3 )
            v400000A = (v400000A & 0xE0FC) + 3073;
          v4 = (_WORD *)67108876;
        }
        else
        {
          if ( v201800B == 1 )
            v400000C = (v400000C & 0xE0FC) + 2049;
          if ( v201800B == 2 )
            v400000C = (v400000C & 0xE0FC) + 2561;
          if ( v201800B == 3 )
            v400000C = (v400000C & 0xE0FC) + 3073;
          v4 = (_WORD *)67108874;
        }
        *v4 = (*v4 & 0xFFFC) + 2;
        goto _0809F096;
      case 2u:
        if ( v2018080 )
        {
          v6 = (unsigned __int16)word_30042C0 + 32;
          word_30042C0 += 32;
          if ( v6 << 16 != 0x1000000 )
            return v10;
        }
        else
        {
          v5 = (unsigned __int16)word_3004288 + 32;
          word_3004288 += 32;
          if ( v5 << 16 != 0x1000000 )
            return v10;
        }
_0809F096:
        ++*v2;
        break;
      case 3u:
        v201807E = v201800B + 1;
        if ( ((v2018008 - 2) & 0xFFu) > 1 )
        {
          if ( v201800B <= 1u || v201807B && v2018008 != 4 )
          {
            if ( v201800B )
              v7 = 0;
            else
              v7 = 7;
          }
          else
          {
            v7 = 6;
          }
          v201807F = v7;
        }
        else
        {
          v201807F = 0;
          sub_80A029C(33652752);
          sub_80A0428(33652752, 33652857);
          sub_80A00F4(v2018079);
        }
        goto _0809F096;
      case 4u:
        v8 = sub_80A0EE8(v3);
        sub_80A0DD0(v8);
        goto _0809F096;
      case 5u:
        call_via_r1(33652752, *(&gUnknown_083C1598 + v201800B));
        v2018080 ^= 1u;
        goto _0809F096;
      case 6u:
        if ( sub_8055870() != 1 )
          dword_3004B20[10 * v1] = dword_3005CF0;
        return v10;
      default:
        return v10;
    }
  }
  return v10;
}
