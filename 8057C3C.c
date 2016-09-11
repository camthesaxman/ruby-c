int __fastcall sub_8057C3C(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  unsigned int v4; // r0@1
  int v5; // r7@3
  unsigned int v6; // r4@3
  unsigned int v7; // r0@4
  int v9; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (*(_BYTE *)(a1 + 3) + 28) & 0xFF;
  if ( v4 > 0x1F )
    v4 = (v4 - 32) & 0xFF;
  v5 = 32 * v4;
  v6 = 0;
  do
  {
    v7 = (v6 + *(_BYTE *)(v2 + 2)) & 0xFF;
    if ( v7 > 0x1F )
      v7 = (v7 - 32) & 0xFF;
    DrawMetatileAt(v3, (v5 + v7) & 0xFFFF, v2025734 + (v6 >> 1), v2025736 + 14);
    v6 = (v6 + 2) & 0xFF;
  }
  while ( v6 <= 0x1F );
  return v9;
}
