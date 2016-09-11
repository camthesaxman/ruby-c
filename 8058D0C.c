int __fastcall sub_8058D0C(unsigned __int8 a1, char a2)
{
  int v2; // r5@1
  char v3; // r4@1
  int v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CheckForPlayerAvatarCollision(a1);
  if ( v4 )
  {
    if ( v4 == 6 )
    {
      PlayerJumpLedge(v2);
    }
    else if ( ((v4 - 5) & 0xFFu) > 3 )
    {
      PlayerNotOnBikeCollide(v2, v4);
    }
  }
  else if ( v202E858 & 8 )
  {
    sub_80593C4(v2);
  }
  else if ( v202E858 & 0x10
         || !(v3 & 2)
         || !(FlagGet(2144) << 24)
         || sub_80E5DEC(BYTE2(dword_30048A0[9 * v202E85D + 7])) << 24 )
  {
    PlayerGoSpeed0(v2);
  }
  else
  {
    sub_805940C(v2);
    v202E858 |= 0x80u;
  }
  return v6;
}
