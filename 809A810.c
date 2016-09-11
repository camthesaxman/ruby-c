int sub_809A810()
{
  unsigned int v0; // r3@1
  int v1; // r1@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 4 * v0 + 33557760;
    *(_WORD *)(*(_DWORD *)v1 + 32) = 136 * v0 + 92;
    *(_WORD *)(*(_DWORD *)v1 + 36) = 0;
    *(_BYTE *)(*(_DWORD *)(4 * v0 + 0x2000D00) + 62) &= 0xFBu;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  sub_809A860(1);
  return v3;
}
