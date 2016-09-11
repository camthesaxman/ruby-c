int sub_80F7B40()
{
  unsigned int v0; // r2@1
  unsigned int v1; // r2@3
  int v3; // [sp+8h] [bp-4h]@0

  StringCopy((_BYTE *)0x20284E2, (_BYTE *)0x2024EA4);
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33719533) = *(_BYTE *)(v0 + 33705646);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  v1 = 0;
  do
  {
    *(_WORD *)(2 * v1 + 0x20284CA) = *(_WORD *)(2 * v1 + 0x20284D6);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 5 );
  v20284F1 = 1;
  return v3;
}
