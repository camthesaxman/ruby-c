int atkBD_copyfoestats()
{
  signed int v0; // r2@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 88 * v2024C07 + 33704600) = *(_BYTE *)(v0 + 88 * v2024C08 + 33704600);
    ++v0;
  }
  while ( v0 <= 7 );
  v2024C10 += 5;
  return v2;
}
