signed int sub_80F1AC4()
{
  int v0; // r0@8
  unsigned int v1; // r2@9
  unsigned __int16 v2; // r1@9
  void *v3; // r0@13
  signed int v4; // r2@13

  if ( v2000306 == 1 )
  {
    v3 = &gPokenavMenuOptions_Gfx;
    v4 = 904;
_080F1B44:
    LZ77UnCompWram(v3, v4 + 0x2000000);
    goto _080F1B6C;
  }
  if ( (signed int)v2000306 <= 1 )
  {
    if ( !v2000306 )
    {
      v0 = 0;
      do
      {
        v1 = 0;
        v2 = v0 + 1;
        do
        {
          *(_DWORD *)(4 * v1 + 16 * v0 + 0x2000320) = 0;
          v1 = (v1 + 1) & 0xFFFF;
        }
        while ( v1 <= 3 );
        v0 = (unsigned __int16)(v0 + 1);
      }
      while ( v2 <= 5u );
      v2000311 = 0;
    }
    goto _080F1B6C;
  }
  if ( v2000306 == 2 )
  {
    v3 = &gPokenavConditionMenu_Gfx;
    v4 = 6024;
    goto _080F1B44;
  }
  if ( v2000306 == 3 )
  {
    LZ77UnCompWram(&gPokenavConditionSearch_Gfx, 33563528);
    return 0;
  }
_080F1B6C:
  ++v2000306;
  return 1;
}
