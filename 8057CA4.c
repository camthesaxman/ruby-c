int __fastcall RedrawMapSliceSouth(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r7@1
  unsigned int v5; // r4@1
  unsigned int v6; // r0@2
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 32 * *(_BYTE *)(a1 + 3);
  v5 = 0;
  do
  {
    v6 = (v5 + *(_BYTE *)(v2 + 2)) & 0xFF;
    if ( v6 > 0x1F )
      v6 = (v6 - 32) & 0xFF;
    DrawMetatileAt(v3, v4 + v6, v2025734 + (v5 >> 1), v2025736);
    v5 = (v5 + 2) & 0xFF;
  }
  while ( v5 <= 0x1F );
  return v8;
}
