int __fastcall sub_80E9AF8(unsigned __int16 a1)
{
  int v1; // r7@1
  int i; // r6@2
  int j; // r6@8
  int v5; // [sp+20h] [bp-4h]@0

  v1 = a1;
  sub_80E9C74(a1);
  v200AE14 = -4;
  v200AE15 = 17;
  v200AE16 = 16;
  if ( v200107D )
  {
    for ( i = 0; i < *(_BYTE *)(v1 + 33597862); i = (i + 1) & 0xFFFF )
    {
      if ( (unsigned __int16)sub_80EB2D4(*(_WORD *)(2 * i + 4 * v1 + 0x200AA2A)) == 7 )
        BasicInitMenuWindow((int)&gWindowConfig_81E6D70);
      else
        BasicInitMenuWindow((int)&gWindowConfig_81E6D54);
      sub_80EB218(33598999, *(_WORD *)(2 * i + 4 * v1 + 0x200AA2A), 9);
      sub_80E9A60(33598996, 11 * i + 4, 2 * v1 & 0xFFFF);
    }
  }
  else
  {
    BasicInitMenuWindow((int)&gWindowConfig_81E6D54);
    for ( j = 0; j < *(_BYTE *)(v1 + 33597862); j = (j + 1) & 0xFFFF )
    {
      sub_80EB218(33598999, *(_WORD *)(2 * j + 4 * v1 + 0x200AA2A), 9);
      sub_80E9A60(33598996, 11 * j + 4, 2 * v1 & 0xFFFF);
    }
  }
  return v5;
}
