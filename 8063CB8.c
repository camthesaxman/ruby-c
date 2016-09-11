int __fastcall FieldObjectUpdateZCoordAndPriority(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r2@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( !(*(_BYTE *)(a1 + 3) & 4) )
  {
    FieldObjectUpdateZCoord(a1);
    v4 = *(_BYTE *)(v2 + 11) << 24;
    *(_BYTE *)(v3 + 66) = *(_BYTE *)(v3 + 66) & 0xC0 | gFieldObjectPriorities_08376070[v4 >> 28] & 0x3F;
    *(_BYTE *)(v3 + 5) = *(_BYTE *)(v3 + 5) & 0xF3 | 4 * (gFieldObjectPriorities_08376060[v4 >> 28] & 3);
  }
  return v6;
}
