int sub_8048A50()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v20297D8 = *(_BYTE *)(dword_3004824 + 65);
    v20297D9 = *(_BYTE *)(dword_3004824 + 138);
    sub_800832C();
    *(_BYTE *)(dword_3004824 + 123) = 13;
  }
  return v1;
}
