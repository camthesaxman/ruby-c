int sub_80B379C()
{
  int v0; // r1@1
  unsigned int v1; // r2@2
  unsigned __int16 v2; // r5@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 0;
    v2 = v0 + 1;
    do
    {
      gBG1TilemapBuffer[32 * (v0 + 12) + v1] = *(_WORD *)(2 * (32 * v0 + v1) + 0x2018300) - 15392;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 0xD );
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v2 <= 7u );
  return v4;
}
