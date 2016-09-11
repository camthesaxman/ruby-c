int sub_804AF10()
{
  int v0; // r5@1
  signed int v1; // r4@2
  int i; // r8@2
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 0;
    for ( i = v0 + 1; v1 < *(_BYTE *)(dword_3004824 + 66 + v0); ++v1 )
      sub_809D824(
        &gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v1 + 6 * v0)],
        (4 - *(_BYTE *)(dword_3004824 + 105 + v1 + 6 * v0)) & 0xFF);
    ++v0;
  }
  while ( i <= 1 );
  return v4;
}
