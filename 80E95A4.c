int sub_80E95A4()
{
  signed int v0; // r0@4
  signed int v1; // r0@5
  int v3; // [sp+0h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6D8C);
  if ( v2001009 <= 5u )
  {
    switch ( v2001009 )
    {
      case 4u:
        sub_80E9620(4, 6);
        break;
      case 5u:
        v0 = 2;
        goto _080E9602;
      case 0u:
        v1 = 3;
        goto _080E95F8;
      case 1u:
        v1 = 0;
_080E95F8:
        sub_80E9620(v1, 5);
        break;
      case 2u:
        v0 = 4;
_080E9602:
        sub_80E9620(v0, 17);
        break;
      case 3u:
        sub_80E9620(3, 6);
        break;
      default:
        break;
    }
  }
  BasicInitMenuWindow((int)&gWindowConfig_81E6DA8);
  return v3;
}
