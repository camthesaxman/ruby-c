int __fastcall sub_81269E0(int a1)
{
  int v1; // r4@1
  int *v2; // r7@1
  char *v3; // r5@1
  char v4; // r1@4
  char v5; // r2@5
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * *(_WORD *)(a1 + 46)];
  v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
  if ( (*v2 & 0x20001) == 131073 && *((_BYTE *)v2 + 8) == *(_WORD *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 5) = *(_BYTE *)(a1 + 5) & 0xF | 16 * gUnknown_0830FD14[(unsigned int)(unsigned __int8)v3[5] >> 4];
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0x3F | ((unsigned __int8)v3[1] >> 6 << 6);
    v4 = *(_BYTE *)(a1 + 3) & 0x3F | ((unsigned __int8)v3[3] >> 6 << 6);
    *(_BYTE *)(a1 + 3) = v4;
    *(_BYTE *)(a1 + 3) = v4 & 0xC1 | 2 * (((unsigned int)(unsigned __int8)v3[3] << 26 >> 27) | 0x10);
    *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | *((_WORD *)v3 + 2) & 0x3FF;
    *(_DWORD *)(a1 + 24) = *((_DWORD *)v3 + 6);
    *(_BYTE *)(a1 + 66) = *(_BYTE *)(a1 + 66) & 0xC0 | v3[66] & 0x3F;
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | v3[62] & 4;
    *(_WORD *)(a1 + 32) = *((_WORD *)v3 + 16);
    *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 50) + sub_81268D0((int)v2) + *((_WORD *)v3 + 17);
    *(_BYTE *)(v1 + 40) = v3[40];
    *(_BYTE *)(v1 + 41) = v3[41];
    *(_WORD *)(v1 + 36) = *((_WORD *)v3 + 18);
    *(_WORD *)(v1 + 38) = -*((_WORD *)v3 + 19);
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFD | v3[62] & 2;
    if ( !*(_WORD *)(v1 + 60) )
    {
      v5 = *(_BYTE *)(v1 + 3) & 0xC1;
      *(_BYTE *)(v1 + 3) = v5;
      if ( ((unsigned int)(unsigned __int8)v3[3] << 26 >> 27) & 8 )
        *(_BYTE *)(v1 + 3) = v5 | 2;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 62) &= 0xFEu;
  }
  return v7;
}
