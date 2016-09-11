int __fastcall sub_809F43C(unsigned __int8 a1)
{
  int v1; // r4@1
  char *v2; // r1@4
  int v3; // r2@10
  int v4; // r0@11
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)byte_3001BAC > 8u )
  {
def_809F45A:
    if ( sub_8055870() != 1 )
    {
      byte_3001BAC = 0;
      dword_3004B20[10 * v1] = v2018084;
    }
  }
  else
  {
    switch ( byte_3001BAC )
    {
      case 0:
        sub_8075398();
        goto _0809F5B2;
      case 1:
        DestroySpriteAndFreeResources((int)&gSprites[68 * v201800C]);
        v2 = &byte_3001BAC;
        goto _0809F5B8;
      case 2:
        DestroySpriteAndFreeResources((int)&gSprites[68 * v201800D]);
        goto _0809F5B2;
      case 3:
        v2018074 = 0;
        v2018079 = 0;
        v2 = &byte_3001BAC;
        goto _0809F5B8;
      case 4:
        sub_809F678(33652752);
        if ( sub_80A1CD8(33652752) << 24 )
          sub_80A12D0(2);
        sub_80A0EA4(33652752);
        goto _0809F5B2;
      case 5:
        v201800C = sub_809F6B4(33652752, 33652852);
        if ( v201800C == 255 )
          return v6;
        v2018074 = 0;
        v4 = GetMonData(33652752, 45, v3);
        if ( v4 )
          word_30041B0 = 256;
        else
          word_30041B0 = v4;
        v2 = &byte_3001BAC;
        goto _0809F5B8;
      case 6:
        sub_80A1DCC(33652752);
        goto _0809F5B2;
      case 7:
        sub_80A1DE8(33652752);
        v2 = &byte_3001BAC;
        goto _0809F5B8;
      case 8:
        if ( sub_809F5F8() << 24 )
        {
          v2018074 = 0;
_0809F5B2:
          v2 = &byte_3001BAC;
_0809F5B8:
          ++*v2;
        }
        break;
      default:
        goto def_809F45A;
    }
  }
  return v6;
}
