int sub_8098350()
{
  unsigned int v0; // r4@2
  unsigned int v1; // r4@5
  int v3; // [sp+18h] [bp-4h]@0

  if ( v20011F0 )
  {
    sub_809D034(100694016, 1, 0, 33789792);
    v0 = 0;
    do
    {
      StartSpriteAnimIfDifferent(*(_DWORD *)(4 * v0 + 0x20012B0), 2 * v0 + 1);
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 1 );
  }
  else
  {
    sub_809D034(100694016, 1, 0, 33789792);
    v1 = 0;
    do
    {
      StartSpriteAnim(*(_DWORD *)(4 * v1 + 0x20012B0), 2 * v1);
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 1 );
  }
  return v3;
}
