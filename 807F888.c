int sub_807F888()
{
  int v0; // r1@2
  int v1; // r3@3
  int v3; // [sp+8h] [bp-4h]@0

  v202FEE4 = gSpriteCoordOffsetX & 0x1FF;
  if ( (gSpriteCoordOffsetX & 0x1FFu) > 0xEF )
  {
    v0 = gSpriteCoordOffsetX & 0x1FF;
    do
    {
      v1 = v0 - 240;
      v0 = v1;
    }
    while ( (unsigned __int16)v1 > 0xEFu );
    v202FEE4 = v1;
  }
  if ( v202FEB4 == 1 )
  {
    if ( !v202FEE8 )
      sub_807F9AC();
    sub_807DBA4(0x10u, 0, 1);
    goto _0807F91A;
  }
  if ( (signed int)v202FEB4 <= 1 )
  {
    if ( v202FEB4 )
    {
_0807F928:
      sub_807DBE8();
      return v3;
    }
    sub_807F99C();
    goto _0807F91A;
  }
  if ( v202FEB4 != 2 )
    goto _0807F928;
  if ( sub_807DBE8() << 24 )
  {
    v202FEBA = 1;
_0807F91A:
    ++v202FEB4;
  }
  return v3;
}
