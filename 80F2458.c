int __fastcall sub_80F2458(unsigned __int8 a1)
{
  int *v1; // r2@7
  int *v2; // r4@8
  int v4; // [sp+8h] [bp-4h]@0

  if ( a1 == 1 )
  {
    v2 = &gUnknown_083DFEC4;
    v2000380 = 33560456;
    v2000384 = 3072;
_080F24F2:
    v2000386 = 0;
    v1 = v2;
    goto _080F24F6;
  }
  if ( (signed int)a1 > 1 )
  {
    if ( a1 != 2 )
      return v4;
    v2 = &gUnknown_083DFEC4;
    v2000380 = 33563528;
    v2000384 = 6144;
    goto _080F24F2;
  }
  if ( a1 )
    return v4;
  v1 = &gUnknown_083DFEC4;
  v2000380 = 33555336;
  v2000384 = 5120;
  v2000386 = 0;
_080F24F6:
  LoadSpriteSheet(*v1 + 896);
  return v4;
}
