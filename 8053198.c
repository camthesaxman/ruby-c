int sub_8053198()
{
  int v0; // r1@1
  signed int v1; // r3@1
  signed int v2; // r2@1
  int v4; // [sp+0h] [bp-4h]@0

  v0 = *(_DWORD *)(v202E82C + 4);
  v1 = 33710932;
  v2 = 63;
  do
  {
    *(_DWORD *)(v1 + 16) = *(_DWORD *)(v0 + 16);
    v0 += 24;
    v1 += 24;
    --v2;
  }
  while ( v2 >= 0 );
  return v4;
}
