int sub_80E88F0()
{
  unsigned int v0; // r4@1
  int v1; // r3@2
  int v2; // r2@2
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 4 * v0 + 33558700;
    *(_BYTE *)(*(_DWORD *)v1 + 62) |= 4u;
    *(_WORD *)(*(_DWORD *)v1 + 48) = 0;
    v2 = 4 * v0 + 33558708;
    *(_BYTE *)(*(_DWORD *)v2 + 62) |= 4u;
    *(_WORD *)(*(_DWORD *)v2 + 48) = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  v200AC70 = 0;
  return v4;
}
