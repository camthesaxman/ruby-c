int __fastcall sub_80E5270(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r7@1
  unsigned int v3; // r0@3
  unsigned int v4; // r5@3
  unsigned int v5; // r0@3
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( v202E863 )
    v202E862 = --v202E863;
  v3 = sub_80E5D34(a1) << 24;
  v4 = v3 >> 24;
  v5 = (v3 - 0x1000000) >> 24;
  if ( v5 > 0xA )
  {
    call_via_r1(v2, *(&gUnknown_083DB5A4 + v202E862));
  }
  else if ( v4 == 6 )
  {
    PlayerJumpLedge(v1);
  }
  else
  {
    sub_80E6024(v5);
    if ( ((v4 - 5) & 0xFF) > 3 )
      PlayerOnBikeCollide(v1);
  }
  return v7;
}
