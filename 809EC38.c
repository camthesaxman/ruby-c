int __fastcall sub_809EC38(unsigned __int8 a1)
{
  int v1; // r4@1
  _WORD *v2; // r6@1
  unsigned int v3; // r0@1
  _WORD *v4; // r2@9
  int v5; // r0@18
  int v6; // r0@20
  char v7; // r0@27
  int v8; // r0@32
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *v2;
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        if ( v2018080 )
        {
          if ( v201800B )
            word_30042C0 = 256;
          if ( v201800B == 1 )
            v400000A = (v400000A & 0xE0FF) + 2048;
          if ( v201800B == 2 )
          {
            v4 = (_WORD *)67108874;
            goto _0809ECF6;
          }
        }
        else
        {
          if ( v201800B )
            word_3004288 = 256;
          if ( v201800B == 1 )
            v400000C = (v400000C & 0xE0FF) + 2048;
          if ( v201800B == 2 )
          {
            v4 = (_WORD *)67108876;
_0809ECF6:
            *v4 = (*v4 & 0xE0FF) + 2560;
            goto _0809EE3A;
          }
        }
_0809EE3A:
        ++*v2;
        break;
      case 1u:
        if ( v2018080 )
        {
          v6 = (unsigned __int16)word_3004288 - 32;
          word_3004288 -= 32;
          if ( v6 << 16 )
            return v10;
          v400000A = (v400000A & 0xFFFC) + 1;
          v400000C = (v400000C & 0xFFFC) + 2;
        }
        else
        {
          v5 = (unsigned __int16)word_30042C0 - 32;
          word_30042C0 -= 32;
          if ( v5 << 16 )
            return v10;
          v400000A = (v400000A & 0xFFFC) + 2;
          v400000C = (v400000C & 0xFFFC) + 1;
        }
        goto _0809EE3A;
      case 2u:
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
        goto _0809EE3A;
      case 3u:
        v8 = sub_80A0EE8(v3);
        sub_80A0DD0(v8);
        goto _0809EE3A;
      case 4u:
        call_via_r1(33652752, *(&gUnknown_083C1598 + v201800B));
        v2018080 ^= 1u;
        goto _0809EE3A;
      case 5u:
        if ( sub_8055870() != 1 )
          dword_3004B20[10 * v1] = dword_3005CF0;
        return v10;
      default:
        return v10;
    }
  }
  return v10;
}
