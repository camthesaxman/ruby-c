int UpdateCameraPanning()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( dword_30005A0 )
    call_via_r0(dword_30005A0);
  gSpriteCoordOffsetX = word_300489C - word_3000598;
  gSpriteCoordOffsetY = word_3004898 - word_300059A - 8;
  return v1;
}
