int sub_80B3720()
{
  int v0; // r1@1
  int v1; // r2@2
  unsigned int v2; // r1@2
  int v4; // [sp+Ch] [bp-4h]@0

  LOWORD(v0) = 0;
  do
  {
    v1 = (signed __int16)v0;
    v2 = 2 * (signed __int16)v0;
    if ( *(_WORD *)(v2 + 33652736) )
      gBG1TilemapBuffer[v2 / 2] = *(_WORD *)(v2 + 33652736) - 15392;
    v0 = (v1 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v1 + 1) <= 1023 );
  return v4;
}
