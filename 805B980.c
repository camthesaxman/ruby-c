int __fastcall sub_805B980(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned __int8 v3; // r8@1
  int v4; // r5@1
  char *v5; // r4@1
  char v6; // r1@3
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetFieldObjectGraphicsInfo(a2);
  v5 = &gSprites[68 * *(_BYTE *)(v2 + 4)];
  if ( !(*(_BYTE *)(v4 + 12) & 0xF) )
    pal_patch_for_npc(*(_WORD *)(v4 + 2), *(_BYTE *)(v4 + 12) & 0xF);
  v6 = *(_BYTE *)(v4 + 12);
  if ( (v6 & 0xF) == 10 )
    npc_load_two_palettes__and_record(*(_WORD *)(v4 + 2), v6 & 0xF);
  v5[1] = v5[1] & 0x3F | (*(_BYTE *)(*(_DWORD *)(v4 + 16) + 1) >> 6 << 6);
  v5[3] = v5[3] & 0x3F | (*(_BYTE *)(*(_DWORD *)(v4 + 16) + 3) >> 6 << 6);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(v4 + 28);
  *((_DWORD *)v5 + 2) = *(_DWORD *)(v4 + 24);
  *((_DWORD *)v5 + 6) = *(_DWORD *)(v4 + 20);
  v5[5] = v5[5] & 0xF | 16 * *(_BYTE *)(v4 + 12);
  *(_BYTE *)(v2 + 1) = *(_BYTE *)(v2 + 1) & 0xEF | 16 * ((unsigned int)*(_BYTE *)(v4 + 12) << 25 >> 31);
  *(_BYTE *)(v2 + 5) = v3;
  sub_80603CC(*(_WORD *)(v2 + 16), *(_WORD *)(v2 + 18), v5 + 32, v5 + 34);
  v5[40] = -(*(_WORD *)(v4 + 8) << 16 >> 17);
  v5[41] = -(*(_WORD *)(v4 + 10) << 16 >> 17);
  *((_WORD *)v5 + 16) += 8;
  *((_WORD *)v5 + 17) += v5[41] + 16;
  if ( (unsigned int)*(_BYTE *)(v2 + 1) >> 7 )
    CameraObjectReset1();
  return v8;
}
