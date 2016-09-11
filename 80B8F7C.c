int ContestEffect_46()
{
  signed __int16 v0; // r4@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( v2019217 )
  {
    switch ( v2019217 )
    {
      case 1:
        v0 = 20;
        sub_80B13EC(v20192E1, 27);
        break;
      case 2:
        v0 = 30;
        sub_80B13EC(v20192E1, 28);
        break;
      case 3:
        v0 = 50;
        sub_80B13EC(v20192E1, 29);
        break;
      default:
        v0 = 60;
        sub_80B13EC(v20192E1, 30);
        break;
    }
  }
  else
  {
    v0 = 10;
    sub_80B13EC(v20192E1, 26);
  }
  *(_WORD *)(28 * v20192E1 + 0x2019262) = v0;
  return v2;
}
