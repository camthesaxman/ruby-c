int __fastcall sub_813D220(int a1)
{
  int v1; // r7@1
  int v2; // r4@1
  int v3; // r1@3
  signed __int16 v4; // r2@3
  __int16 v5; // r3@3
  int v6; // r0@5
  int v7; // r4@7
  int v8; // r3@7
  __int16 v9; // r2@7
  int v10; // r1@7
  int v11; // r0@7
  unsigned int v12; // r8@7
  unsigned int v13; // r10@7
  int v14; // r0@7
  unsigned int v15; // r5@9
  int v16; // r0@9
  unsigned int v17; // r6@11
  int v19; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32);
  if ( (signed int)*(_WORD *)(a1 + 32) > 116 )
  {
    v3 = *(_WORD *)(a1 + 54);
    v4 = *(_WORD *)((char *)gSineTable + (2 * v3 & 0x1FF));
    v5 = *(_WORD *)((char *)gSineTable + (2 * (v3 + 64) & 0x1FF));
    *(_WORD *)(a1 + 54) = v3 + 2;
    *(_WORD *)(a1 + 38) = v4 / 32;
    *(_WORD *)(a1 + 32) = v2 - 1;
    if ( (v2 - 1) & 1 )
      ++*(_WORD *)(a1 + 34);
    v6 = -v5;
    if ( v5 > 0 )
      v6 = 15 - v5;
    v7 = *(_WORD *)(v1 + 50);
    v8 = *(_WORD *)(v1 + 52);
    v9 = *(_WORD *)((char *)gSineTable + (2 * (((unsigned int)(v6 << 12) >> 16) - 16) & 0x1FF));
    v10 = *(_WORD *)((char *)gSineTable + (2 * (((unsigned int)(v6 << 12) >> 16) + 48) & 0x1FF));
    v11 = v10 * v7;
    v12 = (unsigned int)((v11 + (v11 < 0 ? 0xFF : 0)) << 8) >> 16;
    v13 = (unsigned int)((-v9 * v8 + (-v9 * v8 < 0 ? 0xFF : 0)) << 8) >> 16;
    v14 = v9 * v7;
    if ( v14 < 0 )
      v14 += 255;
    v15 = (unsigned int)(v14 << 8) >> 16;
    v16 = v10 * v8;
    if ( v10 * v8 < 0 )
      v16 += 255;
    v17 = (unsigned int)(v16 << 8) >> 16;
    SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, v7, 0, 0, *(_WORD *)(v1 + 52));
    SetOamMatrix((*(_WORD *)(v1 + 48) + 1) & 0xFF, v12, v15, v13, v17);
    SetOamMatrix((*(_WORD *)(v1 + 48) + 2) & 0xFF, v12, v15, 2 * v13, 2 * v17);
  }
  else
  {
    *(_WORD *)(a1 + 34) += *(_WORD *)(a1 + 38);
    *(_WORD *)(a1 + 38) = 0;
    *(_WORD *)(a1 + 32) = v2 + 4;
    *(_WORD *)(a1 + 36) = -4;
    *(_WORD *)(a1 + 54) = 128;
    *(_DWORD *)(a1 + 28) = sub_813D368;
  }
  return v19;
}
