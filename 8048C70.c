int sub_8048C70()
{
  signed int v0; // r3@1
  signed int v1; // r4@1
  char *v2; // r1@3
  char *v3; // r1@6
  int v5; // [sp+18h] [bp-4h]@0

  v0 = 0;
  v1 = 6;
  do
  {
    if ( v0 >= *(_BYTE *)(dword_3004824 + 66) )
    {
      *(_BYTE *)(dword_3004824 + 68 + v0) = 0;
    }
    else
    {
      v2 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v0) + 62];
      *v2 &= 0xFBu;
      *(_BYTE *)(dword_3004824 + 68 + v0) = 1;
    }
    if ( v0 >= *(_BYTE *)(dword_3004824 + 67) )
    {
      *(_BYTE *)(dword_3004824 + 68 + v1) = 0;
    }
    else
    {
      v3 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 58 + v0) + 62];
      *v3 &= 0xFBu;
      *(_BYTE *)(dword_3004824 + 68 + v1) = 1;
    }
    ++v1;
    ++v0;
  }
  while ( v0 <= 5 );
  *(_BYTE *)(dword_3004824 + 80) = 1;
  return v5;
}
