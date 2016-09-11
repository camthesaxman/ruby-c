int __fastcall sub_811C7B0(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r8@1
  char *v4; // r5@1
  char *v5; // r6@1
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 38);
  v3 = 4 * v2;
  *(_WORD *)(a1 + 34) = (unsigned __int8)sub_80859BC(
                                           gUnknown_083FD850[v2],
                                           *(_WORD *)((char *)&gUnknown_083FD86A + v3) - 32,
                                           *(_WORD *)((char *)&unk_83FD86C + v3) + 42,
                                           0,
                                           33603644);
  *(_WORD *)(v1 + 36) = (unsigned __int8)sub_80859BC(v2024EAC, 272, 106, 0, 33603644);
  v4 = &gSprites[68 * *(_WORD *)(v1 + 34)];
  v5 = &gSprites[68 * *(_WORD *)(v1 + 36)];
  *((_DWORD *)v4 + 7) = sub_811C90C;
  *((_DWORD *)v5 + 7) = sub_811C90C;
  v4[1] |= 3u;
  v5[1] |= 3u;
  v4[3] = v4[3] & 0xC1 | 2 * (AllocOamMatrix() & 0x1F);
  v5[3] = v5[3] & 0xC1 | 2 * (AllocOamMatrix() & 0x1F);
  v4[1] = v4[1] & 0x3F | 0x40;
  v5[1] = v5[1] & 0x3F | 0x40;
  v4[3] |= 0xC0u;
  v5[3] |= 0xC0u;
  CalcCenterToCornerVec((int)v4, 1, 3, 3);
  CalcCenterToCornerVec((int)v5, 1, 3, 3);
  SetOamMatrixRotationScaling(
    (unsigned int)(unsigned __int8)v4[3] << 26 >> 27,
    *(_WORD *)((char *)&gUnknown_083FD856 + v3),
    *(_WORD *)((char *)&unk_83FD858 + v3),
    0);
  SetOamMatrixRotationScaling((unsigned int)(unsigned __int8)v5[3] << 26 >> 27, -512, 512, 0);
  return v7;
}
