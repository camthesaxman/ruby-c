int sub_807FF4C()
{
  int v0; // r0@1
  int v1; // r0@9
  int v3; // [sp+8h] [bp-4h]@0

  v0 = sub_8080064();
  sub_808002C(v0);
  if ( v202FEFA > 0x5Fu )
    v202FEFA = 32;
  if ( v202FEB4 == 1 )
  {
    sub_807DBA4(0x10u, 0, 0);
_0807FFB6:
    ++v202FEB4;
    return v3;
  }
  if ( (signed int)v202FEB4 <= 1 )
  {
    if ( v202FEB4 )
      return v3;
    v1 = sub_8080178();
    sub_8080238(v1);
    goto _0807FFB6;
  }
  if ( v202FEB4 == 2 && sub_807DBE8() << 24 )
  {
    v202FEBA = 1;
    goto _0807FFB6;
  }
  return v3;
}
