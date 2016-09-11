int sub_804AF84()
{
  signed int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( !*(_BYTE *)(v0 + 33720388) && *(_BYTE *)(dword_3004824 + 181 + v0) )
      *(_BYTE *)(v0 + 33720388) = *(_BYTE *)(dword_3004824 + 181 + v0);
    ++v0;
  }
  while ( v0 <= 10 );
  return v2;
}
