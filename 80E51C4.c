int __fastcall sub_80E51C4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r0@5
  unsigned int v4; // r4@5
  unsigned int v5; // r0@5
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( sub_80E5E70(a1, *((_BYTE *)v2 + 30)) << 24 )
  {
    v3 = sub_80E5D34(v1) << 24;
    v4 = v3 >> 24;
    v5 = (v3 - 0x1000000) >> 24;
    if ( v5 > 0xA )
    {
      call_via_r1(v1, *(&gUnknown_083DB5A4 + v202E862));
      v202E863 = v202E862 + ((unsigned int)v202E862 << 24 >> 25);
      if ( v202E862 <= 1u )
        ++v202E862;
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
  }
  else if ( v202E863 )
  {
    sub_80E5270((unsigned int)*((_BYTE *)v2 + 24) >> 4);
  }
  else
  {
    sub_80E5168(*((_BYTE *)v2 + 24) >> 4);
  }
  return v7;
}
