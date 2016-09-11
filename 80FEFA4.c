signed int sub_80FEFA4()
{
  unsigned int v0; // r2@1
  int v1; // r1@1

  v0 = 0;
  v1 = v20388F4 + v20388F2 + 1;
  do
  {
    if ( *(_BYTE *)(v0 + 33786070) == v1 || v0 <= 0xB && *(_BYTE *)(v0 + 33786086) == v1 )
      return 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xF );
  return 1;
}
