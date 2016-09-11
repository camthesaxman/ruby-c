int sub_804F238()
{
  signed int v0; // r4@1
  int v1; // r3@2
  int v2; // r3@3
  signed int v3; // r4@4
  int v4; // r6@4
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = dword_3004854;
    *(_WORD *)(dword_3004854 + 162 + 2 * v0) = 255;
    *(_WORD *)(v1 + 154 + 2 * v0) = *(&gUnknown_082162EC[4 * (*(_BYTE *)(v1 + 136) - 2)] + v0);
    ++v0;
  }
  while ( v0 <= 3 );
  v2 = 0;
  do
  {
    v3 = 0;
    v4 = v2 + 1;
    do
    {
      if ( *(_WORD *)(dword_3004854 + 154 + 2 * v3) == v2 )
        *(_WORD *)(dword_3004854 + 162 + 2 * v2) = v3;
      ++v3;
    }
    while ( v3 <= 3 );
    ++v2;
  }
  while ( v4 <= 3 );
  return v6;
}
