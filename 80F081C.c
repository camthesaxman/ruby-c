int __fastcall sub_80F081C(unsigned __int8 a1)
{
  unsigned int v1; // r5@1
  unsigned int v2; // r1@6
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  BasicInitMenuWindow((int)&gWindowConfig_81E710C);
  if ( v1 <= 4 )
  {
    switch ( v1 )
    {
      case 0u:
      case 1u:
        sub_8072B4C(&gUnknown_08410E22, 10, 9u);
        if ( !v1 )
          goto _080F0862;
        break;
      case 2u:
_080F0862:
        ConvertIntToDecimalStringN((char *)0x2008788, v2008774 + 1, 1, 5);
        sub_8072B4C((_BYTE *)0x2008788, 10, 0xBu);
        if ( !v1 )
          goto _080F088C;
        break;
      case 3u:
_080F088C:
        sub_8072B4C(&gUnknown_08410E31, 10, 0xDu);
        if ( !v1 )
          goto _080F089A;
        break;
      case 4u:
_080F089A:
        v2 = sub_8053108(9u);
        if ( v2 > 0x1869F )
          v2 = 99999;
        ConvertIntToDecimalStringN((char *)0x2008788, v2, 1, 5);
        sub_8072B4C((_BYTE *)0x2008788, 10, 0xFu);
        break;
      default:
        return v4;
    }
  }
  return v4;
}
