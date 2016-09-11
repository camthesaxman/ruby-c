int __fastcall sub_805C058(int a1, __int16 a2, __int16 a3)
{
  int v3; // r6@1
  __int16 v4; // r4@1
  __int16 v5; // r5@1
  char *v6; // r7@1
  int v7; // r8@1
  int v9; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &gSprites[68 * *(_BYTE *)(a1 + 4)];
  v7 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  npc_coords_set(v3, v4, v5);
  sub_80603CC(*(_WORD *)(v3 + 16), *(_WORD *)(v3 + 18), v6 + 32, v6 + 34);
  v6[40] = -(*(_WORD *)(v7 + 8) << 16 >> 17);
  v6[41] = -(*(_WORD *)(v7 + 10) << 16 >> 17);
  *((_WORD *)v6 + 16) += 8;
  *((_WORD *)v6 + 17) += v6[41] + 16;
  sub_805B914(v3);
  if ( (unsigned int)*(_BYTE *)(v3 + 1) >> 7 )
    CameraObjectReset1();
  return v9;
}
