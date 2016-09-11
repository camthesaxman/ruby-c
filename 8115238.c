int sub_8115238()
{
  char v0; // r3@1
  __int16 v1; // r2@4
  unsigned int v2; // r4@6
  int v3; // r2@7
  unsigned int v4; // r4@8
  int v5; // r1@9
  char v6; // r0@11
  char v7; // r1@11
  __int16 v9; // [sp+0h] [bp-18h]@1
  __int16 v10; // [sp+2h] [bp-16h]@5
  int v11; // [sp+14h] [bp-4h]@15

  memcpy(&v9, (const char *)&gUnknown_083F8EC4, 6);
  memset(33656832, 0, 380);
  v0 = v2019004 & 0xFC | v202E8CC & 1;
  v2019004 = v2019004 & 0xFC | v202E8CC & 1;
  if ( v202E8CC & 0x80 )
    v2019004 = v0 | 0x80;
  v2019022 = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 3];
  v2019023 = gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 4];
  v2019019 = *(&gUnknown_083F8DF0[2 * ((unsigned int)v2019004 << 24 >> 31)] + (v2019004 & 3));
  v201901A = v201901A & 0xF | 0x10;
  if ( v2019019 == 1 )
    v1 = v9;
  else
    v1 = v10;
  v202EF6A = v1;
  v202EEC8 = v1;
  v202EB6A = v1;
  v202EAC8 = v1;
  sub_8124918(33657016);
  v2 = 0;
  do
  {
    sub_812492C(33657016, v2, (char *)&gUnknown_083F8E34 + 8 * v2);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xC );
  v4 = 0;
  do
  {
    v5 = GetMonData((int)&dword_3004360[25 * v4], 65, v3);
    if ( v5 == 304 )
    {
      v6 = v2019002;
      v7 = 2;
    }
    else
    {
      if ( v5 != 306 )
        goto _0811536C;
      v6 = v2019002;
      v7 = 1;
    }
    v2019002 = v6 | v7;
_0811536C:
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 5 );
  RtcCalcLocalTime();
  return v11;
}
