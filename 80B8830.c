int ContestEffect_34()
{
  unsigned int v0; // r0@1
  signed __int16 v1; // r4@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int16)Random() % 0xAu & 0xFF;
  if ( v0 > 2 )
  {
    if ( v0 > 5 )
    {
      if ( v0 > 7 )
      {
        if ( v0 > 8 )
        {
          v1 = 80;
          sub_80B13EC(v20192E1, 30);
        }
        else
        {
          v1 = 60;
          sub_80B13EC(v20192E1, 29);
        }
      }
      else
      {
        v1 = 40;
        sub_80B13EC(v20192E1, 28);
      }
    }
    else
    {
      v1 = 20;
      sub_80B13EC(v20192E1, 27);
    }
  }
  else
  {
    v1 = 10;
    sub_80B13EC(v20192E1, 26);
  }
  *(_WORD *)(28 * v20192E1 + 0x2019262) = v1;
  return v3;
}
