int sub_81020C8()
{
  int v0; // r0@4
  char v1; // r0@16

  v2000004 &= 0xC0u;
  sub_81027A0();
  if ( v200000A )
  {
    --v200000A;
    ++v200000B;
  }
  if ( v2000008 )
  {
    v2000000 = 15;
    v0 = sub_8102A24();
    sub_8103F70(v0);
    v2000010 -= v200000E;
    if ( v2000010 & 0x8000 )
      v2000010 = 0;
    if ( v2000008 & 0x180 )
    {
      fanfare_play(0x185u);
      sub_8104CAC(6);
    }
    else if ( v2000008 & 0x40 )
    {
      fanfare_play(0x185u);
      sub_8104CAC(5);
    }
    else
    {
      fanfare_play(0x186u);
      sub_8104CAC(2);
    }
    if ( v2000008 & 0x1C0 )
    {
      v2000004 &= 0x3Fu;
      if ( v2000008 & 0x180 )
      {
        v200000A = 0;
        v200000B = 0;
        v2000003 = 0;
        if ( v2000008 & 0x100 )
          v2000003 = 1;
      }
    }
    if ( v2000008 & 0x20 )
    {
      v1 = v2000002;
      if ( v2000002 <= 0xFu )
      {
        ++v2000002;
        sub_8104064((unsigned __int8)(v1 + 1));
      }
    }
  }
  else
  {
    sub_8104CAC(3);
    v2000000 = 20;
    v2000010 += v2000012;
    if ( v2000010 > 9999 )
      v2000010 = 9999;
  }
  return 0;
}
