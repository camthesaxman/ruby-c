int __fastcall PlayCollisionSoundIfNotFacingWarp(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@3
  signed __int16 v4; // [sp+0h] [bp-Ch]@3
  int v5; // [sp+8h] [bp-4h]@5

  v1 = a1;
  if ( !(call_via_r1(BYTE2(dword_30048A0[9 * v202E85D + 7]), *(&gUnknown_0830FC34 + a1 - 1)) << 24) )
  {
    if ( v1 != 2
      || (PlayerGetDestCoords(&v4, &v4 + 1),
          MoveCoords(2, &v4, &v4 + 1),
          v2 = MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1)),
          !(is_tile_x69_2_warp_door(v2) << 24)) )
    {
      audio_play(7);
    }
  }
  return v5;
}
