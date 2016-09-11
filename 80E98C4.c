int sub_80E98C4()
{
  unsigned __int8 v0; // r1@3
  char v1; // r3@3
  int v3; // [sp+0h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6D8C);
  if ( v2001009 <= 5u )
  {
    switch ( v2001009 )
    {
      case 4u:
        v0 = 4;
        v1 = 2;
        goto _080E991E;
      case 0u:
      case 5u:
        v0 = 3;
        v1 = 2;
        goto _080E991E;
      case 1u:
        v0 = 1;
        v1 = 3;
        goto _080E991E;
      case 2u:
        v0 = 4;
        goto _080E991C;
      case 3u:
        v0 = 3;
_080E991C:
        v1 = 1;
_080E991E:
        MenuFillWindowRectWithBlankTile(2u, v0, 0x1Bu, v0 + 2 * v1 - 1);
        BasicInitMenuWindow((int)&gWindowConfig_81E6DA8);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
