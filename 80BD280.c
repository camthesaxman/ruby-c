int sub_80BD280()
{
  signed int v0; // r2@1
  unsigned int v1; // r5@2
  unsigned __int8 v2; // r9@2
  int v3; // r6@3
  int v4; // r4@5
  const char *v5; // r4@8
  int v7; // [sp+0h] [bp-BCh]@8
  int v8; // [sp+B8h] [bp-4h]@11

  v0 = 1;
  do
  {
    v1 = (v0 + 1) & 0xFF;
    v2 = v0 + 1;
    if ( v1 <= 0x13 )
    {
      v3 = 160 * v0 + 33714492;
      do
      {
        if ( !(*(_BYTE *)(v3 + 1) & 0xC0) && (v4 = 4 * v1, (*(_BYTE *)(160 * v1 + 0x202713D) & 0xC0) == 64)
          || (*(_BYTE *)(v3 + 1) & 0xC0) == 128 && (v4 = 4 * v1, (*(_BYTE *)(160 * v1 + 0x202713D) & 0xC0) != 128) )
        {
          memcpy(&v7, (const char *)v3, 160);
          v5 = (const char *)(32 * (v4 + v1) + 33714492);
          memcpy(v3, v5, 160);
          memcpy(v5, (const char *)&v7, 160);
        }
        v1 = (v1 + 1) & 0xFF;
      }
      while ( v1 <= 0x13 );
    }
    v0 = v2;
  }
  while ( v2 <= 0x12u );
  return v8;
}
