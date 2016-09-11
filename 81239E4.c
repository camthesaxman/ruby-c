int sub_81239E4()
{
  signed int v0; // r1@1
  int v1; // r0@1
  int v2; // r0@13
  signed int v3; // r2@13
  int v4; // r1@17
  signed int v5; // r0@17
  int v7; // [sp+14h] [bp-4h]@0

  v0 = v2039274;
  v1 = *(_BYTE *)(v2039274 + 1);
  if ( v1 == 255 )
    goto _08123AC0;
  --*(_BYTE *)(v2039274 + 20);
  if ( !(*(_WORD *)(v2039274 + 6) & 1) )
    --*(_BYTE *)(v2039274 + 21);
  if ( !(*(_WORD *)(v2039274 + 6) & 7) )
  {
    --*(_BYTE *)(v2039274 + 12);
    --*(_BYTE *)(v2039274 + 13);
  }
  v1 = v2039274;
  v0 = *(_BYTE *)(v2039274 + 20);
  if ( v0 == 32 )
  {
    v2 = v2039274 + 2300;
    v3 = 2;
    goto _08123A82;
  }
  if ( v0 <= 32 )
  {
    if ( v0 == 16 )
    {
      sub_8124F08(v2039274 + 2300, &gCableCarPylonHookTilemapEntries, 0, 0);
      sub_8124F08(v2039274 + 2300, 33659352, 0, 2);
      v0 = v2039274;
      v1 = 64;
      *(_BYTE *)(v2039274 + 21) = 64;
    }
    goto _08123AC0;
  }
  if ( v0 == 40 )
  {
    v2 = v2039274 + 2300;
    v3 = 3;
_08123A82:
    v1 = sub_8124E7C(v2, 0, v3, 0);
    goto _08123AC0;
  }
  if ( v0 == 175 )
    v1 = sub_8124E7C(v2039274 + 2300, 0, 0, 22);
_08123AC0:
  sub_812453C(v1, v0);
  v4 = gSpriteCoordOffsetX + 1;
  v5 = v4;
  if ( v4 < 0 )
    v5 = gSpriteCoordOffsetX + 128;
  gSpriteCoordOffsetX = v4 - ((unsigned __int16)(v5 >> 7) << 7);
  return v7;
}
